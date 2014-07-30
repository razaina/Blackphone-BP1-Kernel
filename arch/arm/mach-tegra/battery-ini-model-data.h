/*
 * battery-ini-model-data.h: Battery INI model data for different platforms.
 *
 * Copyright (c) 2013, NVIDIA Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _MACH_TEGRA_BATTERY_INI_MODEL_DATA_H
#define _MACH_TEGRA_BATTERY_INI_MODEL_DATA_H

#include <linux/max17048_battery.h>
#include <linux/power/max17042_battery.h>

/*
 * Battery model data for YOKU 4100mA for MAX17048 for Macallan.
 * System shutdown voltage: 3.0V
 * INI Files: 1283683
 */
static struct max17048_battery_model __maybe_unused
			macallan_yoku_4100mA_max17048_battery = {
	.rcomp		= 57,
	.soccheck_A	= 119,
	.soccheck_B	= 121,
	.bits		= 18,
	.alert_threshold = 0x00,
	.one_percent_alerts = 0x40,
	.alert_on_reset = 0x40,
	.rcomp_seg	= 0x0200,
	.hibernate	= 0x3080,
	.vreset		= 0xA096,
	.valert		= 0x00ff,
	.ocvtest	= 55952,
	.data_tbl = {
		0x98, 0x80, 0xB3, 0x50, 0xB7, 0x90, 0xB9, 0x00,
		0xBA, 0x70, 0xBC, 0x10, 0xBC, 0x50, 0xBC, 0xA0,
		0xBD, 0x20, 0xBE, 0x30, 0xBF, 0x40, 0xC2, 0xF0,
		0xC4, 0x20, 0xC7, 0xE0, 0xCB, 0xF0, 0xD0, 0x90,
		0x00, 0x40, 0x06, 0x70, 0x0E, 0x50, 0x12, 0x00,
		0x18, 0xD0, 0x33, 0x10, 0x31, 0x40, 0x35, 0xD0,
		0x18, 0xD0, 0x19, 0x00, 0x0B, 0xF0, 0x0C, 0x10,
		0x0D, 0x10, 0x07, 0x90, 0x08, 0x00, 0x08, 0x00,
	},
};

/*
 * Battery model data for YOKU 3900mA for MAX17048 for Macallan.
 * System shutdown voltage: 3.0V
 * INI Files: 1283683
 */
static struct max17048_battery_model __maybe_unused
			macallan_yoku_3900mA_max17048_battery = {
	.rcomp		= 102,
	.soccheck_A	= 237,
	.soccheck_B	= 239,
	.bits		= 19,
	.alert_threshold = 0x00,
	.one_percent_alerts = 0x40,
	.alert_on_reset = 0x40,
	.rcomp_seg	= 0x0080,
	.hibernate	= 0x3080,
	.vreset		= 0xA096,
	.valert		= 0xD4AA,
	.ocvtest	= 55952,
	.data_tbl = {
		0x98, 0x60, 0xB0, 0xC0, 0xB7, 0xB0, 0xBA, 0x10,
		0xBB, 0xE0, 0xBC, 0x10, 0xBC, 0xC0, 0xBD, 0xF0,
		0xBF, 0x00, 0xC0, 0x10, 0xC1, 0xF0, 0xC4, 0x00,
		0xC6, 0x70, 0xC8, 0xE0, 0xCA, 0x80, 0xD0, 0x90,
		0x00, 0x80, 0x06, 0xA0, 0x21, 0x40, 0x22, 0x80,
		0x49, 0x90, 0x6C, 0x80, 0x45, 0xA0, 0x2D, 0xE0,
		0x2D, 0xC0, 0x17, 0x80, 0x1A, 0x00, 0x18, 0xA0,
		0x18, 0x20, 0x15, 0x40, 0x0E, 0xA0, 0x0E, 0xA0,
	},
};

/*
 * Battery model data for YOKU 2000mA for MAX17042 for Pluto.
 * System shutdown voltage: 2.9V
 * INI Files: 1264825
 */
