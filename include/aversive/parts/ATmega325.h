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

/* prescalers timer 2 */
#define TIMER2_PRESCALER_DIV_0          0
#define TIMER2_PRESCALER_DIV_1          1
#define TIMER2_PRESCALER_DIV_8          2
#define TIMER2_PRESCALER_DIV_32         3
#define TIMER2_PRESCALER_DIV_64         4
#define TIMER2_PRESCALER_DIV_128        5
#define TIMER2_PRESCALER_DIV_256        6
#define TIMER2_PRESCALER_DIV_1024       7

#define TIMER2_PRESCALER_REG_0          0
#define TIMER2_PRESCALER_REG_1          1
#define TIMER2_PRESCALER_REG_2          8
#define TIMER2_PRESCALER_REG_3          32
#define TIMER2_PRESCALER_REG_4          64
#define TIMER2_PRESCALER_REG_5          128
#define TIMER2_PRESCALER_REG_6          256
#define TIMER2_PRESCALER_REG_7          1024


/* available timers */
#define TIMER0_AVAILABLE
#define TIMER1_AVAILABLE
#define TIMER1A_AVAILABLE
#define TIMER1B_AVAILABLE
#define TIMER2_AVAILABLE

/* overflow interrupt number */
#define SIG_OVERFLOW0_NUM 0
#define SIG_OVERFLOW1_NUM 1
#define SIG_OVERFLOW2_NUM 2
#define SIG_OVERFLOW_TOTAL_NUM 3

/* output compare interrupt number */
#define SIG_OUTPUT_COMPARE0_NUM 0
#define SIG_OUTPUT_COMPARE1A_NUM 1
#define SIG_OUTPUT_COMPARE1B_NUM 2
#define SIG_OUTPUT_COMPARE2_NUM 3
#define SIG_OUTPUT_COMPARE_TOTAL_NUM 4

/* Pwm nums */
#define PWM0_NUM 0
#define PWM1A_NUM 1
#define PWM1B_NUM 2
#define PWM2_NUM 3
#define PWM_TOTAL_NUM 4

/* input capture interrupt number */
#define SIG_INPUT_CAPTURE1_NUM 0
#define SIG_INPUT_CAPTURE_TOTAL_NUM 1


/* WDTCR */
#define WDP0_REG             WDTCR
#define WDP1_REG             WDTCR
#define WDP2_REG             WDTCR
#define WDE_REG              WDTCR
#define WDCE_REG             WDTCR

/* ADMUX */
#define MUX0_REG             ADMUX
#define MUX1_REG             ADMUX
#define MUX2_REG             ADMUX
#define MUX3_REG             ADMUX
#define MUX4_REG             ADMUX
#define ADLAR_REG            ADMUX
#define REFS0_REG            ADMUX
#define REFS1_REG            ADMUX

/* EEDR */
#define EEDR0_REG            EEDR
#define EEDR1_REG            EEDR
#define EEDR2_REG            EEDR
#define EEDR3_REG            EEDR
#define EEDR4_REG            EEDR
#define EEDR5_REG            EEDR
#define EEDR6_REG            EEDR
#define EEDR7_REG            EEDR

/* OCR2A */
#define OCR2A0_REG           OCR2A
#define OCR2A1_REG           OCR2A
#define OCR2A2_REG           OCR2A
#define OCR2A3_REG           OCR2A
#define OCR2A4_REG           OCR2A
#define OCR2A5_REG           OCR2A
#define OCR2A6_REG           OCR2A
#define OCR2A7_REG           OCR2A

/* SPDR */
#define SPDR0_REG            SPDR
#define SPDR1_REG            SPDR
#define SPDR2_REG            SPDR
#define SPDR3_REG            SPDR
#define SPDR4_REG            SPDR
#define SPDR5_REG            SPDR
#define SPDR6_REG            SPDR
#define SPDR7_REG            SPDR

/* SPSR */
#define SPI2X_REG            SPSR
#define WCOL_REG             SPSR
#define SPIF_REG             SPSR

