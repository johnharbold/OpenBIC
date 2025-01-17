/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PLAT_SENSOR_TABLE_H
#define PLAT_SENSOR_TABLE_H

#include <stdint.h>
#include "sensor.h"

#define INLET_TEP75_ADDR (0x92 >> 1)
#define OUTLET_TEP75_ADDR (0x98 >> 1)
#define FIO_ADDR (0x90 >> 1)
#define HSC_ADM1278_ADDR (0x22 >> 1)
#define HSC_MP5990_ADDR (0x16 >> 1)
#define PVCCIN_ADDR (0xC0 >> 1)
#define EHV_ADDR (0xC0 >> 1)
#define FIVRA_ADDR (0xDC >> 1)
#define INF_ADDR (0xDC >> 1)
#define PVCCD0_ADDR (0xD4 >> 1)
#define PVCCD1_ADDR (0xD4 >> 1)
#define CPU_PECI_ADDR 0x30
#define SSD0_ADDR (0xD4 >> 1)
#define SSD0_OFFSET 0x00

#define TMP75_TEMP_OFFSET 0x0
#define VR_TEMP_OFFSET 0x8D
#define VR_VOL_OFFSET 0x8B
#define VR_CUR_OFFSET 0x8C
#define VR_PWR_OFFSET 0x96

enum SENSOR_NUM {

	SENSOR_NUM_MB_INLET_TEMP = 0x01,
	SENSOR_NUM_MB_OUTLET_TEMP,
	SENSOR_NUM_FIO_TEMP,
	SENSOR_NUM_CPU_TEMP,
	SENSOR_NUM_DIMM_A_TEMP,
	SENSOR_NUM_DIMM_B_TEMP,
	SENSOR_NUM_DIMM_C_TEMP,
	SENSOR_NUM_DIMM_D_TEMP,
	SENSOR_NUM_DIMM_E_TEMP,
	SENSOR_NUM_DIMM_F_TEMP,
	SENSOR_NUM_DIMM_G_TEMP,
	SENSOR_NUM_DIMM_H_TEMP,
	SENSOR_NUM_SSD0_TEMP,
	SENSOR_NUM_HSC_TEMP,
	SENSOR_NUM_VCCIN_SPS_TEMP,
	SENSOR_NUM_EHV_SPS_TEMP,
	SENSOR_NUM_FIVRA_SPS_TEMP,
	SENSOR_NUM_VCCINF_SPS_TEMP,
	SENSOR_NUM_VCCD0_SPS_TEMP,
	SENSOR_NUM_VCCD1_SPS_TEMP,
	SENSOR_NUM_SOC_THERM_MARGIN_TEMP,
	SENSOR_NUM_CPU_TJMAX_TEMP,

	SENSOR_NUM_P12V_STBY_VOL,
	SENSOR_NUM_P3V_BAT_VOL,
	SENSOR_NUM_P3V3_STBY_VOL,
	SENSOR_NUM_P1V8_STBY_VOL,
	SENSOR_NUM_P1V05_VOL,
	SENSOR_NUM_HSC_INPUT_VOL,
	SENSOR_NUM_VCCIN_VR_VOL,
	SENSOR_NUM_VCCINF_VR_VOL,
	SENSOR_NUM_FIVRA_VR_VOL,
	SENSOR_NUM_VCCDO_VR_VOL,
	SENSOR_NUM_VCCD1_VR_VOL,
	SENSOR_NUM_EHV_VR_VOL,
	SENSOR_NUM_PVNN_MAIN_VOL,
	SENSOR_NUM_P5V_STBY_VOL,
	SENSOR_NUM_P12V_DIMM_VOL,
	SENSOR_NUM_P1V2_STBY_VOL,
	SENSOR_NUM_P3V3_M2_VOL,

	SENSOR_NUM_1OU_HSC_OUTPUT_CUR,
	SENSOR_NUM_2OU_HSC_OUTPUT_CUR,
	SENSOR_NUM_VCCIN_VR_CUR,
	SENSOR_NUM_EHV_VR_CUR,
	SENSOR_NUM_FIVRA_VR_CUR,
	SENSOR_NUM_VCCINF_VR_CUR,
	SENSOR_NUM_VCCD0_VR_CUR,
	SENSOR_NUM_VCCD1_VR_CUR,

	SENSOR_NUM_1OU_HSC_INPUT_PWR,
	SENSOR_NUM_2OU_HSC_INPUT_PWR,
	SENSOR_NUM_VCCIN_VR_PWR,
	SENSOR_NUM_EHV_VR_PWR,
	SENSOR_NUM_FIVRA_VR_PWR,
	SENSOR_NUM_VCCINF_VR_PWR,
	SENSOR_NUM_VCCD0_VR_PWR,
	SENSOR_NUM_VCCD1_VR_PWR,
	SENSOR_NUM_DIMM_A_PMIC_PWR,
	SENSOR_NUM_DIMM_B_PMIC_PWR,
	SENSOR_NUM_DIMM_C_PMIC_PWR,
	SENSOR_NUM_DIMM_D_PMIC_PWR,
	SENSOR_NUM_DIMM_E_PMIC_PWR,
	SENSOR_NUM_DIMM_F_PMIC_PWR,
	SENSOR_NUM_DIMM_G_PMIC_PWR,
	SENSOR_NUM_DIMM_H_PMIC_PWR,

};

#endif
