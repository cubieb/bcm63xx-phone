/*
 * VE880_ABS100V_LITE_NB_PCM_Rev2_8.c --
 *
 * This file contains profile data in byte format
 *
 * Project Info --
 *   File:   C:\Microsemi\Profile_Wizard_P2.7.0\Data\bcm63xx-phone\VE880_ABS100V_LITE_NB_PCM_Rev2_8.vpw
 *   Type:   VE880 ABS Configuration for -27/-81V Supply with VBL Regulation, Lite Narrowband Coefficients and PCM/MPI Interface at 2.048MHz PCLK and tick rate at 10ms
 *   Date:   Friday, March 20, 2015 09:39:25
 *   Device: VE880 Le88266
 *
 *   This file was generated with Profile Wizard Version: P2.7.0
 *
 * Project Comments --
 *  ----------------------------------------------------------------------------------------------------------------------------------
 *  Profile Wizard Coefficient Revision 2.8 Release Notes:
 *  ----------------------------------------------------------------------------------------------------------------------------------
 *  I. General:
 *  1. This is the first release of the VE880 worldwide coefficients.
 *  2. This release includes support for the following 44 countries:
 *  Argentina (AR), Austria (AT), Australia (AU), Belgium (BE), Brazil (BR), Bulgaria (BG), Canada (CA), Switzerland (CH),
 *  Chile (CL), China (CN), Czech Republic (CZ), Germany (DE), Denmark (DK), Ecuador (EC), Spain (ES), Finland (FI),
 *  France (FR), UK (GB), Greece (GR), Hong Kong SAR China (HK), Hungary (HU), Indonesia (ID), Ireland (IE), Israel (IL),
 *  India (IN), Iceland (IS), Italy (IT), Japan (JP), S. Korea (KR), Mexico (MX), Malaysia (MY), Netherlands (NL),
 *  Norway (NO), New Zealand (NZ), Poland (PL), Portugal (PT), Russian Federation (RU), Sweden (SE), Singapore (SG),
 *  Thailand (TH), Turkey (TK), Taiwan (TW), USA (US), and South Africa (ZA).
 *  2. The coefficients in this and all releases are provided for use only with the Microsemi VoicePath API-II (VP-API-II). Please refer 
 *  to the terms and conditions for licensing the software regarding terms and conditions of usage. These profiles are provided for 
 *  reference only with no guarantee whatsoever by Microsemi Corporation.
 *  3. This release is for the VE880 ABS devices and chipsets with PCM/MPI host interfaces including Le88266 and Le88286.
 *  
 *  II. Device Profile:
 *  1. The default settings for the Device Profile are:
 *         PCLK = 8192 kHz
 *         PCM Transmit Edge = Positive
 *         Transmit Time Slot = 0
 *         Receive Time Slot = 0
 *         Interrupt Mode = Open Drain
 *         Y Voltage: -27V
 *         Z Voltage: -5V
 *         Battery Sense Input: VBL=SWVSY, VBM=XB, VBH=SWVSZ
 *         Switching Frequency: LP=48kHz, MP=96kHz, HP=384kHz
 *         Driver Tick Rate = 5 ms
 *  
 *  2. These settings correspond to a VBL = -27V and VBH = -81V. It is possible to change these settings for a maximum VBL = -30V and 
 *  VBH = -90V.
 *  3. These settings are for VBL regulation. VBH is only regulated via transformer coupling.
 *  4. The settings may be changed by the user as necessary.  Please refer to the VE880 and VP-API-II documentation for information 
 *  about the supported settings.
 *  
 *  II. AC Profiles:
 *  1. FXS Coefficients assume -6dBr RX (Output from chipset) and 0dB TX relative gain levels.
 *  2. Supported countries not individually listed should use the default 600R profile AC_FXS_RF14_600R_DEF.
 *  4. AC FXS Coefficients assume the use of two 7 ohm series resistors or PTCs. Customers using other PTC resistance values (such as 
 *  25ohms or 50 ohms) should not use these AC coefficients and can request alternate ones from Microsemi.
 *  5. This release includes Normal (or Narrowband) coefficients for the FXS port. Wideband coefficients are available upon request.
 *  
 *  III. DC Profile:
 *  1. The DC_FXS_VE880_ABS100V_DEF Profile is the default used for all countries.  Additional profiles may be created by the user if necessary.
 *  
 *  IV. Ring Profiles:
 *  1. RING_25HZ_VE880_ABS100V_DEF is the default ringing profile and should be used for all countries which do not have a listed ringing profile.  
 *  The default ringing profile is set for a sine wave ringing with an amplitude of 50 Vrms and a frequency of 25 Hz.
 *  2. All ringing profiles on the list are sinusoidal with an amplitude of 70 Vpk (50Vrms) with no DC bias. 
 *  3. The ringing definitions may be changed based on the requirements of the target market as long as the total amplitude (AC +DC 
 *  components) does not exceed the limits set forth in the VE880 data sheets.
 *  
 *  V. Tone Profiles:
 *  1. These profiles are available only in the full version of the VP-API-II.
 *  
 *  VI. Cadence Profiles:
 *  1. These profiles are available only in the full version of the VP-API-II.
 *  
 *  VII. Caller ID Profiles:
 *  1. These profiles are available only in the full version of the VP-API-II.
 *  
 *  VIII. Metering Profiles:
 *  1. Metering profiles are provided for 12kHz and 16kHz signaling. They are not currently listed by the countries that use them. 
 *  
 *  (c) Copyright 2011 Microsemi Corporation. All rights reserved.
 *  
 *  -----------------------------------------------------------------------------------------------------------------------------------------------------
 */

#include "VE880_ABS100V_LITE_NB_PCM_Rev2_8.h"


