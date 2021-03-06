/*  
 *  Copyright Droids Corporation, Microb Technology, Eirbot (2005)
 * 
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Revision : $Id: uart_recv_nowait.c,v 1.1.2.1 2008-12-27 16:29:08 zer0 Exp $
 *
 */

/* Olivier MATZ, Droids-corp 2004 - 2009 */

#include <uart.h>
#include <uart_defs.h>
#include <uart_private.h>

/* get a char from the receive fifo */
int uart_recv_nowait(uint8_t num)
{
	char elt = 0;
	uint8_t flags;
	
	/* if interrupt mode is off, we have to check the status
	 * register */
	if (!(*uart_regs[num].ucsrb & (1 << RXCIE))) {
		if ( !(*uart_regs[num].ucsra & (1 << RXC)) )
			return -1;
		return uart_get_udr(num);
	}
	/* else check the fifo */
	else {
		IRQ_LOCK(flags);
		if( !CIRBUF_IS_EMPTY(&g_rx_fifo[num]) ) {
			elt = cirbuf_get_tail(&g_rx_fifo[num]);
			cirbuf_del_tail(&g_rx_fifo[num]);
			IRQ_UNLOCK(flags);
			return (int)elt;
		}
		IRQ_UNLOCK(flags);
		return -1;
	}
}
