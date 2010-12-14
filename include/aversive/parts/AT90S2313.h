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
#define TIMER0_PRESCALER_DIV_8          2
#define TIMER0_PRESCALER_DIV_64         3
#define TIMER0_PRESCALER_DIV_256        4
#define TIMER0_PRESCALER_DIV_1024       5
#define TIMER0_PRESCALER_DIV_FALL       6
#define TIMER0_PRESCALER_DIV_RISE       7

#define TIMER0_PRESCALER_REG_0          0
#define TIMER0_PRESCALER_REG_1          1
#define TIMER0_PRESCALER_REG_2          8
#define TIMER0_PRESCALER_REG_3          64
#define TIMER0_PRESCALER_REG_4          256
#define TIMER0_PRESCALER_REG_5          1024
#define TIMER0_PRESCALER_REG_6          -1
#define TIMER0_PRESCALER_REG_7          -2

/* prescalers timer 1 */
#define TIMER1_PRESCALER_DIV_0          0
#define TIMER1_PRESCALER_DIV_1          1
#define TIMER1_PRESCALER_DIV_8          2
#define TIMER1_PRESCALER_DIV_64         3
#define TIMER1_PRESCALER_DIV_256        4
#define TIMER1_PRESCALER_DIV_1024       5
#define TIMER1_PRESCALER_DIV_FALL       6
#define TIMER1_PRESCALER_DIV_RISE       7

#define TIMER1_PRESCALER_REG_0          0
#define TIMER1_PRESCALER_REG_1          1
#define TIMER1_PRESCALER_REG_2          8
#define TIMER1_PRESCALER_REG_3          64
#define TIMER1_PRESCALER_REG_4          256
#define TIMER1_PRESCALER_REG_5          1024
#define TIMER1_PRESCALER_REG_6          -1
#define TIMER1_PRESCALER_REG_7          -2


/* available timers */
#define TIMER0_AVAILABLE
#define TIMER1_AVAILABLE

/* overflow interrupt number */
#define SIG_OVERFLOW0_NUM 0
#define SIG_OVERFLOW1_NUM 1
#define SIG_OVERFLOW_TOTAL_NUM 2

/* output compare interrupt number */
#define SIG_OUTPUT_COMPARE1_NUM 0
#define SIG_OUTPUT_COMPARE_TOTAL_NUM 1

/* Pwm nums */
#define PWM1_NUM 0
#define PWM_TOTAL_NUM 1

/* input capture interrupt number */
#define SIG_INPUT_CAPTURE1_NUM 0
#define SIG_INPUT_CAPTURE_TOTAL_NUM 1


/* WDTCR */
#define WDP0_REG             WDTCR
#define WDP1_REG             WDTCR
#define WDP2_REG             WDTCR
#define WDE_REG              WDTCR
#define WDTOE_REG            WDTCR

/* GIMSK */
#define INT0_REG             GIMSK
#define INT1_REG             GIMSK

/* TCCR0 */
#define CS00_REG             TCCR0
#define CS01_REG             TCCR0
#define CS02_REG             TCCR0

/* SREG */
#define C_REG                SREG
#define Z_REG                SREG
#define N_REG                SREG
#define V_REG                SREG
#define S_REG                SREG
#define H_REG                SREG
#define T_REG                SREG
#define I_REG                SREG

/* DDRB */
#define DDB0_REG             DDRB
#define DDB1_REG             DDRB
#define DDB2_REG             DDRB
#define DDB3_REG             DDRB
#define DDB4_REG             DDRB
#define DDB5_REG             DDRB
#define DDB6_REG             DDRB
#define DDB7_REG             DDRB

/* USR */
#define OR_REG               USR
#define FE_REG               USR
#define UDRE_REG             USR
#define TXC_REG              USR
#define RXC_REG              USR

/* EEDR */
#define EEDR0_REG            EEDR
#define EEDR1_REG            EEDR
#define EEDR2_REG            EEDR
#define EEDR3_REG            EEDR
#define EEDR4_REG            EEDR
#define EEDR5_REG            EEDR
#define EEDR6_REG            EEDR
#define EEDR7_REG            EEDR