/************** Device Parameters **************/

/* Device Configuration Data - VE880 ABS -27/-81V Power Optimized With Free Run, PCM/MPI Interface */
const VpProfileDataType DEV_PROFILE_VE880_ABS100V_PCM[] =
{
  /* Device Profile for VE880 Device Family */
 0x00, 0xFF, 0x00, 0x20, /* Profile Index and Length */
 0x05, 0x00, /* Version and MPI Command */
 0x08, 0x00, /* PCLK Frequency */
 0x02, 0x00, /* Device Config 1, Battery Control Mode */
 0x40, 0x02, /* Clock Slot and Max Events */
 0x0A, 0x00, /* Device Tickrate */
 0xE4, 0x00, 0x04, 0x00, /* Switching Regulator Parameters */
 0x1B, 0x05, /* Y-Voltage, Z-Voltage */
 0x00, 0x00, 0x00, 0x00, /* RSVD */
 0xB1, 0x00, 0xB1, 0x00, 0xB0, 0x40, /* Regulator Timing Parameters */
 0x2C, 0x40, 0x2C, 0x40, 0x2C, 0x40  /* FreeRun Timing Parameters */
};

/************** AC Filter Coefficients **************/

/* AC FXS RF14 600R Normal Coefficients (Default)  */
const VpProfileDataType AC_FXS_RF14_600R_DEF[] =
{
  /* AC Profile */
 0xA4, 0x00, 0xF4, 0x4C, 0x01, 0x49, 0xCA, 0xF5, 0x98, 0xAA, 0x7B, 0xAB,
 0x2C, 0xA3, 0x25, 0xA5, 0x24, 0xB2, 0x3D, 0x9A, 0x2A, 0xAA, 0xA6, 0x9F,
 0x01, 0x8A, 0x1D, 0x01, 0xA3, 0xA0, 0x2E, 0xB2, 0xB2, 0xBA, 0xAC, 0xA2,
 0xA6, 0xCB, 0x3B, 0x45, 0x88, 0x2A, 0x20, 0x3C, 0xBC, 0x4E, 0xA6, 0x2B,
 0xA5, 0x2B, 0x3E, 0xBA, 0x8F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0x2A, 0x42, 0xA1, 0xCB, 0x1B, 0xA3, 0xA8, 0xFB, 0x87, 0xAA,
 0xFB, 0x9F, 0xA9, 0xF0, 0x96, 0x2E, 0x01, 0x00
};

/* AC FXS RF14 ETSI ES201 970 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_ETSI[] =
{
  /* AC Profile */
 0xD5, 0x00, 0xEC, 0x4C, 0x01, 0x49, 0xCA, 0xE8, 0x98, 0x4A, 0xA1, 0x34,
 0xA2, 0xA2, 0xAC, 0x2C, 0xBB, 0x2B, 0xA4, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x9C, 0xD0, 0x2B, 0x20, 0x8F, 0x39, 0x2A, 0xBB, 0xA4, 0x24,
 0xB2, 0xBC, 0x4B, 0x26, 0x88, 0xA3, 0xC0, 0xC2, 0x27, 0xBA, 0x3E, 0xAC,
 0xAF, 0xB4, 0x26, 0x24, 0x3F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xC3, 0x5F, 0x32, 0x98, 0x03, 0xA1, 0xAA, 0x23, 0xB3, 0x2C,
 0x4B, 0x55, 0x25, 0x60, 0x96, 0xF2, 0xC1, 0x00
};

/* AC FXS RF14 Telcordia GR-57 900R+2.16uF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_GR57[] =
{
  /* AC Profile */
 0x01, 0x00, 0x90, 0x4C, 0x01, 0x49, 0xCA, 0x0E, 0x98, 0x32, 0x2B, 0x24,
 0x7C, 0x4A, 0x24, 0x55, 0xA3, 0x3A, 0xBC, 0x9A, 0xBA, 0xB3, 0xF4, 0x2D,
 0x01, 0x8A, 0xEB, 0xC0, 0x26, 0x21, 0xB2, 0x35, 0xB3, 0xA6, 0x2A, 0xAD,
 0xD4, 0xA6, 0x52, 0x4F, 0x88, 0xA3, 0xD0, 0x23, 0xAA, 0xAF, 0x62, 0xEA,
 0xBA, 0x2A, 0xB3, 0x4A, 0x3D, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xBD, 0x52, 0xA1, 0x62, 0x1B, 0x22, 0x3A, 0x4B, 0xB5, 0x2A,
 0x65, 0xA7, 0xB6, 0x70, 0x96, 0x23, 0xC0, 0x00
};

/* AC FXS RF14 Austria 220R+820R//115nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_AT[] =
{
  /* AC Profile */
 0x6D, 0x00, 0xA7, 0x4C, 0x01, 0x49, 0xCA, 0xEA, 0x98, 0xFA, 0xE1, 0x23,
 0xA2, 0xEA, 0xCB, 0xB3, 0xAA, 0xA3, 0xB3, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x2E, 0x01, 0xB3, 0x20, 0xAB, 0xA8, 0xCC, 0x24, 0x22, 0x97,
 0xAF, 0x8F, 0xD3, 0xBF, 0x88, 0x3B, 0xB0, 0x33, 0x46, 0x2A, 0x2E, 0x33,
 0x4F, 0xAE, 0xA5, 0xB3, 0xBE, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0x2A, 0x42, 0x22, 0x98, 0x02, 0x42, 0xA2, 0x43, 0xA6, 0xD8,
 0xFA, 0x8F, 0x29, 0xF0, 0x96, 0x2E, 0x01, 0x00
};