/* SPH */
#define SP8_REG              SPH
#define SP9_REG              SPH
#define SP10_REG             SPH
#define SP11_REG             SPH
#define SP12_REG             SPH
#define SP13_REG             SPH
#define SP14_REG             SPH
#define SP15_REG             SPH

/* ICR1L */
#define ICR1L0_REG           ICR1L
#define ICR1L1_REG           ICR1L
#define ICR1L2_REG           ICR1L
#define ICR1L3_REG           ICR1L
#define ICR1L4_REG           ICR1L
#define ICR1L5_REG           ICR1L
#define ICR1L6_REG           ICR1L
#define ICR1L7_REG           ICR1L

/* PRR */
#define PRADC_REG            PRR
#define PRUSART0_REG         PRR
#define PRSPI_REG            PRR
#define PRTIM1_REG           PRR

/* PORTF */
#define PORTF0_REG           PORTF
#define PORTF1_REG           PORTF
#define PORTF2_REG           PORTF
#define PORTF3_REG           PORTF
#define PORTF4_REG           PORTF
#define PORTF5_REG           PORTF
#define PORTF6_REG           PORTF
#define PORTF7_REG           PORTF

/* PORTG */
#define PORTG0_REG           PORTG
#define PORTG1_REG           PORTG
#define PORTG2_REG           PORTG
#define PORTG3_REG           PORTG
#define PORTG4_REG           PORTG

/* PORTD */
#define PORTD0_REG           PORTD
#define PORTD1_REG           PORTD
#define PORTD2_REG           PORTD
#define PORTD3_REG           PORTD
#define PORTD4_REG           PORTD
#define PORTD5_REG           PORTD
#define PORTD6_REG           PORTD
#define PORTD7_REG           PORTD

/* PORTE */
#define PORTE0_REG           PORTE
#define PORTE1_REG           PORTE
#define PORTE2_REG           PORTE
#define PORTE3_REG           PORTE
#define PORTE4_REG           PORTE
#define PORTE5_REG           PORTE
#define PORTE6_REG           PORTE
#define PORTE7_REG           PORTE

/* PORTB */
#define PORTB0_REG           PORTB
#define PORTB1_REG           PORTB
#define PORTB2_REG           PORTB
#define PORTB3_REG           PORTB
#define PORTB4_REG           PORTB
#define PORTB5_REG           PORTB
#define PORTB6_REG           PORTB
#define PORTB7_REG           PORTB

/* PORTC */
#define PORTC0_REG           PORTC
#define PORTC1_REG           PORTC
#define PORTC2_REG           PORTC
#define PORTC3_REG           PORTC
#define PORTC4_REG           PORTC
#define PORTC5_REG           PORTC
#define PORTC6_REG           PORTC
#define PORTC7_REG           PORTC

/* PORTA */
#define PORTA0_REG           PORTA
#define PORTA1_REG           PORTA
#define PORTA2_REG           PORTA
#define PORTA3_REG           PORTA
#define PORTA4_REG           PORTA
#define PORTA5_REG           PORTA
#define PORTA6_REG           PORTA
#define PORTA7_REG           PORTA

/* UDR0 */
#define UDR00_REG            UDR0
#define UDR01_REG            UDR0
#define UDR02_REG            UDR0
#define UDR03_REG            UDR0
#define UDR04_REG            UDR0
#define UDR05_REG            UDR0
#define UDR06_REG            UDR0
#define UDR07_REG            UDR0

/* EICRA */
#define ISC00_REG            EICRA
#define ISC01_REG            EICRA

/* DIDR0 */
#define ADC0D_REG            DIDR0
#define ADC1D_REG            DIDR0
#define ADC2D_REG            DIDR0
#define ADC3D_REG            DIDR0
#define ADC4D_REG            DIDR0
#define ADC5D_REG            DIDR0
#define ADC6D_REG            DIDR0
#define ADC7D_REG            DIDR0

