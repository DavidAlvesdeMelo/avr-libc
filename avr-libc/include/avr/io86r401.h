/* Copyright (c) 2002, Colin O'Flynn
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* avr/io86r401.h - definitions for AT86RF401 */

#ifndef _AVR_IO86RF401_H_
#define _AVR_IO86RF401_H_ 1

/* This file should only be included from <avr/io.h>, never directly. */

#ifndef _AVR_IO_H_
#  error "Include <avr/io.h> instead of this file."
#endif

#ifndef _AVR_IOXXX_H_
#  define _AVR_IOXXX_H_ "io86r401.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#include <avr/sfr_defs.h>

/* I/O registers */

/*Data in register */
#define IO_DATIN		_SFR_IO8(0x32)

/*Data out register */
#define IO_DATOUT		_SFR_IO8(0x31)

/*IO Enable register */
#define IO_ENAB		_SFR_IO8(0x30)


//NOTE: EEPROM name's changed to have D infront on them, per datasheet, but
//you may want to remove the leading D
/* EEPROM Control Register */
#define DEECR	_SFR_IO8(0x1C)

/* EEPROM Data Register */
#define DEEDR	_SFR_IO8(0x1D)

/* EEPROM Address Register */
#define DEEAR	_SFR_IO8(0x1E)
#define DEEARL	_SFR_IO8(0x1E)


/* Watchdog Timer Control Register */
#define WDTCR	_SFR_IO8(0x22)


/* Stack Pointer */
#define SP	_SFR_IO16(0x3D)
#define SPL	_SFR_IO8(0x3D)
#define SPH	_SFR_IO8(0x3E)

/* Status REGister */
#define SREG	_SFR_IO8(0x3F)

/* Bit Timer Control Register */
#define BTCR			_SFR_IO8(0x20)

/*Battery low configeration register */
#define BL_CONFIG		_SFR_IO8(0x35)

/*Button detect register*/
#define BDET			_SFR_IO8(0x34)

/*AVR Configeration register*/
#define AVR_CONFIG 	_SFR_IO8(0x33)

/* Lock Detector Configuration Register 2 */

#define LOCKDET2		_SFR_IO8(0x17)


/* Lock Detector Configuration Register 1 */

#define LOCKDET1		_SFR_IO8(0x10)


/* VCO Tuning Register*/

#define VCOTUNE		_SFR_IO8(0x16)


/* Power Attenuation Control Register */

#define PWR_ATTEN		_SFR_IO8(0x14)

/* Transmitter Control Register */
#define TX_CNTRL		_SFR_IO8(0x12)


/* Interrupt vectors */

#define SIG_TXDONE		_VECTOR(1)
#define SIG_TXBE		_VECTOR(2)	//transmitt buffer empty

#define _VECTORS_SIZE 6

/*
 *  The Register Bit names are represented by their bit number (0-7).
 */

/* Lock Detector Configuration Register 1 - LOCKDET1 */
#define	UPOK		4
#define	ENKO		3
#define	BOD		2
#define	CS1		1
#define	CS0		0

/* Transmit Control Register - TX_CNTL */
#define	TXE		5
#define	TXK		4
#define	LOC		2

/* Power Attenuation Control Register - PWR_ATTEN */
#define	PCC2		5
#define	PCC1		4
#define	PCC0		3
#define PCF2		2
#define	PCF1		1
#define	PCF0		0

/* VCO Tuning Register 6 - VCOTUNE --NOTE: [] removed from names*/
#define	VCOVDET1		7
#define	VCOVDET0		6
#define	VCOTUNE4		4
#define	VCOTUNE3	  	3
#define	VCOTUNE2		2
#define VCOTUNE1		1
#define	VCOTUNE0		0

/* Lock Detector Configuration Register 2 - LOCKDET2 --NOTE: [] removed from names*/
#define	EUD  		7
#define	LAT		6
#define	ULC2		5
#define	ULC1		4
#define	ULC0		3
#define	LC2		2
#define	LC1		1
#define	LC0		0

/* Data EEPROM Control Register - DEECR */
#define  BSY		3
#define  EEU		2
#define	EEL		1
#define	EER		0

/* Data EEPROM Data Register - DEEDR */
#define	ED7	7
#define	ED6      6
#define	ED5      5
#define	ED4      4
#define	ED3      3
#define	ED2      2
#define	ED1      1
#define	ED0      0

/* Data EEPROM Address Register - DEEAR */
#define	PA6		6
#define	PA5		5
#define	PA4		4
#define	PA3		3
#define	BA2		2 //B is not a typo!
#define	BA1		1
#define	BA0		0

/* Bit Timer Count Register - BTCNT */
#define	C7		7
#define	C6     		6
#define	C5		5
#define	C4		4
#define	C3		3
#define	C2		2
#define	C1		1
#define	C0		0

/* Bit Timer Control Register - BTCR */
#define	C9		7
#define	C8		6
#define	M1		5
#define	M0		4
#define	IE		3
#define	F2		2
#define	DATA		1
#define	F0		0

/* Watchdog Timer Control Register - WDTCR */
#define	WDTOE		4
#define	WDE		3
#define	WDP2		2
#define	WDP1		1
#define	WDP0		0

/* I/O Enable Register - IO_ENAB */
#define	BOHYST	6
#define	IOE5		5
#define	IOE4		4
#define	IOE3		3
#define	IOE2		2
#define	IOE1		1
#define	IOE0		0

//note: NO PortB or whatever, this is the equivilent
/* I/O Data Out Register - IO_DATOUT */
#define	IOO5     5
#define	IOO4     4
#define	IOO3     3
#define	IOO2     2
#define	IOO1     1
#define	IOO0     0

//note: NO PinB or whatever, this is the equivilent
/* I/O Data In Register - IO_DATIN */
#define	IOI5     5
#define	IOI4     4
#define	IOI3     3
#define	IOI2     2
#define	IOI1     1
#define	IOI0     0

/* AVR Configuration Register - AVR_CONFIG */
#define	ACS1		6
#define	ACS0		5
#define	TM		4
#define	DB		3
#define	BLI		2
#define	SLEEP		1
#define	BBM		0

/* Button Detect Register - B_DET */
#define	DB5	  	5
#define	DB4	  	4
#define	DB3	  	3
#define	DB2	  	2
#define	DB1	  	1
#define	DB0	  	0

/* Battery Low Configuration Register - BL_CONFIG */
#define	BL			7
#define	BLV		6
#define	BL5		5
#define	BL4		4
#define	BL3		3
#define	BL2		2
#define	BL1		1
#define	BL0		0

/* Pointer definition   */ 
#define    XL     r26
#define    XH     r27
#define    YL     r28
#define    YH     r29
#define    ZL     r30
#define    ZH     r31
       
/* Constants */ 
#define    RAMEND    0xDF
#define    XRAMEND   0xDF
#define    E2END     0x7F
#define    FLASHEND  0x03FF

#endif  /* _AVR_IO86RF401_H_ */