/* AC FXS RF14 Australia 220R+820R//120nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_AU[] =
{
  /* AC Profile */
 0xBF, 0x00, 0xAF, 0x4C, 0x01, 0x49, 0xCA, 0xE8, 0x98, 0xBA, 0x41, 0x54,
 0xA2, 0x2A, 0x5B, 0xA4, 0xAA, 0x3A, 0xB3, 0x9A, 0x87, 0xA2, 0x97, 0x9F,
 0x01, 0x8A, 0x2E, 0x01, 0x23, 0x20, 0x3E, 0xA8, 0x2A, 0x57, 0xCB, 0x34,
 0xBA, 0xAC, 0xBB, 0xA6, 0x88, 0xAA, 0xB0, 0x49, 0xF6, 0x3B, 0x2E, 0x49,
 0xFF, 0xBC, 0xA5, 0x3A, 0xBE, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0x34, 0x5C, 0x32, 0x25, 0x1A, 0xA1, 0x3B, 0x23, 0xB3, 0x5B,
 0x4D, 0xB5, 0xDC, 0x60, 0x96, 0x3B, 0xA1, 0x00
};

/* AC FXS RF14 Belgium 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_BE[] =
{
  /* AC Profile */
 0xD5, 0x00, 0xEC, 0x4C, 0x01, 0x49, 0xCA, 0xE8, 0x98, 0x4A, 0xA1, 0x34,
 0xA2, 0xA2, 0xAC, 0x2C, 0xBB, 0x2B, 0xA4, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x9C, 0xD0, 0x2B, 0x20, 0x8F, 0x39, 0x2A, 0xBB, 0xA4, 0x24,
 0xB2, 0xBC, 0x4B, 0x26, 0x88, 0xA3, 0xC0, 0xC2, 0x27, 0xBA, 0x3E, 0xAC,
 0xAF, 0xB4, 0x26, 0x24, 0x3F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xC3, 0x5F, 0x32, 0x98, 0x03, 0xA1, 0xAA, 0x23, 0xB3, 0x2C,
 0x4B, 0x55, 0x25, 0x60, 0x96, 0xF2, 0xC1, 0x00
};

/* AC FXS RF14 Bulgaria 220R+820R//115nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_BG[] =
{
  /* AC Profile */
 0x6D, 0x00, 0xA7, 0x4C, 0x01, 0x49, 0xCA, 0xEA, 0x98, 0xFA, 0xE1, 0x23,
 0xA2, 0xEA, 0xCB, 0xB3, 0xAA, 0xA3, 0xB3, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x2E, 0x01, 0xB3, 0x20, 0xAB, 0xA8, 0xCC, 0x24, 0x22, 0x97,
 0xAF, 0x8F, 0xD3, 0xBF, 0x88, 0x3B, 0xB0, 0x33, 0x46, 0x2A, 0x2E, 0x33,
 0x4F, 0xAE, 0xA5, 0xB3, 0xBE, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0x2A, 0x42, 0x22, 0x98, 0x02, 0x42, 0xA2, 0x43, 0xA6, 0xD8,
 0xFA, 0x8F, 0x29, 0xF0, 0x96, 0x2E, 0x01, 0x00
};

/* AC FXS RF14 Brazil 900R Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_BR[] =
{
  /* AC Profile */
 0xE4, 0x00, 0xF7, 0x4C, 0x01, 0x49, 0xCA, 0x0B, 0x98, 0x34, 0x3B, 0xB2,
 0x2C, 0x9F, 0xA4, 0xD2, 0xA3, 0x22, 0xAC, 0x9A, 0xA4, 0xAA, 0x67, 0x9F,
 0x01, 0x8A, 0xB3, 0xD0, 0xA6, 0x21, 0xAA, 0x34, 0x2B, 0x2F, 0x4A, 0xA6,
 0xAB, 0x2F, 0x4A, 0x37, 0x88, 0x2A, 0xC0, 0x23, 0xAC, 0x2A, 0x26, 0x32,
 0xA5, 0x3C, 0xAD, 0xA4, 0xA7, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xAB, 0x49, 0xF1, 0x2A, 0x0A, 0x43, 0xC9, 0xF3, 0x27, 0xBC,
 0xE2, 0xAF, 0xAD, 0xF0, 0x96, 0x2E, 0x01, 0x00
};

/* AC FXS RF14 Switzerland 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_CH[] =
{
  /* AC Profile */
 0xD5, 0x00, 0xEC, 0x4C, 0x01, 0x49, 0xCA, 0xE8, 0x98, 0x4A, 0xA1, 0x34,
 0xA2, 0xA2, 0xAC, 0x2C, 0xBB, 0x2B, 0xA4, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x9C, 0xD0, 0x2B, 0x20, 0x8F, 0x39, 0x2A, 0xBB, 0xA4, 0x24,
 0xB2, 0xBC, 0x4B, 0x26, 0x88, 0xA3, 0xC0, 0xC2, 0x27, 0xBA, 0x3E, 0xAC,
 0xAF, 0xB4, 0x26, 0x24, 0x3F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xC3, 0x5F, 0x32, 0x98, 0x03, 0xA1, 0xAA, 0x23, 0xB3, 0x2C,
 0x4B, 0x55, 0x25, 0x60, 0x96, 0xF2, 0xC1, 0x00
};