/* DIDR1 */
#define AIN0D_REG            DIDR1
#define AIN1D_REG            DIDR1

/* ASSR */
#define TCR2UB_REG           ASSR
#define OCR2UB_REG           ASSR
#define TCN2UB_REG           ASSR
#define AS2_REG              ASSR
#define EXCLK_REG            ASSR

/* CLKPR */
#define CLKPS0_REG           CLKPR
#define CLKPS1_REG           CLKPR
#define CLKPS2_REG           CLKPR
#define CLKPS3_REG           CLKPR
#define CLKPCE_REG           CLKPR

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

/* DDRC */
#define DDC0_REG             DDRC
#define DDC1_REG             DDRC
#define DDC2_REG             DDRC
#define DDC3_REG             DDRC
#define DDC4_REG             DDRC
#define DDC5_REG             DDRC
#define DDC6_REG             DDRC
#define DDC7_REG             DDRC

/* DDRA */
#define DDA0_REG             DDRA
#define DDA1_REG             DDRA
#define DDA2_REG             DDRA
#define DDA3_REG             DDRA
#define DDA4_REG             DDRA
#define DDA5_REG             DDRA
#define DDA6_REG             DDRA
#define DDA7_REG             DDRA

/* TCCR1A */
#define WGM10_REG            TCCR1A
#define WGM11_REG            TCCR1A
#define COM1B0_REG           TCCR1A
#define COM1B1_REG           TCCR1A
#define COM1A0_REG           TCCR1A
#define COM1A1_REG           TCCR1A

/* DDRG */
#define DDG0_REG             DDRG
#define DDG1_REG             DDRG
#define DDG2_REG             DDRG
#define DDG3_REG             DDRG
#define DDG4_REG             DDRG

/* TCCR1C */
#define FOC1B_REG            TCCR1C
#define FOC1A_REG            TCCR1C

/* TCCR1B */
#define CS10_REG             TCCR1B
#define CS11_REG             TCCR1B
#define CS12_REG             TCCR1B
#define WGM12_REG            TCCR1B
#define WGM13_REG            TCCR1B
#define ICES1_REG            TCCR1B
#define ICNC1_REG            TCCR1B

/* OSCCAL */
#define CAL0_REG             OSCCAL
#define CAL1_REG             OSCCAL
#define CAL2_REG             OSCCAL
#define CAL3_REG             OSCCAL
#define CAL4_REG             OSCCAL
#define CAL5_REG             OSCCAL
#define CAL6_REG             OSCCAL
#define CAL7_REG             OSCCAL

/* GPIOR1 */
#define GPIOR10_REG          GPIOR1
#define GPIOR11_REG          GPIOR1
#define GPIOR12_REG          GPIOR1
#define GPIOR13_REG          GPIOR1
#define GPIOR14_REG          GPIOR1
#define GPIOR15_REG          GPIOR1
#define GPIOR16_REG          GPIOR1
#define GPIOR17_REG          GPIOR1

/* GPIOR0 */
#define GPIOR00_REG          GPIOR0
#define GPIOR01_REG          GPIOR0
#define GPIOR02_REG          GPIOR0
#define GPIOR03_REG          GPIOR0
#define GPIOR04_REG          GPIOR0
#define GPIOR05_REG          GPIOR0
#define GPIOR06_REG          GPIOR0
#define GPIOR07_REG          GPIOR0

/* GPIOR2 */
#define GPIOR20_REG          GPIOR2
#define GPIOR21_REG          GPIOR2
#define GPIOR22_REG          GPIOR2
#define GPIOR23_REG          GPIOR2
#define GPIOR24_REG          GPIOR2
#define GPIOR25_REG          GPIOR2
#define GPIOR26_REG          GPIOR2
#define GPIOR27_REG          GPIOR2

/* DDRE */
#define DDE0_REG             DDRE
#define DDE1_REG             DDRE
#define DDE2_REG             DDRE
#define DDE3_REG             DDRE
#define DDE4_REG             DDRE
#define DDE5_REG             DDRE
#define DDE6_REG             DDRE
#define DDE7_REG             DDRE

