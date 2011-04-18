/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _TEGRA_MEDIASERVER_H
#define _TEGRA_MEDIASERVER_H
#include <linux/ioctl.h>
#define TEGRA_MEDIASERVER_MAGIC 'm'
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TEGRA_MEDIASERVER_IOCTL_ALLOC   _IOWR(TEGRA_MEDIASERVER_MAGIC, 0x40,   union tegra_mediaserver_alloc_info)
enum tegra_mediaserver_resource_type {
 TEGRA_MEDIASERVER_RESOURCE_BLOCK = 0,
 TEGRA_MEDIASERVER_RESOURCE_IRAM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum tegra_mediaserver_block_type {
 TEGRA_MEDIASERVER_BLOCK_AUDDEC = 0,
 TEGRA_MEDIASERVER_BLOCK_VIDDEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum tegra_mediaserver_iram_type {
 TEGRA_MEDIASERVER_IRAM_SCRATCH = 0,
 TEGRA_MEDIASERVER_IRAM_SHARED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct tegra_mediaserver_block_info {
 int nvmm_block_handle;
 int avp_block_handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int avp_block_library_handle;
 int service_handle;
 int service_library_handle;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tegra_mediaserver_iram_info {
 unsigned long rm_handle;
 int physical_address;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
union tegra_mediaserver_alloc_info {
 struct {
 int tegra_mediaserver_resource_type;
 union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct tegra_mediaserver_block_info block;
 struct {
 int tegra_mediaserver_iram_type;
 int alignment;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t size;
 } iram;
 } u;
 } in;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 union {
 struct {
 int count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } block;
 struct tegra_mediaserver_iram_info iram;
 } u;
 } out;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define TEGRA_MEDIASERVER_IOCTL_FREE   _IOR(TEGRA_MEDIASERVER_MAGIC, 0x41, union tegra_mediaserver_free_info)
union tegra_mediaserver_free_info {
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int tegra_mediaserver_resource_type;
 union {
 int nvmm_block_handle;
 int iram_rm_handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } u;
 } in;
};
#define TEGRA_MEDIASERVER_IOCTL_UPDATE_BLOCK_INFO   _IOR(TEGRA_MEDIASERVER_MAGIC, 0x45,   union tegra_mediaserver_update_block_info)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
union tegra_mediaserver_update_block_info {
 struct tegra_mediaserver_block_info in;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