/* AC FXS RF14 China 200R+680R//100nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_CN[] =
{
  /* AC Profile */
 0xB9, 0x00, 0x1F, 0x4C, 0x01, 0x49, 0xCA, 0xE9, 0x98, 0x5C, 0xB1, 0xAA,
 0x23, 0x43, 0xEB, 0x32, 0xAA, 0x23, 0xB3, 0x9A, 0x98, 0x94, 0x97, 0x9F,
 0x01, 0x8A, 0x2D, 0x01, 0x22, 0x30, 0x6A, 0x59, 0x2A, 0xCB, 0xB4, 0xB2,
 0xBF, 0x3B, 0xA3, 0x25, 0x88, 0x43, 0xC0, 0x3A, 0x45, 0x2B, 0xBD, 0x4C,
 0x2E, 0x4C, 0x25, 0x42, 0xAD, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xA4, 0x5A, 0x32, 0xB5, 0x12, 0xA1, 0xA2, 0x3A, 0xA4, 0xB5,
 0x64, 0x97, 0xAA, 0xF0, 0x96, 0x2E, 0x01, 0x00
};

/* AC FXS RF14 Germany 220R+820R//115nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_DE[] =
{
  /* AC Profile */
 0xEB, 0x00, 0xDC, 0x4C, 0x01, 0x49, 0xCA, 0xEA, 0x98, 0xA2, 0xE1, 0x24,
 0xA2, 0x2A, 0xCB, 0xB3, 0xAA, 0xD3, 0xB3, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x2D, 0x01, 0x24, 0x20, 0x2C, 0xA8, 0xAB, 0x24, 0x22, 0x97,
 0xAF, 0x8F, 0x23, 0xBF, 0x88, 0x3B, 0xB0, 0x33, 0x46, 0x2A, 0x2E, 0x33,
 0x4F, 0xAE, 0xA5, 0xB3, 0xBE, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0x53, 0x54, 0x32, 0xC4, 0x1A, 0xA1, 0x2B, 0x2A, 0xA3, 0xAA,
 0x4A, 0xA5, 0xBA, 0x60, 0x96, 0xD2, 0xA1, 0x00
};

/* AC FXS RF14 Denmark 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_DK[] =
{
  /* AC Profile */
 0x7D, 0x00, 0x9A, 0x4C, 0x01, 0x49, 0xCA, 0xE6, 0x98, 0x22, 0xA1, 0x52,
 0xD2, 0xE7, 0x24, 0xF4, 0xCD, 0xAA, 0x97, 0x9A, 0xCA, 0xB3, 0xA5, 0x6E,
 0x01, 0x8A, 0x32, 0xD0, 0xAB, 0x20, 0xAA, 0x49, 0x29, 0x7A, 0x32, 0xD6,
 0xA2, 0xED, 0xC5, 0x97, 0x88, 0xBA, 0xC0, 0x22, 0xA7, 0x2C, 0xFE, 0x42,
 0xDE, 0x22, 0xB6, 0xB3, 0x9F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0x23, 0x53, 0x32, 0x2C, 0x1B, 0x22, 0xCA, 0x23, 0x63, 0x2A,
 0x33, 0xD4, 0x2A, 0x40, 0x96, 0xA2, 0xA0, 0x00
};

/* AC FXS RF14 Spain 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_ES[] =
{
  /* AC Profile */
 0xD5, 0x00, 0xEC, 0x4C, 0x01, 0x49, 0xCA, 0xE8, 0x98, 0x4A, 0xA1, 0x34,
 0xA2, 0xA2, 0xAC, 0x2C, 0xBB, 0x2B, 0xA4, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x9C, 0xD0, 0x2B, 0x20, 0x8F, 0x39, 0x2A, 0xBB, 0xA4, 0x24,
 0xB2, 0xBC, 0x4B, 0x26, 0x88, 0xA3, 0xC0, 0xC2, 0x27, 0xBA, 0x3E, 0xAC,
 0xAF, 0xB4, 0x26, 0x24, 0x3F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xC3, 0x5F, 0x32, 0x98, 0x03, 0xA1, 0xAA, 0x23, 0xB3, 0x2C,
 0x4B, 0x55, 0x25, 0x60, 0x96, 0xF2, 0xC1, 0x00
};

/* AC FXS RF14 Finland 270R+910R//120nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_FI[] =
{
  /* AC Profile */
 0xFF, 0x00, 0x8D, 0x4C, 0x01, 0x49, 0xCA, 0xEF, 0x98, 0x2A, 0xB1, 0x23,
 0x33, 0xB2, 0xAB, 0x44, 0xEB, 0xA4, 0x44, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x2D, 0x01, 0x24, 0x20, 0x25, 0xB8, 0x2D, 0x42, 0xDB, 0xBA,
 0xE3, 0x43, 0xF2, 0xAC, 0x88, 0xC4, 0xB0, 0xA2, 0xA7, 0x42, 0x3E, 0xA2,
 0x9F, 0x32, 0x26, 0xBE, 0x2F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xA2, 0x5C, 0x22, 0xA2, 0x13, 0xC1, 0xB3, 0x22, 0x23, 0x7A,
 0x3D, 0xB4, 0xD4, 0x50, 0x96, 0x3C, 0x41, 0x00
};

/* AC FXS RF14 France 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_FR[] =
{
  /* AC Profile */
 0xFC, 0x00, 0xA4, 0x4C, 0x01, 0x49, 0xCA, 0xE7, 0x98, 0xBA, 0x31, 0xA5,
 0x62, 0x35, 0xAB, 0xAA, 0xAA, 0xAC, 0xA3, 0x9A, 0xAA, 0xA2, 0xC7, 0x6F,
 0x01, 0x8A, 0x2D, 0x01, 0xBB, 0x10, 0xC2, 0x38, 0x2A, 0xA1, 0xC2, 0xA9,
 0x23, 0xA2, 0x22, 0x2D, 0x88, 0xA3, 0xB0, 0x53, 0x55, 0x4A, 0xAD, 0xB2,
 0xAD, 0x5A, 0x25, 0x72, 0x5E, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0x2A, 0x43, 0x22, 0x9F, 0x1A, 0x22, 0x4B, 0x33, 0xD5, 0x2C,
 0x7A, 0x87, 0xA8, 0xF0, 0x96, 0x2E, 0x01, 0x00
};