/* TCNT2 */
#define TCNT2_0_REG          TCNT2
#define TCNT2_1_REG          TCNT2
#define TCNT2_2_REG          TCNT2
#define TCNT2_3_REG          TCNT2
#define TCNT2_4_REG          TCNT2
#define TCNT2_5_REG          TCNT2
#define TCNT2_6_REG          TCNT2
#define TCNT2_7_REG          TCNT2

/* TCNT0 */
#define TCNT0_0_REG          TCNT0
#define TCNT0_1_REG          TCNT0
#define TCNT0_2_REG          TCNT0
#define TCNT0_3_REG          TCNT0
#define TCNT0_4_REG          TCNT0
#define TCNT0_5_REG          TCNT0
#define TCNT0_6_REG          TCNT0
#define TCNT0_7_REG          TCNT0

/* TCCR0A */
#define CS00_REG             TCCR0A
#define CS01_REG             TCCR0A
#define CS02_REG             TCCR0A
#define WGM01_REG            TCCR0A
#define COM0A0_REG           TCCR0A
#define COM0A1_REG           TCCR0A
#define WGM00_REG            TCCR0A
#define FOC0A_REG            TCCR0A

/* TIFR2 */
#define TOV2_REG             TIFR2
#define OCF2A_REG            TIFR2

/* TIFR0 */
#define TOV0_REG             TIFR0
#define OCF0A_REG            TIFR0

/* TIFR1 */
#define TOV1_REG             TIFR1
#define OCF1A_REG            TIFR1
#define OCF1B_REG            TIFR1
#define ICF1_REG             TIFR1

/* GTCCR */
#define PSR310_REG           GTCCR
#define TSM_REG              GTCCR
#define PSR2_REG             GTCCR

/* ICR1H */
#define ICR1H0_REG           ICR1H
#define ICR1H1_REG           ICR1H
#define ICR1H2_REG           ICR1H
#define ICR1H3_REG           ICR1H
#define ICR1H4_REG           ICR1H
#define ICR1H5_REG           ICR1H
#define ICR1H6_REG           ICR1H
#define ICR1H7_REG           ICR1H

/* OCR1BL */
#define OCR1BL0_REG          OCR1BL
#define OCR1BL1_REG          OCR1BL
#define OCR1BL2_REG          OCR1BL
#define OCR1BL3_REG          OCR1BL
#define OCR1BL4_REG          OCR1BL
#define OCR1BL5_REG          OCR1BL
#define OCR1BL6_REG          OCR1BL
#define OCR1BL7_REG          OCR1BL

/* OCR1BH */
#define OCR1BH0_REG          OCR1BH
#define OCR1BH1_REG          OCR1BH
#define OCR1BH2_REG          OCR1BH
#define OCR1BH3_REG          OCR1BH
#define OCR1BH4_REG          OCR1BH
#define OCR1BH5_REG          OCR1BH
#define OCR1BH6_REG          OCR1BH
#define OCR1BH7_REG          OCR1BH

/* SPL */
#define SP0_REG              SPL
#define SP1_REG              SPL
#define SP2_REG              SPL
#define SP3_REG              SPL
#define SP4_REG              SPL
#define SP5_REG              SPL
#define SP6_REG              SPL
#define SP7_REG              SPL

/* MCUSR */
#define JTRF_REG             MCUSR
#define PORF_REG             MCUSR
#define EXTRF_REG            MCUSR
#define BORF_REG             MCUSR
#define WDRF_REG             MCUSR

/* EECR */
#define EERE_REG             EECR
#define EEWE_REG             EECR
#define EEMWE_REG            EECR
#define EERIE_REG            EECR

/* SMCR */
#define SE_REG               SMCR
#define SM0_REG              SMCR
#define SM1_REG              SMCR
#define SM2_REG              SMCR

