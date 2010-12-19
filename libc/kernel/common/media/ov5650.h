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
#ifndef __OV5650_H__
#define __OV5650_H__

#include <linux/ioctl.h>  

#define OV5650_IOCTL_SET_MODE _IOW('o', 1, struct ov5650_mode)
#define OV5650_IOCTL_SET_FRAME_LENGTH _IOW('o', 2, __u32)
#define OV5650_IOCTL_SET_COARSE_TIME _IOW('o', 3, __u32)
#define OV5650_IOCTL_SET_GAIN _IOW('o', 4, __u16)
#define OV5650_IOCTL_GET_STATUS _IOR('o', 5, __u8)

struct ov5650_mode {
 int xres;
 int yres;
 __u32 frame_length;
 __u32 coarse_time;
 __u16 gain;
};

#endif