/* AC FXS RF14 UK 370R+620R//310nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_GB[] =
{
  /* AC Profile */
 0x24, 0x00, 0x0A, 0x4C, 0x01, 0x49, 0xCA, 0xE6, 0x98, 0x22, 0xA1, 0x52,
 0xD2, 0xE7, 0x24, 0xF4, 0xCD, 0xAA, 0x97, 0x9A, 0x2B, 0xA2, 0x27, 0x6E,
 0x01, 0x8A, 0x32, 0xD0, 0xCB, 0x20, 0xBB, 0x59, 0x5A, 0x4A, 0xAA, 0xB5,
 0x2C, 0x2D, 0x42, 0xC7, 0x88, 0xAA, 0xC0, 0xA3, 0xA7, 0xBA, 0xDE, 0x5C,
 0xCE, 0xAA, 0xA6, 0xA2, 0x9F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0x43, 0x5B, 0x32, 0x2C, 0x1D, 0x22, 0xAA, 0x2B, 0x33, 0xBA,
 0x3C, 0x34, 0xBA, 0x40, 0x96, 0xA2, 0xA0, 0x00
};

/* AC FXS RF14 Greece 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_GR[] =
{
  /* AC Profile */
 0x63, 0x00, 0x7D, 0x4C, 0x01, 0x49, 0xCA, 0x03, 0x98, 0x22, 0xA6, 0x2C,
 0x3E, 0x2B, 0x87, 0x44, 0x36, 0x2A, 0x9F, 0x9A, 0x22, 0xBA, 0xA7, 0x9F,
 0x01, 0x8A, 0x7D, 0xD0, 0xAA, 0xA0, 0x22, 0xAA, 0x98, 0xB4, 0x23, 0xBE,
 0xAB, 0xBF, 0xAA, 0x97, 0x88, 0x3C, 0xC0, 0x3A, 0xBD, 0xED, 0x8F, 0xEB,
 0xA6, 0x3A, 0x8F, 0x2B, 0x6F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xD2, 0x52, 0x22, 0xA2, 0x13, 0xA1, 0x97, 0x32, 0x25, 0xCA,
 0x6B, 0x87, 0x2B, 0xF0, 0x96, 0x2E, 0x01, 0x00
};

/* AC FXS RF14 Hungary 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_HU[] =
{
  /* AC Profile */
 0xD5, 0x00, 0xEC, 0x4C, 0x01, 0x49, 0xCA, 0xE8, 0x98, 0x4A, 0xA1, 0x34,
 0xA2, 0xA2, 0xAC, 0x2C, 0xBB, 0x2B, 0xA4, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x9C, 0xD0, 0x2B, 0x20, 0x8F, 0x39, 0x2A, 0xBB, 0xA4, 0x24,
 0xB2, 0xBC, 0x4B, 0x26, 0x88, 0xA3, 0xC0, 0xC2, 0x27, 0xBA, 0x3E, 0xAC,
 0xAF, 0xB4, 0x26, 0x24, 0x3F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xC3, 0x5F, 0x32, 0x98, 0x03, 0xA1, 0xAA, 0x23, 0xB3, 0x2C,
 0x4B, 0x55, 0x25, 0x60, 0x96, 0xF2, 0xC1, 0x00
};

/* AC FXS RF14 Ireland 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_IE[] =
{
  /* AC Profile */
 0xD5, 0x00, 0xEC, 0x4C, 0x01, 0x49, 0xCA, 0xE8, 0x98, 0x4A, 0xA1, 0x34,
 0xA2, 0xA2, 0xAC, 0x2C, 0xBB, 0x2B, 0xA4, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x9C, 0xD0, 0x2B, 0x20, 0x8F, 0x39, 0x2A, 0xBB, 0xA4, 0x24,
 0xB2, 0xBC, 0x4B, 0x26, 0x88, 0xA3, 0xC0, 0xC2, 0x27, 0xBA, 0x3E, 0xAC,
 0xAF, 0xB4, 0x26, 0x24, 0x3F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xC3, 0x5F, 0x32, 0x98, 0x03, 0xA1, 0xAA, 0x23, 0xB3, 0x2C,
 0x4B, 0x55, 0x25, 0x60, 0x96, 0xF2, 0xC1, 0x00
};

/* AC FXS RF14 Israel 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_IL[] =
{
  /* AC Profile */
 0xD5, 0x00, 0xEC, 0x4C, 0x01, 0x49, 0xCA, 0xE8, 0x98, 0x4A, 0xA1, 0x34,
 0xA2, 0xA2, 0xAC, 0x2C, 0xBB, 0x2B, 0xA4, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x9C, 0xD0, 0x2B, 0x20, 0x8F, 0x39, 0x2A, 0xBB, 0xA4, 0x24,
 0xB2, 0xBC, 0x4B, 0x26, 0x88, 0xA3, 0xC0, 0xC2, 0x27, 0xBA, 0x3E, 0xAC,
 0xAF, 0xB4, 0x26, 0x24, 0x3F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xC3, 0x5F, 0x32, 0x98, 0x03, 0xA1, 0xAA, 0x23, 0xB3, 0x2C,
 0x4B, 0x55, 0x25, 0x60, 0x96, 0xF2, 0xC1, 0x00
};

