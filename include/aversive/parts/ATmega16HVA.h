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


/* prescalers timer 1 */



/* available timers */
#define TIMER0_AVAILABLE
#define TIMER0A_AVAILABLE
#define TIMER0B_AVAILABLE
#define TIMER1_AVAILABLE
#define TIMER1A_AVAILABLE
#define TIMER1B_AVAILABLE

/* overflow interrupt number */
#define SIG_OVERFLOW0_NUM 0
#define SIG_OVERFLOW1_NUM 1
#define SIG_OVERFLOW_TOTAL_NUM 2

/* output compare interrupt number */
#define SIG_OUTPUT_COMPARE0A_NUM 0
#define SIG_OUTPUT_COMPARE0B_NUM 1
#define SIG_OUTPUT_COMPARE1A_NUM 2
#define SIG_OUTPUT_COMPARE1B_NUM 3
#define SIG_OUTPUT_COMPARE_TOTAL_NUM 4

/* Pwm nums */
#define PWM0A_NUM 0
#define PWM0B_NUM 1
#define PWM1A_NUM 2
#define PWM1B_NUM 3
#define PWM_TOTAL_NUM 4

/* input capture interrupt number */
#define SIG_INPUT_CAPTURE_TOTAL_NUM 0


/* CADAC2 */
#define CADAC16_REG          CADAC2
#define CADAC17_REG          CADAC2
#define CADAC18_REG          CADAC2
#define CADAC19_REG          CADAC2
#define CADAC20_REG          CADAC2
#define CADAC21_REG          CADAC2
#define CADAC22_REG          CADAC2
#define CADAC23_REG          CADAC2

/* CADAC3 */
#define CADAC24_REG          CADAC3
#define CADAC25_REG          CADAC3
#define CADAC26_REG          CADAC3
#define CADAC27_REG          CADAC3
#define CADAC28_REG          CADAC3
#define CADAC29_REG          CADAC3
#define CADAC30_REG          CADAC3
#define CADAC31_REG          CADAC3

/* CADAC0 */
#define CADAC00_REG          CADAC0
#define CADAC01_REG          CADAC0
#define CADAC02_REG          CADAC0
#define CADAC03_REG          CADAC0
#define CADAC04_REG          CADAC0
#define CADAC05_REG          CADAC0
#define CADAC06_REG          CADAC0
#define CADAC07_REG          CADAC0

/* CADAC1 */
#define CADAC08_REG          CADAC1
#define CADAC09_REG          CADAC1
#define CADAC10_REG          CADAC1
#define CADAC11_REG          CADAC1
#define CADAC12_REG          CADAC1
#define CADAC13_REG          CADAC1
#define CADAC14_REG          CADAC1
#define CADAC15_REG          CADAC1

/* PINA */
#define PINA0_REG            PINA
#define PINA1_REG            PINA

/* BPIMSK */
#define CHCIE_REG            BPIMSK
#define DHCIE_REG            BPIMSK
#define COCIE_REG            BPIMSK
#define DOCIE_REG            BPIMSK
#define SCIE_REG             BPIMSK

/* DIDR0 */
#define PA0DID_REG           DIDR0
#define PA1DID_REG           DIDR0

/* TCNT0H */
#define TCNT0H0_REG          TCNT0H
#define TCNT0H1_REG          TCNT0H
#define TCNT0H2_REG          TCNT0H
#define TCNT0H3_REG          TCNT0H
#define TCNT0H4_REG          TCNT0H
#define TCNT0H5_REG          TCNT0H
#define TCNT0H6_REG          TCNT0H
#define TCNT0H7_REG          TCNT0H

/* SREG */
#define C_REG                SREG
#define Z_REG                SREG
#define N_REG                SREG
#define V_REG                SREG
#define S_REG                SREG
#define H_REG                SREG
#define T_REG                SREG
#define I_REG                SREG

/* EEDR */
#define EEDR0_REG            EEDR
#define EEDR1_REG            EEDR
#define EEDR2_REG            EEDR
#define EEDR3_REG            EEDR
#define EEDR4_REG            EEDR
#define EEDR5_REG            EEDR
#define EEDR6_REG            EEDR
#define EEDR7_REG            EEDR

/* CLKPR */
#define CLKPS0_REG           CLKPR
#define CLKPS1_REG           CLKPR
#define CLKPCE_REG           CLKPR

/* BPCR */
#define CHCD_REG             BPCR
#define DHCD_REG             BPCR
#define COCD_REG             BPCR
#define DOCD_REG             BPCR
#define SCD_REG              BPCR

