/*  
 *  Copyright Droids Corporation, Microb Technology, Eirbot (2009)
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
 *  Revision : $Id $
 *
 */

/* WARNING : this file is automatically generated by scripts.
 * You should not edit it. If you find something wrong in it,
 * write to zer0@droids-corp.org */


/* prescalers timer 0 */
#define TIMER0_PRESCALER_DIV_0          0
#define TIMER0_PRESCALER_DIV_1          1
#define TIMER0_PRESCALER_DIV_-3         2
#define TIMER0_PRESCALER_DIV_64         3
#define TIMER0_PRESCALER_DIV_256        4
#define TIMER0_PRESCALER_DIV_1024       5
#define TIMER0_PRESCALER_DIV_FALL       6
#define TIMER0_PRESCALER_DIV_RISE       7

#define TIMER0_PRESCALER_REG_0          0
#define TIMER0_PRESCALER_REG_1          1
#define TIMER0_PRESCALER_REG_2          -3
#define TIMER0_PRESCALER_REG_3          64
#define TIMER0_PRESCALER_REG_4          256
#define TIMER0_PRESCALER_REG_5          1024
#define TIMER0_PRESCALER_REG_6          -1
#define TIMER0_PRESCALER_REG_7          -2


/* available timers */
#define TIMER0_AVAILABLE

/* overflow interrupt number */
#define SIG_OVERFLOW0_NUM 0
#define SIG_OVERFLOW_TOTAL_NUM 1

/* output compare interrupt number */
#define SIG_OUTPUT_COMPARE_TOTAL_NUM 0

/* Pwm nums */
#define PWM_TOTAL_NUM 0

/* input capture interrupt number */
#define SIG_INPUT_CAPTURE_TOTAL_NUM 0


/* OSCCAL */
#define CAL0_REG             OSCCAL
#define CAL1_REG             OSCCAL
#define CAL2_REG             OSCCAL
#define CAL3_REG             OSCCAL
#define CAL4_REG             OSCCAL
#define CAL5_REG             OSCCAL
#define CAL6_REG             OSCCAL
#define CAL7_REG             OSCCAL

/* ACSR */
#define ACIS0_REG            ACSR
#define ACIS1_REG            ACSR
#define ACIE_REG             ACSR
#define ACI_REG              ACSR
#define ACO_REG              ACSR
#define ACD_REG              ACSR

/* PACR */
#define DDA0_REG             PACR
#define DDA1_REG             PACR
#define PA2HC_REG            PACR
#define DDA3_REG             PACR

/* MODCR */
#define MCONF0_REG           MODCR
#define MCONF1_REG           MODCR
#define MCONF2_REG           MODCR
#define ONTIM0_REG           MODCR
#define ONTIM1_REG           MODCR
#define ONTIM2_REG           MODCR
#define OTIM3_REG            MODCR
#define ONTIM4_REG           MODCR

/* PINB */
#define PINB0_REG            PINB
#define PINB1_REG            PINB
#define PINB2_REG            PINB
#define PINB3_REG            PINB
#define PINB4_REG            PINB
#define PINB5_REG            PINB
#define PINB6_REG            PINB
#define PINB7_REG            PINB

/* PINA */
#define PINA0_REG            PINA
#define PINA1_REG            PINA
#define PINA3_REG            PINA

/* TCCR0 */
#define CS00_REG             TCCR0
#define CS01_REG             TCCR0
#define CS02_REG             TCCR0
#define OOM00_REG            TCCR0
#define OOM01_REG            TCCR0
#define FOV0_REG             TCCR0

/* MCUCS */
#define PORF_REG             MCUCS
#define EXTRF_REG            MCUCS
#define WDRF_REG             MCUCS
#define SM_REG               MCUCS
#define SE_REG               MCUCS
#define PLUPB_REG            MCUCS

/* PORTA */
#define PORTA0_REG           PORTA
#define PORTA1_REG           PORTA
#define PORTA2_REG           PORTA
#define PORTA3_REG           PORTA

/* TCNT0 */
#define TCNT00_REG           TCNT0
#define TCNT01_REG           TCNT0
#define TCNT02_REG           TCNT0
#define TCNT03_REG           TCNT0
#define TCNT04_REG           TCNT0
#define TCNT05_REG           TCNT0
#define TCNT06_REG           TCNT0
#define TCNT07_REG           TCNT0

/* IFR */
#define TOV0_REG             IFR
#define INTF0_REG            IFR
#define INTF1_REG            IFR

/* PIND */
#define PIND0_REG            PIND
#define PIND1_REG            PIND
#define PIND2_REG            PIND
#define PIND3_REG            PIND
#define PIND4_REG            PIND
#define PIND5_REG            PIND
#define PIND6_REG            PIND
#define PIND7_REG            PIND

/* ICR */
#define ISC00_REG            ICR
#define ISC01_REG            ICR
#define ICS10_REG            ICR
#define ICS11_REG            ICR
#define TOIE0_REG            ICR
#define LLIE_REG             ICR
#define INT0_REG             ICR
#define INT1_REG             ICR

/* SREG */
#define C_REG                SREG
#define Z_REG                SREG
#define N_REG                SREG
#define V_REG                SREG
#define S_REG                SREG
#define H_REG                SREG
#define T_REG                SREG
#define I_REG                SREG

/* PORTD */
#define PORTD0_REG           PORTD
#define PORTD1_REG           PORTD
#define PORTD2_REG           PORTD
#define PORTD3_REG           PORTD
#define PORTD4_REG           PORTD
#define PORTD5_REG           PORTD
#define PORTD6_REG           PORTD
#define PORTD7_REG           PORTD

/* DDRD */
#define DDD0_REG             DDRD
#define DDD1_REG             DDRD
#define DDD2_REG             DDRD
#define DDD3_REG             DDRD
#define DDD4_REG             DDRD
#define DDD5_REG             DDRD
#define DDD6_REG             DDRD
#define DDD7_REG             DDRD

/* WDTCR */
#define WDP0_REG             WDTCR
#define WDP1_REG             WDTCR
#define WDP2_REG             WDTCR
#define WDE_REG              WDTCR
#define WDTOE_REG            WDTCR

/* pins mapping */


#define IR_PORT PORTA
#define IR_BIT 2