/* AC FXS RF14 Iceland 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_IS[] =
{
  /* AC Profile */
 0xD5, 0x00, 0xEC, 0x4C, 0x01, 0x49, 0xCA, 0xE8, 0x98, 0x4A, 0xA1, 0x34,
 0xA2, 0xA2, 0xAC, 0x2C, 0xBB, 0x2B, 0xA4, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x9C, 0xD0, 0x2B, 0x20, 0x8F, 0x39, 0x2A, 0xBB, 0xA4, 0x24,
 0xB2, 0xBC, 0x4B, 0x26, 0x88, 0xA3, 0xC0, 0xC2, 0x27, 0xBA, 0x3E, 0xAC,
 0xAF, 0xB4, 0x26, 0x24, 0x3F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xC3, 0x5F, 0x32, 0x98, 0x03, 0xA1, 0xAA, 0x23, 0xB3, 0x2C,
 0x4B, 0x55, 0x25, 0x60, 0x96, 0xF2, 0xC1, 0x00
};

/* AC FXS RF14 Italy 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_IT[] =
{
  /* AC Profile */
 0xEE, 0x00, 0xBD, 0x4C, 0x01, 0x49, 0xCA, 0xF3, 0x98, 0x22, 0xD2, 0xBA,
 0x34, 0x22, 0x3C, 0x53, 0xAB, 0xAA, 0xB4, 0x9A, 0x98, 0x1B, 0x97, 0x9F,
 0x01, 0x8A, 0x9C, 0xD0, 0xBC, 0xD0, 0x2A, 0x2A, 0x3C, 0x4C, 0x4E, 0x23,
 0xD2, 0xBB, 0xDB, 0x55, 0x88, 0xAA, 0xC0, 0x2C, 0xB5, 0x23, 0xAD, 0x4A,
 0x5E, 0xAD, 0xB5, 0x2B, 0x2E, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xA2, 0x52, 0xA1, 0xA3, 0x1A, 0x32, 0xAA, 0x4A, 0xAF, 0x3B,
 0xF4, 0x9F, 0x3A, 0xF0, 0x96, 0x2E, 0x01, 0x00
};

/* AC FXS RF14 Japan 600R+1uF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_JP[] =
{
  /* AC Profile */
 0xDA, 0x00, 0x5B, 0x4C, 0x01, 0x49, 0xCA, 0xF7, 0x98, 0xCA, 0x4D, 0xCD,
 0x2C, 0x45, 0x36, 0x23, 0x44, 0x3A, 0xCC, 0x9A, 0xC2, 0x61, 0xA3, 0xA2,
 0xC0, 0x8A, 0x7B, 0xA0, 0x5A, 0xA0, 0x23, 0xBB, 0x26, 0x23, 0x3A, 0x4B,
 0x5A, 0x24, 0xAA, 0xBD, 0x88, 0xAA, 0x20, 0x4A, 0xCA, 0x34, 0xA1, 0x34,
 0xA9, 0x3B, 0xB2, 0xAA, 0xAB, 0x82, 0x29, 0x71, 0x80, 0x22, 0xF0, 0x50,
 0x00, 0x86, 0xF2, 0x62, 0xA1, 0x36, 0x12, 0xA2, 0x24, 0x4A, 0x34, 0x5F,
 0x4C, 0x64, 0xB3, 0x40, 0x96, 0x2A, 0xC0, 0x00
};

/* AC FXS RF14 Netherlands 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_NL[] =
{
  /* AC Profile */
 0x7D, 0x00, 0x38, 0x4C, 0x01, 0x49, 0xCA, 0xF5, 0x98, 0xAA, 0x7B, 0xAB,
 0x2C, 0xA3, 0x25, 0xA5, 0x24, 0xB2, 0x3D, 0x9A, 0x22, 0xBA, 0xA6, 0x9F,
 0x01, 0x8A, 0x34, 0xD0, 0xCD, 0xA0, 0xAB, 0xD3, 0x22, 0xAB, 0x4A, 0xA3,
 0xA2, 0x2C, 0xAB, 0x45, 0x88, 0x2A, 0x20, 0x6C, 0xBC, 0xCE, 0xA6, 0x2B,
 0xA5, 0xAA, 0x3E, 0xBA, 0x8F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0x62, 0x52, 0x22, 0xCD, 0x12, 0x23, 0x44, 0x7A, 0x87, 0x3B,
 0xFC, 0xBF, 0xBA, 0xF0, 0x96, 0x2E, 0x01, 0x00
};

/* AC FXS RF14 Norway 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_NO[] =
{
  /* AC Profile */
 0x04, 0x00, 0xA8, 0x4C, 0x01, 0x49, 0xCA, 0xE4, 0x98, 0xAA, 0x41, 0x22,
 0xA1, 0xAA, 0x3B, 0x23, 0x2A, 0xD4, 0x23, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x2D, 0x01, 0xEA, 0x10, 0x22, 0xB8, 0x22, 0x3B, 0x23, 0xA1,
 0xAA, 0xBA, 0x32, 0xC4, 0x88, 0x25, 0xB0, 0x3B, 0x24, 0x2C, 0x2D, 0xA3,
 0xAC, 0xF4, 0xC4, 0xAB, 0xAD, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xBB, 0x52, 0xE2, 0xBD, 0x1B, 0xA1, 0x3B, 0x2A, 0xA3, 0x3A,
 0x4A, 0x26, 0x29, 0xF0, 0x96, 0x2E, 0x01, 0x00
};

