/***********************************************************************/
/*  													               */
/*      PROJECT NAME :  RL78G1C                                        */
/*      FILE         :  iodefine_ext.h                                 */
/*      DESCRIPTION  :  Definition of Extended SFRs                    */
/*      CPU SERIES   :  RL78 - G1C                                     */
/*      CPU TYPE     :  R5F10JGC                                       */
/*  													               */
/*      This file is generated by e2studio.                        */
/*  													               */
/***********************************************************************/                                                                       
                                                                                   
/************************************************************************/
/* Header file generated from device file:                              */
/*    DR5F10JGC.DVF                                                     */
/*    Copyright(C) 2012 Renesas                                         */
/*    File Version V1.00                                                */
/*    Tool Version 1.9.7121                                             */
/*    Date Generated 13/11/2012                                         */
/************************************************************************/

#ifndef __IOREG_BIT_STRUCTURES
#define __IOREG_BIT_STRUCTURES
typedef struct {
	unsigned char no0 :1;
	unsigned char no1 :1;
	unsigned char no2 :1;
	unsigned char no3 :1;
	unsigned char no4 :1;
	unsigned char no5 :1;
	unsigned char no6 :1;
	unsigned char no7 :1;
} __BITS8;

typedef struct {
	unsigned short no0 :1;
	unsigned short no1 :1;
	unsigned short no2 :1;
	unsigned short no3 :1;
	unsigned short no4 :1;
	unsigned short no5 :1;
	unsigned short no6 :1;
	unsigned short no7 :1;
	unsigned short no8 :1;
	unsigned short no9 :1;
	unsigned short no10 :1;
	unsigned short no11 :1;
	unsigned short no12 :1;
	unsigned short no13 :1;
	unsigned short no14 :1;
	unsigned short no15 :1;
} __BITS16;

#endif

#ifndef IODEFINE_EXT_H
#define IODEFINE_EXT_H

/*
 IO Registers
 */
union un_adm2 {
	unsigned char adm2;
	__BITS8 BIT;
};
union un_pms {
	unsigned char pms;
	__BITS8 BIT;
};
union un_pu0 {
	unsigned char pu0;
	__BITS8 BIT;
};
union un_pu1 {
	unsigned char pu1;
	__BITS8 BIT;
};
union un_pu3 {
	unsigned char pu3;
	__BITS8 BIT;
};
union un_pu4 {
	unsigned char pu4;
	__BITS8 BIT;
};
union un_pu5 {
	unsigned char pu5;
	__BITS8 BIT;
};
union un_pu7 {
	unsigned char pu7;
	__BITS8 BIT;
};
union un_pu12 {
	unsigned char pu12;
	__BITS8 BIT;
};
union un_pu14 {
	unsigned char pu14;
	__BITS8 BIT;
};
union un_pim0 {
	unsigned char pim0;
	__BITS8 BIT;
};
union un_pim3 {
	unsigned char pim3;
	__BITS8 BIT;
};
union un_pim5 {
	unsigned char pim5;
	__BITS8 BIT;
};
union un_pom0 {
	unsigned char pom0;
	__BITS8 BIT;
};
union un_pom3 {
	unsigned char pom3;
	__BITS8 BIT;
};
union un_pom5 {
	unsigned char pom5;
	__BITS8 BIT;
};
union un_pom7 {
	unsigned char pom7;
	__BITS8 BIT;
};
union un_pmc12 {
	unsigned char pmc12;
	__BITS8 BIT;
};
union un_nfen0 {
	unsigned char nfen0;
	__BITS8 BIT;
};
union un_nfen1 {
	unsigned char nfen1;
	__BITS8 BIT;
};
union un_isc {
	unsigned char isc;
	__BITS8 BIT;
};
union un_dflctl {
	unsigned char dflctl;
	__BITS8 BIT;
};
union un_bectl {
	unsigned char bectl;
	__BITS8 BIT;
};
union un_fsse {
	unsigned char fsse;
	__BITS8 BIT;
};
union un_pfs {
	unsigned char pfs;
	__BITS8 BIT;
};
union un_mduc {
	unsigned char mduc;
	__BITS8 BIT;
};
union un_per0 {
	unsigned char per0;
	__BITS8 BIT;
};
union un_rmc {
	unsigned char rmc;
	__BITS8 BIT;
};
union un_rpectl {
	unsigned char rpectl;
	__BITS8 BIT;
};
union un_se0l {
	unsigned char se0l;
	__BITS8 BIT;
};
union un_ss0l {
	unsigned char ss0l;
	__BITS8 BIT;
};
union un_st0l {
	unsigned char st0l;
	__BITS8 BIT;
};
union un_soe0l {
	unsigned char soe0l;
	__BITS8 BIT;
};
union un_te0l {
	unsigned char te0l;
	__BITS8 BIT;
};
union un_ts0l {
	unsigned char ts0l;
	__BITS8 BIT;
};
union un_tt0l {
	unsigned char tt0l;
	__BITS8 BIT;
};
union un_toe0l {
	unsigned char toe0l;
	__BITS8 BIT;
};
union un_iicctl00 {
	unsigned char iicctl00;
	__BITS8 BIT;
};
union un_iicctl01 {
	unsigned char iicctl01;
	__BITS8 BIT;
};
union un_dscctl {
	unsigned char dscctl;
	__BITS8 BIT;
};
union un_mckc {
	unsigned char mckc;
	__BITS8 BIT;
};
union un_crc0ctl {
	unsigned char crc0ctl;
	__BITS8 BIT;
};