/* TCCR2A */
#define CS20_REG             TCCR2A
#define CS21_REG             TCCR2A
#define CS22_REG             TCCR2A
#define WGM21_REG            TCCR2A
#define COM2A0_REG           TCCR2A
#define COM2A1_REG           TCCR2A
#define WGM20_REG            TCCR2A
#define FOC2A_REG            TCCR2A

/* UBRR0H */
#define UBRR8_REG            UBRR0H
#define UBRR9_REG            UBRR0H
#define UBRR10_REG           UBRR0H
#define UBRR11_REG           UBRR0H

/* UBRR0L */
#define UBRR0_REG            UBRR0L
#define UBRR1_REG            UBRR0L
#define UBRR2_REG            UBRR0L
#define UBRR3_REG            UBRR0L
#define UBRR4_REG            UBRR0L
#define UBRR5_REG            UBRR0L
#define UBRR6_REG            UBRR0L
#define UBRR7_REG            UBRR0L

/* EEARH */
#define EEAR8_REG            EEARH
#define EEAR9_REG            EEARH

/* EEARL */
#define EEAR00_REG           EEARL
#define EEAR1_REG            EEARL
#define EEAR2_REG            EEARL
#define EEAR3_REG            EEARL
#define EEAR4_REG            EEARL
#define EEAR5_REG            EEARL
#define EEAR6_REG            EEARL
#define EEAR7_REG            EEARL

/* MCUCR */
#define JTD_REG              MCUCR
#define IVCE_REG             MCUCR
#define IVSEL_REG            MCUCR
#define PUD_REG              MCUCR

/* PINC */
#define PINC0_REG            PINC
#define PINC1_REG            PINC
#define PINC2_REG            PINC
#define PINC3_REG            PINC
#define PINC4_REG            PINC
#define PINC5_REG            PINC
#define PINC6_REG            PINC
#define PINC7_REG            PINC

/* OCDR */
#define OCDR0_REG            OCDR
#define OCDR1_REG            OCDR
#define OCDR2_REG            OCDR
#define OCDR3_REG            OCDR
#define OCDR4_REG            OCDR
#define OCDR5_REG            OCDR
#define OCDR6_REG            OCDR
#define OCDR7_REG            OCDR

/* PINA */
#define PINA0_REG            PINA
#define PINA1_REG            PINA
#define PINA2_REG            PINA
#define PINA3_REG            PINA
#define PINA4_REG            PINA
#define PINA5_REG            PINA
#define PINA6_REG            PINA
#define PINA7_REG            PINA

/* USISR */
#define USICNT0_REG          USISR
#define USICNT1_REG          USISR
#define USICNT2_REG          USISR
#define USICNT3_REG          USISR
#define USIDC_REG            USISR
#define USIPF_REG            USISR
#define USIOIF_REG           USISR
#define USISIF_REG           USISR

/* ADCSRA */
#define ADPS0_REG            ADCSRA
#define ADPS1_REG            ADCSRA
#define ADPS2_REG            ADCSRA
#define ADIE_REG             ADCSRA
#define ADIF_REG             ADCSRA
#define ADATE_REG            ADCSRA
#define ADSC_REG             ADCSRA
#define ADEN_REG             ADCSRA

/* ADCSRB */
#define ADTS0_REG            ADCSRB
#define ADTS1_REG            ADCSRB
#define ADTS2_REG            ADCSRB
#define ACME_REG             ADCSRB

/* DDRF */
#define DDF0_REG             DDRF
#define DDF1_REG             DDRF
#define DDF2_REG             DDRF
#define DDF3_REG             DDRF
#define DDF4_REG             DDRF
#define DDF5_REG             DDRF
#define DDF6_REG             DDRF
#define DDF7_REG             DDRF

/* OCR0A */
#define OCR0A0_REG           OCR0A
#define OCR0A1_REG           OCR0A
#define OCR0A2_REG           OCR0A
#define OCR0A3_REG           OCR0A
#define OCR0A4_REG           OCR0A
#define OCR0A5_REG           OCR0A
#define OCR0A6_REG           OCR0A
#define OCR0A7_REG           OCR0A