/* WDTCSR */
#define WDP0_REG             WDTCSR
#define WDP1_REG             WDTCSR
#define WDP2_REG             WDTCSR
#define WDE_REG              WDTCSR
#define WDCE_REG             WDTCSR
#define WDP3_REG             WDTCSR
#define WDIE_REG             WDTCSR
#define WDIF_REG             WDTCSR

/* BPSCTR */
#define SCPT0_REG            BPSCTR
#define SCPT1_REG            BPSCTR
#define SCPT2_REG            BPSCTR
#define SCPT3_REG            BPSCTR
#define SCPT4_REG            BPSCTR
#define SCPT5_REG            BPSCTR
#define SCPT6_REG            BPSCTR

/* MCUCR */
#define PUD_REG              MCUCR
#define CKOE_REG             MCUCR

/* TCCR1A */
#define WGM10_REG            TCCR1A
#define ICS1_REG             TCCR1A
#define ICES1_REG            TCCR1A
#define ICNC1_REG            TCCR1A
#define ICEN1_REG            TCCR1A
#define TCW1_REG             TCCR1A

/* BPHCTR */
#define HCPT0_REG            BPHCTR
#define HCPT1_REG            BPHCTR
#define HCPT2_REG            BPHCTR
#define HCPT3_REG            BPHCTR
#define HCPT4_REG            BPHCTR
#define HCPT5_REG            BPHCTR

/* GTCCR */
#define PSRSYNC_REG          GTCCR
#define TSM_REG              GTCCR

/* TCCR1B */
#define CS10_REG             TCCR1B
#define CS11_REG             TCCR1B
#define CS12_REG             TCCR1B

/* TIFR1 */
#define TOV1_REG             TIFR1
#define OCF1A_REG            TIFR1
#define OCF1B_REG            TIFR1
#define ICF1_REG             TIFR1

/* BGCRR */
#define BGCR0_REG            BGCRR
#define BGCR1_REG            BGCRR
#define BGCR2_REG            BGCRR
#define BGCR3_REG            BGCRR
#define BGCR4_REG            BGCRR
#define BGCR5_REG            BGCRR
#define BGCR6_REG            BGCRR
#define BGCR7_REG            BGCRR

/* DDRA */
#define DDA0_REG             DDRA
#define DDA1_REG             DDRA

/* BPCHCD */
#define CHCDL0_REG           BPCHCD
#define CHCDL1_REG           BPCHCD
#define CHCDL2_REG           BPCHCD
#define CHCDL3_REG           BPCHCD
#define CHCDL4_REG           BPCHCD
#define CHCDL5_REG           BPCHCD
#define CHCDL6_REG           BPCHCD
#define CHCDL7_REG           BPCHCD

/* PRR0 */
#define PRVADC_REG           PRR0
#define PRTIM0_REG           PRR0
#define PRTIM1_REG           PRR0
#define PRSPI_REG            PRR0
#define PRVRM_REG            PRR0

/* SPDR */
#define SPDR0_REG            SPDR
#define SPDR1_REG            SPDR
#define SPDR2_REG            SPDR
#define SPDR3_REG            SPDR
#define SPDR4_REG            SPDR
#define SPDR5_REG            SPDR
#define SPDR6_REG            SPDR
#define SPDR7_REG            SPDR

/* OCR0A */
#define OCR0A0_REG           OCR0A
#define OCR0A1_REG           OCR0A
#define OCR0A2_REG           OCR0A
#define OCR0A3_REG           OCR0A
#define OCR0A4_REG           OCR0A
#define OCR0A5_REG           OCR0A
#define OCR0A6_REG           OCR0A
#define OCR0A7_REG           OCR0A

/* ROCR */
#define ROCWIE_REG           ROCR
#define ROCWIF_REG           ROCR
#define ROCS_REG             ROCR

/* OCR0B */
#define OCR0B0_REG           OCR0B
#define OCR0B1_REG           OCR0B
#define OCR0B2_REG           OCR0B
#define OCR0B3_REG           OCR0B
#define OCR0B4_REG           OCR0B
#define OCR0B5_REG           OCR0B
#define OCR0B6_REG           OCR0B
#define OCR0B7_REG           OCR0B

/* SPH */
#define SP8_REG              SPH
#define SP9_REG              SPH