#define ADM2 (*(volatile union un_adm2 *)0xF0010).adm2
#define ADM2_bit (*(volatile union un_adm2 *)0xF0010).BIT
#define ADUL (*(volatile unsigned char *)0xF0011)
#define ADLL (*(volatile unsigned char *)0xF0012)
#define ADTES (*(volatile unsigned char *)0xF0013)
#define PMS (*(volatile union un_pms *)0xF0018).pms
#define PMS_bit (*(volatile union un_pms *)0xF0018).BIT
#define PIOR (*(volatile unsigned char *)0xF001A)
#define PU0 (*(volatile union un_pu0 *)0xF0030).pu0
#define PU0_bit (*(volatile union un_pu0 *)0xF0030).BIT
#define PU1 (*(volatile union un_pu1 *)0xF0031).pu1
#define PU1_bit (*(volatile union un_pu1 *)0xF0031).BIT
#define PU3 (*(volatile union un_pu3 *)0xF0033).pu3
#define PU3_bit (*(volatile union un_pu3 *)0xF0033).BIT
#define PU4 (*(volatile union un_pu4 *)0xF0034).pu4
#define PU4_bit (*(volatile union un_pu4 *)0xF0034).BIT
#define PU5 (*(volatile union un_pu5 *)0xF0035).pu5
#define PU5_bit (*(volatile union un_pu5 *)0xF0035).BIT
#define PU7 (*(volatile union un_pu7 *)0xF0037).pu7
#define PU7_bit (*(volatile union un_pu7 *)0xF0037).BIT
#define PU12 (*(volatile union un_pu12 *)0xF003C).pu12
#define PU12_bit (*(volatile union un_pu12 *)0xF003C).BIT
#define PU14 (*(volatile union un_pu14 *)0xF003E).pu14
#define PU14_bit (*(volatile union un_pu14 *)0xF003E).BIT
#define PIM0 (*(volatile union un_pim0 *)0xF0040).pim0
#define PIM0_bit (*(volatile union un_pim0 *)0xF0040).BIT
#define PIM3 (*(volatile union un_pim3 *)0xF0043).pim3
#define PIM3_bit (*(volatile union un_pim3 *)0xF0043).BIT
#define PIM5 (*(volatile union un_pim5 *)0xF0045).pim5
#define PIM5_bit (*(volatile union un_pim5 *)0xF0045).BIT
#define POM0 (*(volatile union un_pom0 *)0xF0050).pom0
#define POM0_bit (*(volatile union un_pom0 *)0xF0050).BIT
#define POM3 (*(volatile union un_pom3 *)0xF0053).pom3
#define POM3_bit (*(volatile union un_pom3 *)0xF0053).BIT
#define POM5 (*(volatile union un_pom5 *)0xF0055).pom5
#define POM5_bit (*(volatile union un_pom5 *)0xF0055).BIT
#define POM7 (*(volatile union un_pom7 *)0xF0057).pom7
#define POM7_bit (*(volatile union un_pom7 *)0xF0057).BIT
#define PMC12 (*(volatile union un_pmc12 *)0xF006C).pmc12
#define PMC12_bit (*(volatile union un_pmc12 *)0xF006C).BIT
#define NFEN0 (*(volatile union un_nfen0 *)0xF0070).nfen0
#define NFEN0_bit (*(volatile union un_nfen0 *)0xF0070).BIT
#define NFEN1 (*(volatile union un_nfen1 *)0xF0071).nfen1
#define NFEN1_bit (*(volatile union un_nfen1 *)0xF0071).BIT
#define ISC (*(volatile union un_isc *)0xF0073).isc
#define ISC_bit (*(volatile union un_isc *)0xF0073).BIT
#define TIS0 (*(volatile unsigned char *)0xF0074)
#define ADPC (*(volatile unsigned char *)0xF0076)
#define IAWCTL (*(volatile unsigned char *)0xF0077)
#define PRDSEL (*(volatile unsigned short *)0xF007E)
#define TOOLEN (*(volatile unsigned char *)0xF0080)
#define BPAL0 (*(volatile unsigned char *)0xF0081)
#define BPAH0 (*(volatile unsigned char *)0xF0082)
#define BPAS0 (*(volatile unsigned char *)0xF0083)
#define BACDVL0 (*(volatile unsigned char *)0xF0084)
#define BACDVH0 (*(volatile unsigned char *)0xF0085)
#define BACDML0 (*(volatile unsigned char *)0xF0086)
#define BACDMH0 (*(volatile unsigned char *)0xF0087)
#define MONMOD (*(volatile unsigned char *)0xF0088)
#define DFLCTL (*(volatile union un_dflctl *)0xF0090).dflctl
#define DFLCTL_bit (*(volatile union un_dflctl *)0xF0090).BIT
#define HIOTRM (*(volatile unsigned char *)0xF00A0)
#define BECTL (*(volatile union un_bectl *)0xF00A1).bectl
#define BECTL_bit (*(volatile union un_bectl *)0xF00A1).BIT
#define HOCODIV (*(volatile unsigned char *)0xF00A8)
#define TEMPCAL0 (*(volatile unsigned char *)0xF00AC)
#define TEMPCAL1 (*(volatile unsigned char *)0xF00AD)
#define TEMPCAL2 (*(volatile unsigned char *)0xF00AE)
#define TEMPCAL3 (*(volatile unsigned char *)0xF00AF)
#define FLSEC (*(volatile unsigned short *)0xF00B0)
#define FLFSWS (*(volatile unsigned short *)0xF00B2)
#define FLFSWE (*(volatile unsigned short *)0xF00B4)
#define FSSET (*(volatile unsigned char *)0xF00B6)
#define FSSE (*(volatile union un_fsse *)0xF00B7).fsse
#define FSSE_bit (*(volatile union un_fsse *)0xF00B7).BIT
#define FLFADL (*(volatile unsigned short *)0xF00B8)
#define FLFADH (*(volatile unsigned char *)0xF00BA)
#define PFCMD (*(volatile unsigned char *)0xF00C0)
#define PFS (*(volatile union un_pfs *)0xF00C1).pfs
#define PFS_bit (*(volatile union un_pfs *)0xF00C1).BIT
#define FLRL (*(volatile unsigned short *)0xF00C2)
#define FLRH (*(volatile unsigned short *)0xF00C4)
#define FLWE (*(volatile unsigned char *)0xF00C6)
#define FLRE (*(volatile unsigned char *)0xF00C7)
#define FLTMS (*(volatile unsigned short *)0xF00C8)
#define DFLMC (*(volatile unsigned short *)0xF00CA)
#define FLMCL (*(volatile unsigned short *)0xF00CC)
#define FLMCH (*(volatile unsigned char *)0xF00CE)
#define FSCTL (*(volatile unsigned char *)0xF00CF)
#define ICEADR (*(volatile unsigned short *)0xF00D0)
#define ICEDAT (*(volatile unsigned short *)0xF00D2)
#define MDCL (*(volatile unsigned short *)0xF00E0)
#define MDCH (*(volatile unsigned short *)0xF00E2)
#define MDUC (*(volatile union un_mduc *)0xF00E8).mduc
#define MDUC_bit (*(volatile union un_mduc *)0xF00E8).BIT
#define PER0 (*(volatile union un_per0 *)0xF00F0).per0
#define PER0_bit (*(volatile union un_per0 *)0xF00F0).BIT
#define OSMC (*(volatile unsigned char *)0xF00F3)
#define RMC (*(volatile union un_rmc *)0xF00F4).rmc
#define RMC_bit (*(volatile union un_rmc *)0xF00F4).BIT
#define RPECTL (*(volatile union un_rpectl *)0xF00F5).rpectl
#define RPECTL_bit (*(volatile union un_rpectl *)0xF00F5).BIT
#define BCDADJ (*(volatile unsigned char *)0xF00FE)
#define VECTCTRL (*(volatile unsigned char *)0xF00FF)
#define SSR00 (*(volatile unsigned short *)0xF0100)
#define SSR00L (*(volatile unsigned char *)0xF0100)
#define SSR01 (*(volatile unsigned short *)0xF0102)
#define SSR01L (*(volatile unsigned char *)0xF0102)
#define SIR00 (*(volatile unsigned short *)0xF0108)
#define SIR00L (*(volatile unsigned char *)0xF0108)
#define SIR01 (*(volatile unsigned short *)0xF010A)
#define SIR01L (*(volatile unsigned char *)0xF010A)
#define SMR00 (*(volatile unsigned short *)0xF0110)
#define SMR01 (*(volatile unsigned short *)0xF0112)
#define SCR00 (*(volatile unsigned short *)0xF0118)
#define SCR01 (*(volatile unsigned short *)0xF011A)
#define SE0 (*(volatile unsigned short *)0xF0120)
#define SE0L (*(volatile union un_se0l *)0xF0120).se0l
#define SE0L_bit (*(volatile union un_se0l *)0xF0120).BIT
#define SS0 (*(volatile unsigned short *)0xF0122)
#define SS0L (*(volatile union un_ss0l *)0xF0122).ss0l
#define SS0L_bit (*(volatile union un_ss0l *)0xF0122).BIT
#define ST0 (*(volatile unsigned short *)0xF0124)
#define ST0L (*(volatile union un_st0l *)0xF0124).st0l
#define ST0L_bit (*(volatile union un_st0l *)0xF0124).BIT
#define SPS0 (*(volatile unsigned short *)0xF0126)
#define SPS0L (*(volatile unsigned char *)0xF0126)
#define SO0 (*(volatile unsigned short *)0xF0128)
#define SOE0 (*(volatile unsigned short *)0xF012A)
#define SOE0L (*(volatile union un_soe0l *)0xF012A).soe0l
#define SOE0L_bit (*(volatile union un_soe0l *)0xF012A).BIT
#define EDR00 (*(volatile unsigned short *)0xF012C)
#define EDR00L (*(volatile unsigned char *)0xF012C)
#define EDR01 (*(volatile unsigned short *)0xF012E)
#define EDR01L (*(volatile unsigned char *)0xF012E)
#define SOL0 (*(volatile unsigned short *)0xF0134)
#define SOL0L (*(volatile unsigned char *)0xF0134)
#define SSC0 (*(volatile unsigned short *)0xF0138)
#define SSC0L (*(volatile unsigned char *)0xF0138)
#define TCR00 (*(volatile unsigned short *)0xF0180)
#define TCR01 (*(volatile unsigned short *)0xF0182)
#define TCR02 (*(volatile unsigned short *)0xF0184)
#define TCR03 (*(volatile unsigned short *)0xF0186)
#define TMR00 (*(volatile unsigned short *)0xF0190)
#define TMR01 (*(volatile unsigned short *)0xF0192)
#define TMR02 (*(volatile unsigned short *)0xF0194)
#define TMR03 (*(volatile unsigned short *)0xF0196)
#define TSR00 (*(volatile unsigned short *)0xF01A0)
#define TSR00L (*(volatile unsigned char *)0xF01A0)
#define TSR01 (*(volatile unsigned short *)0xF01A2)
#define TSR01L (*(volatile unsigned char *)0xF01A2)
#define TSR02 (*(volatile unsigned short *)0xF01A4)
#define TSR02L (*(volatile unsigned char *)0xF01A4)
#define TSR03 (*(volatile unsigned short *)0xF01A6)
#define TSR03L (*(volatile unsigned char *)0xF01A6)
#define TE0 (*(volatile unsigned short *)0xF01B0)
#define TE0L (*(volatile union un_te0l *)0xF01B0).te0l
#define TE0L_bit (*(volatile union un_te0l *)0xF01B0).BIT
#define TS0 (*(volatile unsigned short *)0xF01B2)
#define TS0L (*(volatile union un_ts0l *)0xF01B2).ts0l
#define TS0L_bit (*(volatile union un_ts0l *)0xF01B2).BIT
#define TT0 (*(volatile unsigned short *)0xF01B4)
#define TT0L (*(volatile union un_tt0l *)0xF01B4).tt0l
#define TT0L_bit (*(volatile union un_tt0l *)0xF01B4).BIT
#define TPS0 (*(volatile unsigned short *)0xF01B6)
#define TO0 (*(volatile unsigned short *)0xF01B8)
#define TO0L (*(volatile unsigned char *)0xF01B8)
#define TOE0 (*(volatile unsigned short *)0xF01BA)
#define TOE0L (*(volatile union un_toe0l *)0xF01BA).toe0l
#define TOE0L_bit (*(volatile union un_toe0l *)0xF01BA).BIT
#define TOL0 (*(volatile unsigned short *)0xF01BC)
#define TOL0L (*(volatile unsigned char *)0xF01BC)
#define TOM0 (*(volatile unsigned short *)0xF01BE)
#define TOM0L (*(volatile unsigned char *)0xF01BE)
#define IICCTL00 (*(volatile union un_iicctl00 *)0xF0230).iicctl00
#define IICCTL00_bit (*(volatile union un_iicctl00 *)0xF0230).BIT
#define IICCTL01 (*(volatile union un_iicctl01 *)0xF0231).iicctl01
#define IICCTL01_bit (*(volatile union un_iicctl01 *)0xF0231).BIT
#define IICWL0 (*(volatile unsigned char *)0xF0232)
#define IICWH0 (*(volatile unsigned char *)0xF0233)
#define SVA0 (*(volatile unsigned char *)0xF0234)
#define IICSE0 (*(volatile unsigned char *)0xF0235)
#define DSCCTL (*(volatile union un_dscctl *)0xF02E5).dscctl
#define DSCCTL_bit (*(volatile union un_dscctl *)0xF02E5).BIT
#define MCKC (*(volatile union un_mckc *)0xF02E6).mckc
#define MCKC_bit (*(volatile union un_mckc *)0xF02E6).BIT
#define CRC0CTL (*(volatile union un_crc0ctl *)0xF02F0).crc0ctl
#define CRC0CTL_bit (*(volatile union un_crc0ctl *)0xF02F0).BIT
#define PGCRCL (*(volatile unsigned short *)0xF02F2)
#define CRCD (*(volatile unsigned short *)0xF02FA)
#define SYSCFG (*(volatile unsigned short *)0xF0400)
#define SYSCFG1 (*(volatile unsigned short *)0xF0402)
#define SYSSTS0 (*(volatile unsigned short *)0xF0404)
#define SYSSTS1 (*(volatile unsigned short *)0xF0406)
#define DVSTCTR0 (*(volatile unsigned short *)0xF0408)
#define DVSTCTR1 (*(volatile unsigned short *)0xF040A)
#define DMA0PCFG (*(volatile unsigned short *)0xF0410)
#define DMA1PCFG (*(volatile unsigned short *)0xF0412)
#define CFIFOM (*(volatile unsigned short *)0xF0414)
#define CFIFOML (*(volatile unsigned char *)0xF0414)
#define D0FIFOM (*(volatile unsigned short *)0xF0418)
#define D0FIFOML (*(volatile unsigned char *)0xF0418)
#define D1FIFOM (*(volatile unsigned short *)0xF041C)
#define D1FIFOML (*(volatile unsigned char *)0xF041C)
#define CFIFOSEL (*(volatile unsigned short *)0xF0420)
#define CFIFOCTR (*(volatile unsigned short *)0xF0422)
#define D0FIFOSEL (*(volatile unsigned short *)0xF0428)
#define D0FIFOCTR (*(volatile unsigned short *)0xF042A)
#define D1FIFOSEL (*(volatile unsigned short *)0xF042C)
#define D1FIFOCTR (*(volatile unsigned short *)0xF042E)
#define INTENB0 (*(volatile unsigned short *)0xF0430)
#define INTENB1 (*(volatile unsigned short *)0xF0432)
#define INTENB2 (*(volatile unsigned short *)0xF0434)
#define BRDYENB (*(volatile unsigned short *)0xF0436)
#define NRDYENB (*(volatile unsigned short *)0xF0438)
#define BEMPENB (*(volatile unsigned short *)0xF043A)
#define SOFCFG (*(volatile unsigned short *)0xF043C)
#define INTSTS0 (*(volatile unsigned short *)0xF0440)
#define INTSTS1 (*(volatile unsigned short *)0xF0442)
#define INTSTS2 (*(volatile unsigned short *)0xF0444)
#define BRDYSTS (*(volatile unsigned short *)0xF0446)
#define NRDYSTS (*(volatile unsigned short *)0xF0448)
#define BEMPSTS (*(volatile unsigned short *)0xF044A)
#define FRMNUM (*(volatile unsigned short *)0xF044C)
#define USBADDR (*(volatile unsigned short *)0xF0450)
#define USBREQ (*(volatile unsigned short *)0xF0454)
#define USBVAL (*(volatile unsigned short *)0xF0456)
#define USBINDX (*(volatile unsigned short *)0xF0458)
#define USBLENG (*(volatile unsigned short *)0xF045A)
#define DCPCFG (*(volatile unsigned short *)0xF045C)
#define DCPMAXP (*(volatile unsigned short *)0xF045E)
#define DCPCTR (*(volatile unsigned short *)0xF0460)
#define PIPESEL (*(volatile unsigned short *)0xF0464)
#define PIPECFG (*(volatile unsigned short *)0xF0468)
#define PIPEMAXP (*(volatile unsigned short *)0xF046C)
#define PIPEPERI (*(volatile unsigned short *)0xF046E)
#define PIPE4CTR (*(volatile unsigned short *)0xF0476)
#define PIPE5CTR (*(volatile unsigned short *)0xF0478)
#define PIPE6CTR (*(volatile unsigned short *)0xF047A)
#define PIPE7CTR (*(volatile unsigned short *)0xF047C)
#define PIPE4TRE (*(volatile unsigned short *)0xF049C)
#define PIPE4TRN (*(volatile unsigned short *)0xF049E)
#define PIPE5TRE (*(volatile unsigned short *)0xF04A0)
#define PIPE5TRN (*(volatile unsigned short *)0xF04A2)
#define USBBCCTRL0 (*(volatile unsigned short *)0xF04B0)
#define USBBCCTRL1 (*(volatile unsigned short *)0xF04B4)
#define USBBCOPT0 (*(volatile unsigned short *)0xF04B8)
#define USBBCOPT1 (*(volatile unsigned short *)0xF04BC)
#define USBMC (*(volatile unsigned short *)0xF04CC)
#define DEVADD0 (*(volatile unsigned short *)0xF04D0)
#define DEVADD1 (*(volatile unsigned short *)0xF04D2)
#define DEVADD2 (*(volatile unsigned short *)0xF04D4)
#define DEVADD3 (*(volatile unsigned short *)0xF04D6)
#define DEVADD4 (*(volatile unsigned short *)0xF04D8)
#define DEVADD5 (*(volatile unsigned short *)0xF04DA)

