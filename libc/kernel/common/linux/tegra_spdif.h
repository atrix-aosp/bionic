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
#ifndef _TEGRA_SPDIF_H
#define _TEGRA_SPDIF_H

#include <linux/ioctl.h>

#define TEGRA_SPDIF_MAGIC 's'

struct tegra_audio_buf_config {
 unsigned size;
 unsigned threshold;
 unsigned chunk;
};

#define TEGRA_AUDIO_OUT_SET_BUF_CONFIG _IOW(TEGRA_SPDIF_MAGIC, 0,   const struct tegra_audio_buf_config *)
#define TEGRA_AUDIO_OUT_GET_BUF_CONFIG _IOR(TEGRA_SPDIF_MAGIC, 1,   struct tegra_audio_buf_config *)

#define TEGRA_AUDIO_OUT_GET_ERROR_COUNT _IOR(TEGRA_SPDIF_MAGIC, 2,   unsigned *)

struct tegra_audio_out_preload {
 void *data;
 size_t len;
 size_t len_written;
};

#define TEGRA_AUDIO_OUT_PRELOAD_FIFO _IOWR(TEGRA_SPDIF_MAGIC, 3,   struct tegra_audio_out_preload *)

#endif