/* CADICH */
#define CADICH0_REG          CADICH
#define CADICH1_REG          CADICH
#define CADICH2_REG          CADICH
#define CADICH3_REG          CADICH
#define CADICH4_REG          CADICH
#define CADICH5_REG          CADICH
#define CADICH6_REG          CADICH
#define CADICH7_REG          CADICH

/* FCSR */
#define CFE_REG              FCSR
#define DFE_REG              FCSR
#define CPS_REG              FCSR
#define DUVRD_REG            FCSR

/* SPL */
#define SP0_REG              SPL
#define SP1_REG              SPL
#define SP2_REG              SPL
#define SP3_REG              SPL
#define SP4_REG              SPL
#define SP5_REG              SPL
#define SP6_REG              SPL
#define SP7_REG              SPL

/* CADCSRB */
#define CADICIF_REG          CADCSRB
#define CADRCIF_REG          CADCSRB
#define CADACIF_REG          CADCSRB
#define CADICIE_REG          CADCSRB
#define CADRCIE_REG          CADCSRB
#define CADACIE_REG          CADCSRB

/* CADICL */
#define CADICL0_REG          CADICL
#define CADICL1_REG          CADICL
#define CADICL2_REG          CADICL
#define CADICL3_REG          CADICL
#define CADICL4_REG          CADICL
#define CADICL5_REG          CADICL
#define CADICL6_REG          CADICL
#define CADICL7_REG          CADICL

/* BPCOCD */
#define COCDL0_REG           BPCOCD
#define COCDL1_REG           BPCOCD
#define COCDL2_REG           BPCOCD
#define COCDL3_REG           BPCOCD
#define COCDL4_REG           BPCOCD
#define COCDL5_REG           BPCOCD
#define COCDL6_REG           BPCOCD
#define COCDL7_REG           BPCOCD

/* GPIOR1 */
#define GPIOR10_REG          GPIOR1
#define GPIOR11_REG          GPIOR1
#define GPIOR12_REG          GPIOR1
#define GPIOR13_REG          GPIOR1
#define GPIOR14_REG          GPIOR1
#define GPIOR15_REG          GPIOR1
#define GPIOR16_REG          GPIOR1
#define GPIOR17_REG          GPIOR1

/* BPPLR */
#define BPPL_REG             BPPLR
#define BPPLE_REG            BPPLR

/* SPSR */
#define SPI2X_REG            SPSR
#define WCOL_REG             SPSR
#define SPIF_REG             SPSR

/* MCUSR */
#define PORF_REG             MCUSR
#define EXTRF_REG            MCUSR
#define BODRF_REG            MCUSR
#define WDRF_REG             MCUSR
#define OCDRF_REG            MCUSR

/* EECR */
#define EERE_REG             EECR
#define EEPE_REG             EECR
#define EEMPE_REG            EECR
#define EERIE_REG            EECR
#define EEPM0_REG            EECR
#define EEPM1_REG            EECR

/* EEAR */
#define EEAR0_REG            EEAR
#define EEAR1_REG            EEAR
#define EEAR2_REG            EEAR
#define EEAR3_REG            EEAR
#define EEAR4_REG            EEAR
#define EEAR5_REG            EEAR
#define EEAR6_REG            EEAR
#define EEAR7_REG            EEAR

/* SPMCSR */
#define SPMEN_REG            SPMCSR
#define PGERS_REG            SPMCSR
#define PGWRT_REG            SPMCSR
#define RFLB_REG             SPMCSR
#define CTPB_REG             SPMCSR
#define SIGRD_REG            SPMCSR

/* CADCSRA */
#define CADSE_REG            CADCSRA
#define CADSI0_REG           CADCSRA
#define CADSI1_REG           CADCSRA
#define CADAS0_REG           CADCSRA
#define CADAS1_REG           CADCSRA
#define CADUB_REG            CADCSRA
#define CADPOL_REG           CADCSRA
#define CADEN_REG            CADCSRA

/* TIFR0 */
#define TOV0_REG             TIFR0
#define OCF0A_REG            TIFR0
#define OCF0B_REG            TIFR0
#define ICF0_REG             TIFR0

/* TCNT1L */
#define TCNT1L0_REG          TCNT1L
#define TCNT1L1_REG          TCNT1L
#define TCNT1L2_REG          TCNT1L
#define TCNT1L3_REG          TCNT1L
#define TCNT1L4_REG          TCNT1L
#define TCNT1L5_REG          TCNT1L
#define TCNT1L6_REG          TCNT1L
#define TCNT1L7_REG          TCNT1L

