/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _TEGRA_AUDIO_H
#define _TEGRA_AUDIO_H

#include <linux/ioctl.h>

#define TEGRA_AUDIO_MAGIC 't'

#define TEGRA_AUDIO_IN_START _IO(TEGRA_AUDIO_MAGIC, 0)
#define TEGRA_AUDIO_IN_STOP _IO(TEGRA_AUDIO_MAGIC, 1)

struct tegra_audio_in_config {
 int rate;
 int stereo;
};

enum tegra_audio_device {
 TEGRA_AUDIO_DEVICE_NONE = 0x00000000,
 TEGRA_AUDIO_DEVICE_OUT_HEADPHONE = 0x00000001,
 TEGRA_AUDIO_DEVICE_OUT_HEADSET = 0x00000002,
 TEGRA_AUDIO_DEVICE_OUT_SPEAKER = 0x00000004,
 TEGRA_AUDIO_DEVICE_OUT_EAR_SPEAKER = 0x00000008,
 TEGRA_AUDIO_DEVICE_OUT_LINE = 0x00000010,
 TEGRA_AUDIO_DEVICE_OUT_BT_SCO = 0x00000020,
 TEGRA_AUDIO_DEVICE_OUT_AUX_DIGITAL = 0x00000040,
 TEGRA_AUDIO_DEVICE_OUT_RADIO = 0x00000080,
 TEGRA_AUDIO_DEVICE_OUT_ALL = TEGRA_AUDIO_DEVICE_OUT_HEADPHONE |
                TEGRA_AUDIO_DEVICE_OUT_HEADSET |
                TEGRA_AUDIO_DEVICE_OUT_SPEAKER |
                TEGRA_AUDIO_DEVICE_OUT_EAR_SPEAKER |
                TEGRA_AUDIO_DEVICE_OUT_LINE |
                TEGRA_AUDIO_DEVICE_OUT_BT_SCO |
                TEGRA_AUDIO_DEVICE_OUT_AUX_DIGITAL |
                TEGRA_AUDIO_DEVICE_OUT_RADIO,
 TEGRA_AUDIO_DEVICE_IN_BUILTIN_MIC = 0x00010000,
 TEGRA_AUDIO_DEVICE_IN_MIC = 0x00020000,
 TEGRA_AUDIO_DEVICE_IN_HEADSET = 0x00040000,
 TEGRA_AUDIO_DEVICE_IN_BACK_MIC = 0x00080000,
 TEGRA_AUDIO_DEVICE_IN_LINE = 0x00100000,
 TEGRA_AUDIO_DEVICE_IN_BT_SCO = 0x00200000,
 TEGRA_AUDIO_DEVICE_IN_AUX_DIGITAL = 0x00400000,
 TEGRA_AUDIO_DEVICE_IN_PHONE = 0x00800000,
 TEGRA_AUDIO_DEVICE_IN_RADIO = 0x01000000,
 TEGRA_AUDIO_DEVICE_IN_ALL = TEGRA_AUDIO_DEVICE_IN_BUILTIN_MIC |
                TEGRA_AUDIO_DEVICE_IN_MIC |
                TEGRA_AUDIO_DEVICE_IN_HEADSET |
                TEGRA_AUDIO_DEVICE_IN_BACK_MIC |
                TEGRA_AUDIO_DEVICE_IN_LINE |
                TEGRA_AUDIO_DEVICE_IN_BT_SCO |
                TEGRA_AUDIO_DEVICE_IN_AUX_DIGITAL |
                TEGRA_AUDIO_DEVICE_IN_PHONE |
                TEGRA_AUDIO_DEVICE_IN_RADIO,
 TEGRA_AUDIO_DEVICE_MAX = 0x7FFFFFFF
};

#define TEGRA_AUDIO_IN_SET_CONFIG _IOW(TEGRA_AUDIO_MAGIC, 2,   const struct tegra_audio_in_config *)
#define TEGRA_AUDIO_IN_GET_CONFIG _IOR(TEGRA_AUDIO_MAGIC, 3,   struct tegra_audio_in_config *)

#define TEGRA_AUDIO_IN_SET_NUM_BUFS _IOW(TEGRA_AUDIO_MAGIC, 4,   const unsigned int *)
#define TEGRA_AUDIO_IN_GET_NUM_BUFS _IOW(TEGRA_AUDIO_MAGIC, 5,   unsigned int *)
#define TEGRA_AUDIO_OUT_SET_NUM_BUFS _IOW(TEGRA_AUDIO_MAGIC, 6,   const unsigned int *)
#define TEGRA_AUDIO_OUT_GET_NUM_BUFS _IOW(TEGRA_AUDIO_MAGIC, 7,   unsigned int *)

#define TEGRA_AUDIO_OUT_FLUSH _IO(TEGRA_AUDIO_MAGIC, 10)

#define TEGRA_AUDIO_BIT_FORMAT_DEFAULT 0
#define TEGRA_AUDIO_BIT_FORMAT_DSP 1
#define TEGRA_AUDIO_SET_BIT_FORMAT _IOW(TEGRA_AUDIO_MAGIC, 11,   const unsigned int *)
#define TEGRA_AUDIO_GET_BIT_FORMAT _IOR(TEGRA_AUDIO_MAGIC, 12,   unsigned int *)

#endif