/* ACSR */
#define ACIS0_REG            ACSR
#define ACIS1_REG            ACSR
#define ACIC_REG             ACSR
#define ACIE_REG             ACSR
#define ACI_REG              ACSR
#define ACO_REG              ACSR
#define ACBG_REG             ACSR
#define ACD_REG              ACSR

/* UCSR0A */
#define MPCM0_REG            UCSR0A
#define U2X0_REG             UCSR0A
#define UPE0_REG             UCSR0A
#define DOR0_REG             UCSR0A
#define FE0_REG              UCSR0A
#define UDRE0_REG            UCSR0A
#define TXC0_REG             UCSR0A
#define RXC0_REG             UCSR0A

/* DDRD */
#define DDD0_REG             DDRD
#define DDD1_REG             DDRD
#define DDD2_REG             DDRD
#define DDD3_REG             DDRD
#define DDD4_REG             DDRD
#define DDD5_REG             DDRD
#define DDD6_REG             DDRD
#define DDD7_REG             DDRD

/* USICR */
#define USITC_REG            USICR
#define USICLK_REG           USICR
#define USICS0_REG           USICR
#define USICS1_REG           USICR
#define USIWM0_REG           USICR
#define USIWM1_REG           USICR
#define USIOIE_REG           USICR
#define USISIE_REG           USICR

/* UCSR0C */
#define UCPOL0_REG           UCSR0C
#define UCSZ00_REG           UCSR0C
#define UCSZ01_REG           UCSR0C
#define USBS0_REG            UCSR0C
#define UPM00_REG            UCSR0C
#define UPM01_REG            UCSR0C
#define UMSEL0_REG           UCSR0C

/* UCSR0B */
#define TXB80_REG            UCSR0B
#define RXB80_REG            UCSR0B
#define UCSZ02_REG           UCSR0B
#define TXEN0_REG            UCSR0B
#define RXEN0_REG            UCSR0B
#define UDRIE0_REG           UCSR0B
#define TXCIE0_REG           UCSR0B
#define RXCIE0_REG           UCSR0B

/* SPMCSR */
#define SPMEN_REG            SPMCSR
#define PGERS_REG            SPMCSR
#define PGWRT_REG            SPMCSR
#define BLBSET_REG           SPMCSR
#define RWWSRE_REG           SPMCSR
#define RWWSB_REG            SPMCSR
#define SPMIE_REG            SPMCSR

/* TCNT1H */
#define TCNT1H0_REG          TCNT1H
#define TCNT1H1_REG          TCNT1H
#define TCNT1H2_REG          TCNT1H
#define TCNT1H3_REG          TCNT1H
#define TCNT1H4_REG          TCNT1H
#define TCNT1H5_REG          TCNT1H
#define TCNT1H6_REG          TCNT1H
#define TCNT1H7_REG          TCNT1H

/* ADCL */
#define ADCL0_REG            ADCL
#define ADCL1_REG            ADCL
#define ADCL2_REG            ADCL
#define ADCL3_REG            ADCL
#define ADCL4_REG            ADCL
#define ADCL5_REG            ADCL
#define ADCL6_REG            ADCL
#define ADCL7_REG            ADCL

/* ADCH */
#define ADCH0_REG            ADCH
#define ADCH1_REG            ADCH
#define ADCH2_REG            ADCH
#define ADCH3_REG            ADCH
#define ADCH4_REG            ADCH
#define ADCH5_REG            ADCH
#define ADCH6_REG            ADCH
#define ADCH7_REG            ADCH

/* TIMSK2 */
#define TOIE2_REG            TIMSK2
#define OCIE2A_REG           TIMSK2

/* EIMSK */
#define INT0_REG             EIMSK
#define PCIE0_REG            EIMSK
#define PCIE1_REG            EIMSK
#define PCIE2_REG            EIMSK
#define PCIE3_REG            EIMSK