static struct max17042_config_data __maybe_unused
			pluto_yoku_2000mA_max17042_battery = {
	.valrt_thresh = 0xff00,
	.talrt_thresh = 0xff00,
	.soc_alrt_thresh = 0xff00,
	.shdntimer = 0xe000,
	.design_cap = 0x1085,
	.at_rate = 0x0000,
	.tgain = 0xBC94,
	.toff = 0x84BA,
	.vempty = 0x93DA,
	.qrtbl00 = 0x2184,
	.qrtbl10 = 0x1300,
	.qrtbl20 = 0x0c00,
	.qrtbl30 = 0x0880,
	.full_soc_thresh = 0x5A00,
	.rcomp0 = 0x0052,
	.tcompc0 = 0x1F2D,
	.ichgt_term = 0x0140,
	.temp_nom = 0x1400,
	.temp_lim = 0x2305,
	.filter_cfg = 0x87A4,
	.config = 0x2210,
	.learn_cfg = 0x2606,
	.misc_cfg = 0x0810,
	.fullcap =  0x1085,
	.fullcapnom = 0x1085,
	.lavg_empty = 0x1000,
	.dqacc = 0x01f4,
	.dpacc = 0x3200,
	.fctc = 0x05e0,
	.kempty0 = 0x0600,
	.cell_technology = POWER_SUPPLY_TECHNOLOGY_LION,
	.cell_char_tbl = {
		/* Data to be written from 0x80h */
		0x9380, 0xAB70, 0xAFA0, 0xB3E0, 0xB790, 0xBB40,
		0xBBD0, 0xBC70, 0xBD90, 0xBE30, 0xC0F0, 0xC380,
		0xC710, 0xCA90, 0xCF70, 0xD480,
		/* Data to be written from 0x90h */
		0x00B0, 0x0610, 0x0600, 0x06F0, 0x0700, 0x2410,
		0x2040, 0x2460, 0x1CE0, 0x09F0, 0x0AB0, 0x08E0,
		0x0880, 0x06F0, 0x05D0, 0x05D0,
		/* Data to be written from 0xA0h */
		0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100,
		0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100,
		0x0100, 0x0100, 0x0100, 0x0100,
	},
};

/*
 * Battery model data for YOKU 2000mA for MAX17048 for ceres.
 * System shutdown voltage: 3.1V
 * INI Files: 1178638
 */
static struct max17048_battery_model __maybe_unused
			ceres_yoku_2000_ssv_3_1_max17048_battery = {
	.rcomp		= 71,
	.soccheck_A	= 223,
	.soccheck_B	= 225,
	.bits		= 19,
	.alert_threshold= 0x00,
	.one_percent_alerts = 0x40,
	.alert_on_reset = 0x40,
	.rcomp_seg	= 0x0080,
	.hibernate	= 0x3080,
	.vreset		= 0x8696,
	.valert		= 0xD4AA,
	.ocvtest	= 57040,
	.data_tbl = {
		0xA5, 0xF0, 0xAF, 0xB0, 0xB6, 0x60, 0xBA, 0xE0,
		0xBC, 0x00, 0xBC, 0x60, 0xBC, 0xB0, 0xBD, 0x60,
		0xBE, 0x20, 0xC1, 0x50, 0xC4, 0x40, 0xC7, 0x00,
		0xC9, 0xF0, 0xCD, 0x70, 0xD0, 0xF0, 0xD4, 0xD0,
		0x06, 0x60, 0x0E, 0x20, 0x0E, 0x00, 0x32, 0x00,
		0x6C, 0x80, 0x79, 0x60, 0x1D, 0x40, 0x4D, 0x20,
		0x13, 0xC0, 0x15, 0x60, 0x11, 0x80, 0x13, 0x80,
		0x0D, 0xE0, 0x0D, 0xE0, 0x09, 0xE0, 0x09, 0xE0,
	},
};

/*
 * Battery model data for Tinno s8515 2000mA for MAX17048 for Tinno s8515.
 * System shutdown voltage: 3.3V
 * INI Files: 120413
 */