/* PIND */
#define PIND0_REG            PIND
#define PIND1_REG            PIND
#define PIND2_REG            PIND
#define PIND3_REG            PIND
#define PIND4_REG            PIND
#define PIND5_REG            PIND
#define PIND6_REG            PIND

/* TCCR1A */
#define PWM10_REG            TCCR1A
#define PWM11_REG            TCCR1A
#define COM1A0_REG           TCCR1A
#define COM1A1_REG           TCCR1A

/* DDRD */
#define DDD0_REG             DDRD
#define DDD1_REG             DDRD
#define DDD2_REG             DDRD
#define DDD3_REG             DDRD
#define DDD4_REG             DDRD
#define DDD5_REG             DDRD
#define DDD6_REG             DDRD

/* TCCR1B */
#define CS10_REG             TCCR1B
#define CS11_REG             TCCR1B
#define CS12_REG             TCCR1B
#define CTC1_REG             TCCR1B
#define ICES1_REG            TCCR1B
#define ICNC1_REG            TCCR1B

/* GIFR */
#define INTF0_REG            GIFR
#define INTF1_REG            GIFR

/* TIMSK */
#define TOIE0_REG            TIMSK
#define TICIE1_REG           TIMSK
#define OCIE1A_REG           TIMSK
#define TOIE1_REG            TIMSK

/* UCR */
#define TXB8_REG             UCR
#define RXB8_REG             UCR
#define CHR9_REG             UCR
#define TXEN_REG             UCR
#define RXEN_REG             UCR
#define UDRIE_REG            UCR
#define TXCIE_REG            UCR
#define RXCIE_REG            UCR

/* ACSR */
#define ACIS0_REG            ACSR
#define ACIS1_REG            ACSR
#define ACIC_REG             ACSR
#define ACIE_REG             ACSR
#define ACI_REG              ACSR
#define ACO_REG              ACSR
#define ACD_REG              ACSR

/* ICR1H */
#define ICR1H0_REG           ICR1H
#define ICR1H1_REG           ICR1H
#define ICR1H2_REG           ICR1H
#define ICR1H3_REG           ICR1H
#define ICR1H4_REG           ICR1H
#define ICR1H5_REG           ICR1H
#define ICR1H6_REG           ICR1H
#define ICR1H7_REG           ICR1H

/* ICR1L */
#define ICR1L0_REG           ICR1L
#define ICR1L1_REG           ICR1L
#define ICR1L2_REG           ICR1L
#define ICR1L3_REG           ICR1L
#define ICR1L4_REG           ICR1L
#define ICR1L5_REG           ICR1L
#define ICR1L6_REG           ICR1L
#define ICR1L7_REG           ICR1L

/* SPL */
#define SP0_REG              SPL
#define SP1_REG              SPL
#define SP2_REG              SPL
#define SP3_REG              SPL
#define SP4_REG              SPL
#define SP5_REG              SPL
#define SP6_REG              SPL
#define SP7_REG              SPL

/* EECR */
#define EERE_REG             EECR
#define EEWE_REG             EECR
#define EEMWE_REG            EECR

/* TCNT1L */
#define TCNT1L0_REG          TCNT1L
#define TCNT1L1_REG          TCNT1L
#define TCNT1L2_REG          TCNT1L
#define TCNT1L3_REG          TCNT1L
#define TCNT1L4_REG          TCNT1L
#define TCNT1L5_REG          TCNT1L
#define TCNT1L6_REG          TCNT1L
#define TCNT1L7_REG          TCNT1L

/* TCNT1H */
#define TCNT1H0_REG          TCNT1H
#define TCNT1H1_REG          TCNT1H
#define TCNT1H2_REG          TCNT1H
#define TCNT1H3_REG          TCNT1H
#define TCNT1H4_REG          TCNT1H
#define TCNT1H5_REG          TCNT1H
#define TCNT1H6_REG          TCNT1H
#define TCNT1H7_REG          TCNT1H

/* PORTD */
#define PORTD0_REG           PORTD
#define PORTD1_REG           PORTD
#define PORTD2_REG           PORTD
#define PORTD3_REG           PORTD
#define PORTD4_REG           PORTD
#define PORTD5_REG           PORTD
#define PORTD6_REG           PORTD