/* AC FXS RF14 New Zealand 370R+620R//310nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_NZ[] =
{
  /* AC Profile */
 0xFF, 0x00, 0x0D, 0x4C, 0x01, 0x49, 0xCA, 0xFA, 0x98, 0xAB, 0x2A, 0xAB,
 0x22, 0x22, 0xA1, 0xD2, 0xB4, 0x4B, 0xBB, 0x9A, 0x2A, 0xB3, 0x46, 0x1F,
 0x01, 0x8A, 0x1D, 0x01, 0xBA, 0xD0, 0xA3, 0x4B, 0xBC, 0x3A, 0x3A, 0xAC,
 0x2C, 0xB6, 0x2B, 0xAE, 0x88, 0x4C, 0xC0, 0xCB, 0xA3, 0xAA, 0x2B, 0x2A,
 0xA3, 0x3A, 0x2C, 0x98, 0x15, 0x82, 0x29, 0xF1, 0x80, 0xCA, 0xF0, 0x50,
 0x00, 0x86, 0xB2, 0x5C, 0x22, 0x5C, 0x12, 0x42, 0xBA, 0x2B, 0xD3, 0x2A,
 0x36, 0xC4, 0x42, 0x50, 0x96, 0xD2, 0xA0, 0x00
};

/* AC FXS RF14 Portugal 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_PT[] =
{
  /* AC Profile */
 0xD5, 0x00, 0xEC, 0x4C, 0x01, 0x49, 0xCA, 0xE8, 0x98, 0x4A, 0xA1, 0x34,
 0xA2, 0xA2, 0xAC, 0x2C, 0xBB, 0x2B, 0xA4, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x9C, 0xD0, 0x2B, 0x20, 0x8F, 0x39, 0x2A, 0xBB, 0xA4, 0x24,
 0xB2, 0xBC, 0x4B, 0x26, 0x88, 0xA3, 0xC0, 0xC2, 0x27, 0xBA, 0x3E, 0xAC,
 0xAF, 0xB4, 0x26, 0x24, 0x3F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xC3, 0x5F, 0x32, 0x98, 0x03, 0xA1, 0xAA, 0x23, 0xB3, 0x2C,
 0x4B, 0x55, 0x25, 0x60, 0x96, 0xF2, 0xC1, 0x00
};

/* AC FXS RF14 Russia 150R+510R//47nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_RU[] =
{
  /* AC Profile */
 0x00, 0x00, 0x70, 0x4C, 0x01, 0x49, 0xCA, 0xED, 0x98, 0x98, 0x13, 0xB3,
 0xA4, 0xAB, 0xAC, 0xBB, 0xEC, 0x2B, 0x25, 0x9A, 0x3E, 0xAA, 0xA7, 0x9F,
 0x01, 0x8A, 0x2D, 0x01, 0xA8, 0x70, 0x2C, 0x2A, 0x7A, 0xC3, 0x23, 0x2D,
 0x22, 0xA6, 0xAB, 0x87, 0x88, 0x65, 0x40, 0xBC, 0xB6, 0x22, 0xAD, 0x2A,
 0xAF, 0x22, 0xA5, 0x32, 0xBE, 0x82, 0xF8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xE3, 0x5A, 0x22, 0xAC, 0x14, 0xB2, 0x34, 0x53, 0xAF, 0xDA,
 0xFA, 0x9F, 0xA9, 0xF0, 0x96, 0x2E, 0x01, 0x00
};

/* AC FXS RF14 Sweden 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_SE[] =
{
  /* AC Profile */
 0x0E, 0x00, 0x42, 0x4C, 0x01, 0x49, 0xCA, 0xF0, 0x98, 0x24, 0xF1, 0xB4,
 0xA2, 0xAB, 0x4B, 0x4B, 0xAA, 0xA7, 0xC3, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x2D, 0x01, 0xB3, 0x20, 0x5B, 0xB8, 0x24, 0xA2, 0x3C, 0xAC,
 0xAA, 0x27, 0x32, 0x9F, 0x88, 0x3A, 0xA0, 0x3A, 0x25, 0x3A, 0xAD, 0x22,
 0xAD, 0xBE, 0x25, 0xA5, 0x2E, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0x73, 0x52, 0x22, 0xD2, 0x12, 0xB1, 0x4A, 0x23, 0xC4, 0xC3,
 0x6A, 0x97, 0xA8, 0xF0, 0x96, 0x2E, 0x01, 0x00
};

/* AC FXS RF14 Turkey 270R+750R//150nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_TK[] =
{
  /* AC Profile */
 0xD5, 0x00, 0xEC, 0x4C, 0x01, 0x49, 0xCA, 0xE8, 0x98, 0x4A, 0xA1, 0x34,
 0xA2, 0xA2, 0xAC, 0x2C, 0xBB, 0x2B, 0xA4, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x9C, 0xD0, 0x2B, 0x20, 0x8F, 0x39, 0x2A, 0xBB, 0xA4, 0x24,
 0xB2, 0xBC, 0x4B, 0x26, 0x88, 0xA3, 0xC0, 0xC2, 0x27, 0xBA, 0x3E, 0xAC,
 0xAF, 0xB4, 0x26, 0x24, 0x3F, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0xC3, 0x5F, 0x32, 0x98, 0x03, 0xA1, 0xAA, 0x23, 0xB3, 0x2C,
 0x4B, 0x55, 0x25, 0x60, 0x96, 0xF2, 0xC1, 0x00
};

/* AC FXS RF14 South Africa 220R+820R//115nF Normal Coefficients */
const VpProfileDataType AC_FXS_RF14_ZA[] =
{
  /* AC Profile */
 0x6D, 0x00, 0xA7, 0x4C, 0x01, 0x49, 0xCA, 0xEA, 0x98, 0xFA, 0xE1, 0x23,
 0xA2, 0xEA, 0xCB, 0xB3, 0xAA, 0xA3, 0xB3, 0x9A, 0x98, 0x92, 0x97, 0x9F,
 0x01, 0x8A, 0x2E, 0x01, 0xB3, 0x20, 0xAB, 0xA8, 0xCC, 0x24, 0x22, 0x97,
 0xAF, 0x8F, 0xD3, 0xBF, 0x88, 0x3B, 0xB0, 0x33, 0x46, 0x2A, 0x2E, 0x33,
 0x4F, 0xAE, 0xA5, 0xB3, 0xBE, 0x82, 0xA8, 0x71, 0x80, 0xA9, 0xF0, 0x50,
 0x00, 0x86, 0x2A, 0x42, 0x22, 0x98, 0x02, 0x42, 0xA2, 0x43, 0xA6, 0xD8,
 0xFA, 0x8F, 0x29, 0xF0, 0x96, 0x2E, 0x01, 0x00
};

