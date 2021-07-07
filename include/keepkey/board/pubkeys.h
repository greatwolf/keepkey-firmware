/*
 * This file is part of the TREZOR project.
 *
 * Copyright (C) 2014 Pavol Rusnak <stick@satoshilabs.com>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KEEPKEY_BOARD_PUBKEYS_H
#define KEEPKEY_BOARD_PUBKEYS_H

#include <inttypes.h>

#define PUBKEYS 5
#define BLK_v2_0_0_PUBKEYS 5
#define PUBKEY_LENGTH 65
#define SIGNATURES 3

#define SIG_OK 0x5A3CA5C3
#define KEY_EXPIRED 0x00000001
#define SIG_FAIL 0x00000000

static const uint8_t pubkey[PUBKEYS][PUBKEY_LENGTH] = {
    {/* Public key 1 */
     0x04, 0xa3, 0x3c, 0xec, 0x36, 0xd6, 0xd0, 0x11, 0xaf, 0x09, 0xe0,
     0xc4, 0x98, 0xd1, 0x7c, 0x3b, 0xa7, 0xab, 0x90, 0x7a, 0xbf, 0xbb,
     0x64, 0xca, 0xba, 0x16, 0xad, 0x90, 0x77, 0xca, 0xac, 0xd3, 0xe1,
     0x98, 0xa3, 0x23, 0x62, 0xc3, 0x2d, 0x0e, 0xf0, 0xa7, 0x26, 0x92,
     0x59, 0xab, 0xbb, 0xcd, 0x8a, 0x68, 0x8a, 0x0c, 0x8f, 0x54, 0xa6,
     0xdb, 0xc4, 0x05, 0x45, 0x95, 0x66, 0xcd, 0x65, 0x14, 0x1d},
    {/* Public key 2 */
     0x04, 0xab, 0x29, 0x1f, 0x6b, 0xd3, 0x3d, 0x0e, 0x39, 0x74, 0xf2,
     0x7e, 0x50, 0x07, 0x0b, 0xe9, 0x33, 0x69, 0x5a, 0x0f, 0xab, 0x7b,
     0x8b, 0x36, 0x54, 0xe7, 0xc9, 0xdc, 0xe7, 0x4f, 0x7f, 0x98, 0xfd,
     0x73, 0x9b, 0x1e, 0xd8, 0x6e, 0xb0, 0xbe, 0x26, 0xf0, 0x26, 0xe4,
     0xdc, 0x65, 0x19, 0xfd, 0x28, 0x84, 0x95, 0x5f, 0xa1, 0x74, 0xf8,
     0xa7, 0x83, 0xfe, 0x45, 0x5a, 0xc4, 0x3f, 0x94, 0x4c, 0x70},
    {/* Public key 3 */
     0x04, 0xa9, 0xc2, 0x9f, 0x4e, 0x05, 0x3b, 0x35, 0xff, 0xd3, 0xb9,
     0xa3, 0x7b, 0x07, 0x31, 0x88, 0xb6, 0x24, 0xc0, 0x7c, 0x3a, 0x92,
     0x62, 0x2c, 0x13, 0x1e, 0xdf, 0x1a, 0x2b, 0x2c, 0x71, 0x22, 0x16,
     0xa8, 0xc0, 0x6c, 0x9d, 0xdf, 0xdc, 0xaa, 0x39, 0xb8, 0x1d, 0x9a,
     0x86, 0xf0, 0x45, 0x94, 0x80, 0xb0, 0x27, 0x7e, 0xab, 0x0e, 0x30,
     0xa3, 0x4f, 0x1d, 0x26, 0xb3, 0x26, 0xb8, 0x99, 0x5a, 0x33},
    {/* Public key 4 */
     0x04, 0xf2, 0x28, 0x44, 0x8e, 0xaf, 0x05, 0x17, 0x1c, 0xcb, 0x68,
     0xa0, 0x4a, 0x07, 0x24, 0xac, 0x58, 0x6b, 0x84, 0x6c, 0x54, 0xc5,
     0xfd, 0x0a, 0x52, 0x6f, 0x9d, 0x7c, 0x33, 0x96, 0xc9, 0x8d, 0xd4,
     0x7a, 0xef, 0x6b, 0x2f, 0xaf, 0x47, 0xb5, 0x4f, 0xfa, 0x8c, 0x28,
     0x61, 0xc5, 0x49, 0x20, 0xce, 0x6c, 0x2a, 0xa5, 0x60, 0x7c, 0x49,
     0x68, 0x69, 0x02, 0x37, 0x24, 0xdb, 0x28, 0x54, 0x95, 0xc6},
    {/* Public key 5 */
     0x04, 0x18, 0xa9, 0x0b, 0x53, 0x6e, 0x9f, 0xfb, 0x0e, 0xc3, 0x20,
     0x29, 0x3c, 0x33, 0x75, 0x4a, 0xf8, 0x9b, 0x14, 0x54, 0x75, 0xc4,
     0xd9, 0x21, 0xf8, 0x18, 0xe2, 0x06, 0x2c, 0x92, 0xb0, 0x1b, 0xe5,
     0x26, 0x04, 0x7c, 0xcf, 0xa0, 0x42, 0xb4, 0x71, 0x1f, 0xb5, 0x60,
     0x3f, 0xe6, 0xbd, 0x79, 0x80, 0x69, 0x31, 0x00, 0xb7, 0x1e, 0xe7,
     0x66, 0xd8, 0x61, 0x16, 0xa3, 0x69, 0x48, 0x73, 0xf3, 0x14}};

extern volatile const uint8_t valid_pubkey[PUBKEYS];

#endif