/* EEAR */
#define EEAR0_REG            EEAR
#define EEAR1_REG            EEAR
#define EEAR2_REG            EEAR
#define EEAR3_REG            EEAR
#define EEAR4_REG            EEAR
#define EEAR5_REG            EEAR
#define EEAR6_REG            EEAR

/* PORTB */
#define PORTB0_REG           PORTB
#define PORTB1_REG           PORTB
#define PORTB2_REG           PORTB
#define PORTB3_REG           PORTB
#define PORTB4_REG           PORTB
#define PORTB5_REG           PORTB
#define PORTB6_REG           PORTB
#define PORTB7_REG           PORTB

/* TCNT0 */
#define TCNT00_REG           TCNT0
#define TCNT01_REG           TCNT0
#define TCNT02_REG           TCNT0
#define TCNT03_REG           TCNT0
#define TCNT04_REG           TCNT0
#define TCNT05_REG           TCNT0
#define TCNT06_REG           TCNT0
#define TCNT07_REG           TCNT0

/* UBRR */
#define UBRR0_REG            UBRR
#define UBRR1_REG            UBRR
#define UBRR2_REG            UBRR
#define UBRR3_REG            UBRR
#define UBRR4_REG            UBRR
#define UBRR5_REG            UBRR
#define UBRR6_REG            UBRR
#define UBRR7_REG            UBRR

/* TIFR */
#define TOV0_REG             TIFR
#define ICF1_REG             TIFR
#define OCF1A_REG            TIFR
#define TOV1_REG             TIFR

/* UDR */
#define UDR0_REG             UDR
#define UDR1_REG             UDR
#define UDR2_REG             UDR
#define UDR3_REG             UDR
#define UDR4_REG             UDR
#define UDR5_REG             UDR
#define UDR6_REG             UDR
#define UDR7_REG             UDR

/* PINB */
#define PINB0_REG            PINB
#define PINB1_REG            PINB
#define PINB2_REG            PINB
#define PINB3_REG            PINB
#define PINB4_REG            PINB
#define PINB5_REG            PINB
#define PINB6_REG            PINB
#define PINB7_REG            PINB

/* MCUCR */
#define ISC00_REG            MCUCR
#define ISC01_REG            MCUCR
#define ISC10_REG            MCUCR
#define ISC11_REG            MCUCR
#define SM_REG               MCUCR
#define SE_REG               MCUCR

/* OCR1AH */
#define OCR1AH0_REG          OCR1AH
#define OCR1AH1_REG          OCR1AH
#define OCR1AH2_REG          OCR1AH
#define OCR1AH3_REG          OCR1AH
#define OCR1AH4_REG          OCR1AH
#define OCR1AH5_REG          OCR1AH
#define OCR1AH6_REG          OCR1AH
#define OCR1AH7_REG          OCR1AH

/* OCR1AL */
#define OCR1AL0_REG          OCR1AL
#define OCR1AL1_REG          OCR1AL
#define OCR1AL2_REG          OCR1AL
#define OCR1AL3_REG          OCR1AL
#define OCR1AL4_REG          OCR1AL
#define OCR1AL5_REG          OCR1AL
#define OCR1AL6_REG          OCR1AL
#define OCR1AL7_REG          OCR1AL

/* pins mapping */
#define AIN0_PORT PORTB
#define AIN0_BIT 0

#define AIN1_PORT PORTB
#define AIN1_BIT 1


#define OC1_PORT PORTB
#define OC1_BIT 3


#define MOSI_PORT PORTB
#define MOSI_BIT 5

#define MISO_PORT PORTB
#define MISO_BIT 6

#define SCK_PORT PORTB
#define SCK_BIT 7

#define RXD_PORT PORTD
#define RXD_BIT 0

#define TXD_PORT PORTD
#define TXD_BIT 1

#define INT0_PORT PORTD
#define INT0_BIT 2

#define INT1_PORT PORTD
#define INT1_BIT 3

#define T0_PORT PORTD
#define T0_BIT 4

#define T1_PORT PORTD
#define T1_BIT 5

#define ICP_PORT PORTD
#define ICP_BIT 6


