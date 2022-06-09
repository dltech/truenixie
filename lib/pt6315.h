/*
 * Part of STM32 UFD clocks.
 * PT6315 UFD driver reg definitions and functions.
 *
 * Copyright 2021 Mikhail Belkin <dltech174@gmail.com>
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

/** Command 1 **/
#define PT_CMD1_PREFIX  0x00
// Determine the number of segments and grids to be used.
#define MODE_4DIGITS    0x00
#define MODE_5DIGITS    0x01
#define MODE_6DIGITS    0x02
#define MODE_7DIGITS    0x03
#define MODE_8DIGITS    0x04
#define MODE_9DIGITS    0x05
#define MODE_10DIGITS   0x06
#define MODE_11DIGITS   0x07
#define MODE_12DIGITS   0x08

/** Command 2 **/
#define PT_CMD2_PREFIX  0x40
// Mode settings
#define MODE_NORMAL     0x00
#define MODE_TEST       0x08
// Address increment mode settings
#define INC_ADDRESS     0x00
#define FIXED_ADDRESS   0x04
// Data write & read mode settings
#define WRITE_DISPLAY   0x00
#define WRITE_LED_PORT  0x01
#define READ_KEY_DATA   0x02

/** Command 3 **/
#define PT_CMD3_PREFIX  0xc0
// Address 0x00 - 0x23

/** Command 4 **/
#define PT_CMD4_PREFIX  0x80
// Display settings
#define DISPLAY_OFF     0x00
#define DISPLAY_ON      0x08
// Dimming setings
#define PW_1_16         0x00
#define PW_2_16         0x01
#define PW_4_16         0x02
#define PW_10_16        0x03
#define PW_11_16        0x04
#define PW_12_16        0x05
#define PW_13_16        0x06
#define PW_14_16        0x07
