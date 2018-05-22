/******************************************************************************
 *                                                                            *
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *****************************************************************************
 * Originally developed and contributed by Ittiam Systems Pvt. Ltd, Bangalore
*/
#ifndef IXHEAACD_AAC_CONFIG_H
#define IXHEAACD_AAC_CONFIG_H

#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_PCM_WDSZ 0x0000
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_SAMP_FREQ 0x0001
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_NUM_CHANNELS 0x0002
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_CHANNEL_MASK 0x0003
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_CHANNEL_MODE 0x0004
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_SBR_MODE 0x0005

#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_DOWNMIX 0x0006
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_OUT08KHZ 0x0007
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_OUT16KHZ 0x0008
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_TOSTEREO 0x0009
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_DSAMPLE 0x000A
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_FRAMEOK 0x000B
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_ISMP4 0x000C
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_MAX_CHANNEL 0x000D
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_COUP_CHANNEL 0x000E
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_DOWNMIX_STEREO 0x000F
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_DISABLE_SYNC 0x0010
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_AUTO_SBR_UPSAMPLE 0x0011
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_ISLOAS 0x0012
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_DRC_ENABLE 0x0013
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_DRC_CUT 0x0014
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_DRC_BOOST 0x0015
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_DRC_TARGET_LEVEL 0x0016
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_DRC_HEAVY_COMP 0x0017
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_FRAMESIZE 0x0018
#define IA_ENHAACPLUS_DEC_CONFIG_PARAM_ELD_SBR_PRESENT 0x0019

#ifdef ENABLE_DRC
#define IA_ENHAACPLUS_DEC_CONFIG_EXT_ELE_PTR 0x001A
#define IA_ENHAACPLUS_DEC_CONFIG_EXT_ELE_BUF_SIZES 0x001B
#define IA_ENHAACPLUS_DEC_CONFIG_NUM_ELE 0x001C
#define IA_ENHAACPLUS_DEC_CONFIG_NUM_CONFIG_EXT 0x001D
#define IA_ENHAACPLUS_DEC_CONFIG_GAIN_PAYLOAD_LEN 0x001E
#define IA_ENHAACPLUS_DEC_CONFIG_GAIN_PAYLOAD_BUF 0x001F
#endif

#endif /* IXHEAACD_AAC_CONFIG_H */