/* PORTB */
#define PORTB0_REG           PORTB
#define PORTB1_REG           PORTB
#define PORTB2_REG           PORTB
#define PORTB3_REG           PORTB

/* SMCR */
#define SE_REG               SMCR
#define SM0_REG              SMCR
#define SM1_REG              SMCR
#define SM2_REG              SMCR

/* TCNT1H */
#define TCNT1H0_REG          TCNT1H
#define TCNT1H1_REG          TCNT1H
#define TCNT1H2_REG          TCNT1H
#define TCNT1H3_REG          TCNT1H
#define TCNT1H4_REG          TCNT1H
#define TCNT1H5_REG          TCNT1H
#define TCNT1H6_REG          TCNT1H
#define TCNT1H7_REG          TCNT1H

/* PORTC */
#define PORTC0_REG           PORTC

/* PORTA */
#define PORTA0_REG           PORTA
#define PORTA1_REG           PORTA

/* BPSCD */
#define SCDL0_REG            BPSCD
#define SCDL1_REG            BPSCD
#define SCDL2_REG            BPSCD
#define SCDL3_REG            BPSCD
#define SCDL4_REG            BPSCD
#define SCDL5_REG            BPSCD
#define SCDL6_REG            BPSCD
#define SCDL7_REG            BPSCD

/* OSICSR */
#define OSIEN_REG            OSICSR
#define OSIST_REG            OSICSR
#define OSISEL0_REG          OSICSR

/* CADRC */
#define CADRC0_REG           CADRC
#define CADRC1_REG           CADRC
#define CADRC2_REG           CADRC
#define CADRC3_REG           CADRC
#define CADRC4_REG           CADRC
#define CADRC5_REG           CADRC
#define CADRC6_REG           CADRC
#define CADRC7_REG           CADRC

/* GPIOR0 */
#define GPIOR00_REG          GPIOR0
#define GPIOR01_REG          GPIOR0
#define GPIOR02_REG          GPIOR0
#define GPIOR03_REG          GPIOR0
#define GPIOR04_REG          GPIOR0
#define GPIOR05_REG          GPIOR0
#define GPIOR06_REG          GPIOR0
#define GPIOR07_REG          GPIOR0

/* EIMSK */
#define INT0_REG             EIMSK
#define INT1_REG             EIMSK
#define INT2_REG             EIMSK

/* TIMSK0 */
#define TOIE0_REG            TIMSK0
#define OCIE0A_REG           TIMSK0
#define OCIE0B_REG           TIMSK0
#define ICIE0_REG            TIMSK0

/* TIMSK1 */
#define TOIE1_REG            TIMSK1
#define OCIE1A_REG           TIMSK1
#define OCIE1B_REG           TIMSK1
#define ICIE1_REG            TIMSK1

/* TCCR0B */
#define CS00_REG             TCCR0B
#define CS01_REG             TCCR0B
#define CS02_REG             TCCR0B

/* BGCCR */
#define BGCC0_REG            BGCCR
#define BGCC1_REG            BGCCR
#define BGCC2_REG            BGCCR
#define BGCC3_REG            BGCCR
#define BGCC4_REG            BGCCR
#define BGCC5_REG            BGCCR
#define BGD_REG              BGCCR

/* VADMUX */
#define VADMUX0_REG          VADMUX
#define VADMUX1_REG          VADMUX
#define VADMUX2_REG          VADMUX
#define VADMUX3_REG          VADMUX

/* VADCH */
#define VADC8_REG            VADCH
#define VADC9_REG            VADCH
#define VADC10_REG           VADCH
#define VADC11_REG           VADCH

/* BPIFR */
#define CHCIF_REG            BPIFR
#define DHCIF_REG            BPIFR
#define COCIF_REG            BPIFR
#define DOCIF_REG            BPIFR
#define SCIF_REG             BPIFR

/* GPIOR2 */
#define GPIOR20_REG          GPIOR2
#define GPIOR21_REG          GPIOR2
#define GPIOR22_REG          GPIOR2
#define GPIOR23_REG          GPIOR2
#define GPIOR24_REG          GPIOR2
#define GPIOR25_REG          GPIOR2
#define GPIOR26_REG          GPIOR2
#define GPIOR27_REG          GPIOR2