/*
 Sfr bits
 */
#define ADTYP ADM2_bit.no0
#define AWC ADM2_bit.no2
#define ADRCK ADM2_bit.no3
#define DFLEN DFLCTL_bit.no0
#define BRSAM BECTL_bit.no0
#define ESQST FSSE_bit.no7
#define DIVST MDUC_bit.no0
#define MACSF MDUC_bit.no1
#define MACOF MDUC_bit.no2
#define MDSM MDUC_bit.no3
#define MACMODE MDUC_bit.no6
#define DIVMODE MDUC_bit.no7
#define TAU0EN PER0_bit.no0
#define SAU0EN PER0_bit.no2
#define IICA0EN PER0_bit.no4
#define ADCEN PER0_bit.no5
#define RTCEN PER0_bit.no7
#define PAENB RMC_bit.no0
#define WDVOL RMC_bit.no7
#define RPEF RPECTL_bit.no0
#define RPERDIS RPECTL_bit.no7
#define SPT0 IICCTL00_bit.no0
#define STT0 IICCTL00_bit.no1
#define ACKE0 IICCTL00_bit.no2
#define WTIM0 IICCTL00_bit.no3
#define SPIE0 IICCTL00_bit.no4
#define WREL0 IICCTL00_bit.no5
#define LREL0 IICCTL00_bit.no6
#define IICE0 IICCTL00_bit.no7
#define PRS0 IICCTL01_bit.no0
#define DFC0 IICCTL01_bit.no2
#define SMC0 IICCTL01_bit.no3
#define DAD0 IICCTL01_bit.no4
#define CLD0 IICCTL01_bit.no5
#define WUP0 IICCTL01_bit.no7
#define CRC0EN CRC0CTL_bit.no7

/*
 Interrupt vector addresses
 */
#endif