static struct max17048_battery_model __maybe_unused
			tinno_s8515_2000_ssv_3_3_max17048_battery = {
	.rcomp		= 74,
	.soccheck_A	= 234,
	.soccheck_B	= 236,
	.bits		= 19,
	.alert_threshold = 0x00,
	.one_percent_alerts = 0x40,
	.alert_on_reset = 0x40,
	.rcomp_seg	= 0x0080,
	.hibernate	= 0x3080,
	.vreset		= 0x8696,
	.valert		= 0xD4AA,
	.ocvtest	= 55808,
	.data_tbl = {
		0xAA, 0x70, 0xB4, 0x50, 0xB7, 0x90, 0xBA, 0xD0,
		0xBB, 0xB0, 0xBB, 0xF0, 0xBC, 0x40, 0xBC, 0xD0,
		0xBD, 0x20, 0xBD, 0x70, 0xBF, 0x80, 0xC0, 0xF0,
		0xC4, 0xD0, 0xC7, 0x30, 0xC9, 0x90, 0xD0, 0x00,
		0x07, 0xD0, 0x10, 0x00, 0x0F, 0x10, 0x2D, 0x10,
		0x87, 0x00, 0x6C, 0x00, 0x6F, 0x10, 0x72, 0x10,
		0x70, 0xF0, 0x18, 0xF0, 0x1B, 0xD0, 0x18, 0x20,
		0x16, 0x50, 0x16, 0x50, 0x0E, 0x40, 0x0E, 0x40,
	},
};

/*
 * Battery model data for Tinno s8515 2000mA for MAX17048 for Tinno s8515.
 * System shutdown voltage: 3.55V
 * INI Files: 120413
 */
static struct max17048_battery_model __maybe_unused
			tinno_s8515_2000_ssv_3_55_max17048_battery = {
	.rcomp		= 115,
	.soccheck_A	= 116,
	.soccheck_B	= 118,
	.bits		= 18,
	.alert_threshold = 0x00,
	.one_percent_alerts = 0x40,
	.alert_on_reset = 0x40,
	.rcomp_seg	= 0x0080,
	.hibernate	= 0x3080,
	.vreset		= 0x8696,
	.valert		= 0xD4AA,
	.ocvtest	= 56016,
	.data_tbl = {
		0xB0, 0x20, 0xB5, 0xF0, 0xBA, 0xD0, 0xBB, 0x40,
		0xBB, 0xB0, 0xBC, 0x30, 0xBC, 0xB0, 0xBD, 0x50,
		0xBE, 0x50, 0xBF, 0x60, 0xC1, 0x30, 0xC3, 0x60,
		0xC5, 0xB0, 0xC7, 0xC0, 0xCB, 0xB0, 0xD0, 0xD0,
		0x03, 0xB0, 0x04, 0x70, 0x3E, 0xF0, 0x39, 0xF0,
		0x3A, 0xF0, 0x3A, 0x70, 0x2B, 0x40, 0x14, 0x70,
		0x13, 0x30, 0x06, 0xF0, 0x11, 0xC0, 0x0C, 0x10,
		0x0D, 0x80, 0x08, 0x70, 0x07, 0x00, 0x07, 0x00
	},
};

/*
 * Battery model data for Tinno s9321 2350mA 4.2V for MAX17048 for Tinno s9321.
 * System shutdown voltage: 3.50V
 * INI Files: 120413
 */
static struct max17048_battery_model __maybe_unused
			tinno_s9321_2350_ssv_3_50_max17048_battery = {
	.rcomp		= 129,
	.soccheck_A	= 111,
	.soccheck_B	= 113,
	.bits		= 18,
	.alert_threshold = 0x00,
	.one_percent_alerts = 0x40,
	.alert_on_reset = 0x40,
	.rcomp_seg	= 0x0080,
	.hibernate	= 0x3080,
	.vreset		= 0x8696,
	.valert		= 0xA0E6,	//A0 -> 20mV x A0 ~= 3200 //E6A0
	.ocvtest	= 58048,
	.data_tbl = {
	    0xAE, 0x10, 0xB7, 0x20, 0xB8, 0x80, 0xBA, 0x10,
	    0xBB, 0xA0, 0xBC, 0x70, 0xBD, 0x90, 0xBE, 0x90,
	    0xC0, 0xE0, 0xC1, 0x70, 0xC4, 0x30, 0xC7, 0x50,
	    0xCC, 0x40, 0xCE, 0x70, 0xD3, 0x30, 0xD8, 0xC0,
	    0x01, 0x00, 0x11, 0x00, 0x11, 0x10, 0x19, 0x00,
	    0x17, 0x00, 0x18, 0x80, 0x1D, 0x10, 0x0F, 0xF0,
	    0x0F, 0xF0, 0x0A, 0xF0, 0x07, 0xF0, 0x07, 0xF0,
	    0x09, 0xD0, 0x07, 0xF0, 0x04, 0xF0, 0x04, 0xF0
	},
};
#endif