/* BPDHCD */
#define DHCDL0_REG           BPDHCD
#define DHCDL1_REG           BPDHCD
#define DHCDL2_REG           BPDHCD
#define DHCDL3_REG           BPDHCD
#define DHCDL4_REG           BPDHCD
#define DHCDL5_REG           BPDHCD
#define DHCDL6_REG           BPDHCD
#define DHCDL7_REG           BPDHCD

/* EICRA */
#define ISC00_REG            EICRA
#define ISC01_REG            EICRA
#define ISC10_REG            EICRA
#define ISC11_REG            EICRA
#define ISC20_REG            EICRA
#define ISC21_REG            EICRA

/* PINC */
#define PINC0_REG            PINC

/* VADCSR */
#define VADCCIE_REG          VADCSR
#define VADCCIF_REG          VADCSR
#define VADSC_REG            VADCSR
#define VADEN_REG            VADCSR

/* FOSCCAL */
#define FCAL0_REG            FOSCCAL
#define FCAL1_REG            FOSCCAL
#define FCAL2_REG            FOSCCAL
#define FCAL3_REG            FOSCCAL
#define FCAL4_REG            FOSCCAL
#define FCAL5_REG            FOSCCAL
#define FCAL6_REG            FOSCCAL
#define FCAL7_REG            FOSCCAL

/* OCR1B */
#define OCR1B0_REG           OCR1B
#define OCR1B1_REG           OCR1B
#define OCR1B2_REG           OCR1B
#define OCR1B3_REG           OCR1B
#define OCR1B4_REG           OCR1B
#define OCR1B5_REG           OCR1B
#define OCR1B6_REG           OCR1B
#define OCR1B7_REG           OCR1B

/* TCCR0A */
#define WGM00_REG            TCCR0A
#define ICS0_REG             TCCR0A
#define ICES0_REG            TCCR0A
#define ICNC0_REG            TCCR0A
#define ICEN0_REG            TCCR0A
#define TCW0_REG             TCCR0A

/* OCR1A */
#define OCR1A0_REG           OCR1A
#define OCR1A1_REG           OCR1A
#define OCR1A2_REG           OCR1A
#define OCR1A3_REG           OCR1A
#define OCR1A4_REG           OCR1A
#define OCR1A5_REG           OCR1A
#define OCR1A6_REG           OCR1A
#define OCR1A7_REG           OCR1A

/* SPCR */
#define SPR0_REG             SPCR
#define SPR1_REG             SPCR
#define CPHA_REG             SPCR
#define CPOL_REG             SPCR
#define MSTR_REG             SPCR
#define DORD_REG             SPCR
#define SPE_REG              SPCR
#define SPIE_REG             SPCR

/* PINB */
#define PINB0_REG            PINB
#define PINB1_REG            PINB
#define PINB2_REG            PINB
#define PINB3_REG            PINB

/* DDRB */
#define DDB0_REG             DDRB
#define DDB1_REG             DDRB
#define DDB2_REG             DDRB
#define DDB3_REG             DDRB

/* TCNT0L */
#define TCNT0L0_REG          TCNT0L
#define TCNT0L1_REG          TCNT0L
#define TCNT0L2_REG          TCNT0L
#define TCNT0L3_REG          TCNT0L
#define TCNT0L4_REG          TCNT0L
#define TCNT0L5_REG          TCNT0L
#define TCNT0L6_REG          TCNT0L
#define TCNT0L7_REG          TCNT0L

/* BPOCTR */
#define OCPT0_REG            BPOCTR
#define OCPT1_REG            BPOCTR
#define OCPT2_REG            BPOCTR
#define OCPT3_REG            BPOCTR
#define OCPT4_REG            BPOCTR
#define OCPT5_REG            BPOCTR

/* EIFR */
#define INTF0_REG            EIFR
#define INTF1_REG            EIFR
#define INTF2_REG            EIFR

/* BPDOCD */
#define DOCDL0_REG           BPDOCD
#define DOCDL1_REG           BPDOCD
#define DOCDL2_REG           BPDOCD
#define DOCDL3_REG           BPDOCD
#define DOCDL4_REG           BPDOCD
#define DOCDL5_REG           BPDOCD
#define DOCDL6_REG           BPDOCD
#define DOCDL7_REG           BPDOCD

/* VADCL */
#define VADC0_REG            VADCL
#define VADC1_REG            VADCL
#define VADC2_REG            VADCL
#define VADC3_REG            VADCL
#define VADC4_REG            VADCL
#define VADC5_REG            VADCL
#define VADC6_REG            VADCL
#define VADC7_REG            VADCL

/* pins mapping */











