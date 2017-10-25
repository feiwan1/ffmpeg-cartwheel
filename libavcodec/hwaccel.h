/*
 * This file is part of Libav.
 *
 * Libav is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * Libav is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Libav; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef AVCODEC_HWACCEL_H
#define AVCODEC_HWACCEL_H

#include "avcodec.h"


#define HWACCEL_CAP_ASYNC_SAFE      (1 << 0)


typedef struct AVCodecHWConfigInternal {
    /**
     * This is the structure which will be returned to the user by
     * avcodec_get_hw_config().
     */
    AVCodecHWConfig public;
    /**
     * If this configuration uses a hwaccel, a pointer to it.
     * If not, NULL.
     */
    const AVHWAccel *hwaccel;
} AVCodecHWConfigInternal;


#endif /* AVCODEC_HWACCEL_H */