/************** DC Feed Parameters **************/

/* DC FXS Default -- Use for all countries unless country file exists - 22 mA  current feed */
const VpProfileDataType DC_FXS_VE880_ABS100V_DEF[] =
{
 /* DC Profile */
 0x00, 0x01, 0x01, 0x0B, 0x01, 0x08, 0xC2, 0x19, 0x86, 0xAA, 0x02, 0xC6,
 0x11, 0x04, 0x01
};

/************** Ring Signal Parameters **************/

/* Default Ringing 25Hz 50 Vrms Fixed - Use for all countries unless country file exists */
const VpProfileDataType RING_25HZ_VE880_ABS100V_DEF[] =
{
  /* Sine, 25 Hz, 1.41 CF, 70.00 Vpk, 0.00 Bias */
  /* Ringing Profile */
 0x00, 0x04, 0x01, 0x12, 0x00, 0x0E, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x44,
 0x3A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00
};

/* Austria Ringing 50Hz 50 Vrms Fixed */
const VpProfileDataType RING_VE880_ABS100V_AT[] =
{
  /* Sine, 50 Hz, 1.41 CF, 70.00 Vpk, 0.00 Bias */
  /* Ringing Profile */
 0x00, 0x04, 0x01, 0x12, 0x00, 0x0E, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x89,
 0x3A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00
};

/* Canada Ringing 20Hz 50 Vrms Fixed */
const VpProfileDataType RING_VE880_ABS100V_CA[] =
{
  /* Sine, 20 Hz, 1.41 CF, 70.00 Vpk, 0.00 Bias */
  /* Ringing Profile */
 0x00, 0x04, 0x01, 0x12, 0x00, 0x0E, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x37,
 0x3A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00
};

/* Finland Ringing 50Hz 50 Vrms Fixed */
const VpProfileDataType RING_VE880_ABS100V_FI[] =
{
  /* Sine, 50 Hz, 1.41 CF, 70.00 Vpk, 0.00 Bias */
  /* Ringing Profile */
 0x00, 0x04, 0x01, 0x12, 0x00, 0x0E, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x89,
 0x3A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00
};

/* France Ringing 50Hz 50 Vrms Fixed */
const VpProfileDataType RING_VE880_ABS100V_FR[] =
{
  /* Sine, 50 Hz, 1.41 CF, 70.00 Vpk, 0.00 Bias */
  /* Ringing Profile */
 0x00, 0x04, 0x01, 0x12, 0x00, 0x0E, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x89,
 0x3A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00
};

/* Hong Kong SAR Ringing 20Hz 50 Vrms Fixed */
const VpProfileDataType RING_VE880_ABS100V_HK[] =
{
  /* Sine, 20 Hz, 1.41 CF, 70.00 Vpk, 0.00 Bias */
  /* Ringing Profile */
 0x00, 0x04, 0x01, 0x12, 0x00, 0x0E, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x37,
 0x3A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00
};

/* Japan Ringing 16Hz 50 Vrms Fixed */
const VpProfileDataType RING_VE880_ABS100V_JP[] =
{
  /* Sine, 16 Hz, 1.41 CF, 70.00 Vpk, 0.00 Bias */
  /* Ringing Profile */
 0x00, 0x04, 0x01, 0x12, 0x00, 0x0E, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x2C,
 0x3A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00
};

/* Korea Ringing 20Hz 50 Vrms Fixed */
const VpProfileDataType RING_VE880_ABS100V_KR[] =
{
  /* Sine, 20 Hz, 1.41 CF, 70.00 Vpk, 0.00 Bias */
  /* Ringing Profile */
 0x00, 0x04, 0x01, 0x12, 0x00, 0x0E, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x37,
 0x3A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00
};

/* Singapore Ringing 24Hz 50 Vrms Fixed */
const VpProfileDataType RING_VE880_ABS100V_SG[] =
{
  /* Sine, 24 Hz, 1.41 CF, 70.00 Vpk, 0.00 Bias */
  /* Ringing Profile */
 0x00, 0x04, 0x01, 0x12, 0x00, 0x0E, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x42,
 0x3A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00
};

/* Taiwan Ringing 20Hz 50 Vrms Fixed */
const VpProfileDataType RING_VE880_ABS100V_TW[] =
{
  /* Sine, 20 Hz, 1.41 CF, 70.00 Vpk, 0.00 Bias */
  /* Ringing Profile */
 0x00, 0x04, 0x01, 0x12, 0x00, 0x0E, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x37,
 0x3A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00
};

/* USA Ringing 20Hz 50 Vrms Fixed */
const VpProfileDataType RING_VE880_ABS100V_US[] =
{
  /* Sine, 20 Hz, 1.41 CF, 70.00 Vpk, 0.00 Bias */
  /* Ringing Profile */
 0x00, 0x04, 0x01, 0x12, 0x00, 0x0E, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x37,
 0x3A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00
};

/************** Call Progress Tones **************/

/************** Cadence Definitions **************/

/************** Caller ID **************/

/************** Metering Profile **************/

/* end of file VE880_ABS100V_LITE_NB_PCM_Rev2_8.c */