/* TIMSK0 */
#define TOIE0_REG            TIMSK0
#define OCIE0A_REG           TIMSK0

/* TIMSK1 */
#define TOIE1_REG            TIMSK1
#define OCIE1A_REG           TIMSK1
#define OCIE1B_REG           TIMSK1
#define ICIE1_REG            TIMSK1

/* PCMSK0 */
#define PCINT0_REG           PCMSK0
#define PCINT1_REG           PCMSK0
#define PCINT2_REG           PCMSK0
#define PCINT3_REG           PCMSK0
#define PCINT4_REG           PCMSK0
#define PCINT5_REG           PCMSK0
#define PCINT6_REG           PCMSK0
#define PCINT7_REG           PCMSK0

/* PCMSK1 */
#define PCINT8_REG           PCMSK1
#define PCINT9_REG           PCMSK1
#define PCINT10_REG          PCMSK1
#define PCINT11_REG          PCMSK1
#define PCINT12_REG          PCMSK1
#define PCINT13_REG          PCMSK1
#define PCINT14_REG          PCMSK1
#define PCINT15_REG          PCMSK1

/* TCNT1L */
#define TCNT1L0_REG          TCNT1L
#define TCNT1L1_REG          TCNT1L
#define TCNT1L2_REG          TCNT1L
#define TCNT1L3_REG          TCNT1L
#define TCNT1L4_REG          TCNT1L
#define TCNT1L5_REG          TCNT1L
#define TCNT1L6_REG          TCNT1L
#define TCNT1L7_REG          TCNT1L

/* PINB */
#define PINB0_REG            PINB
#define PINB1_REG            PINB
#define PINB2_REG            PINB
#define PINB3_REG            PINB
#define PINB4_REG            PINB
#define PINB5_REG            PINB
#define PINB6_REG            PINB
#define PINB7_REG            PINB

/* EIFR */
#define INTF0_REG            EIFR
#define PCIF0_REG            EIFR
#define PCIF1_REG            EIFR
#define PCIF2_REG            EIFR
#define PCIF3_REG            EIFR

/* PING */
#define PING0_REG            PING
#define PING1_REG            PING
#define PING2_REG            PING
#define PING3_REG            PING
#define PING4_REG            PING
#define PING5_REG            PING

/* PINF */
#define PINF0_REG            PINF
#define PINF1_REG            PINF
#define PINF2_REG            PINF
#define PINF3_REG            PINF
#define PINF4_REG            PINF
#define PINF5_REG            PINF
#define PINF6_REG            PINF
#define PINF7_REG            PINF

/* PINE */
#define PINE0_REG            PINE
#define PINE1_REG            PINE
#define PINE2_REG            PINE
#define PINE3_REG            PINE
#define PINE4_REG            PINE
#define PINE5_REG            PINE
#define PINE6_REG            PINE
#define PINE7_REG            PINE

/* PIND */
#define PIND0_REG            PIND
#define PIND1_REG            PIND
#define PIND2_REG            PIND
#define PIND3_REG            PIND
#define PIND4_REG            PIND
#define PIND5_REG            PIND
#define PIND6_REG            PIND
#define PIND7_REG            PIND

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

/* SPCR */
#define SPR0_REG             SPCR
#define SPR1_REG             SPCR
#define CPHA_REG             SPCR
#define CPOL_REG             SPCR
#define MSTR_REG             SPCR
#define DORD_REG             SPCR
#define SPE_REG              SPCR
#define SPIE_REG             SPCR

/* USIDR */
#define USIDR0_REG           USIDR
#define USIDR1_REG           USIDR
#define USIDR2_REG           USIDR
#define USIDR3_REG           USIDR
#define USIDR4_REG           USIDR
#define USIDR5_REG           USIDR
#define USIDR6_REG           USIDR
#define USIDR7_REG           USIDR

/* pins mapping */

