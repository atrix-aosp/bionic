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
#ifndef __AR0832_MAIN_H__
#define __AR0832_MAIN_H__

#include <linux/ioctl.h>  

#define AR0832_IOCTL_SET_MODE _IOW('o', 1, struct ar0832_mode)
#define AR0832_IOCTL_SET_FRAME_LENGTH _IOW('o', 2, __u32)
#define AR0832_IOCTL_SET_COARSE_TIME _IOW('o', 3, __u32)
#define AR0832_IOCTL_SET_GAIN _IOW('o', 4, __u16)
#define AR0832_IOCTL_GET_STATUS _IOR('o', 5, __u8)
#define AR0832_IOCTL_GET_OTP _IOR('o', 6, struct ar0832_otp_data)
#define AR0832_IOCTL_TEST_PATTERN _IOW('o', 7, enum ar0832_test_pattern)
#define AR0832_IOCTL_SET_POWER_ON _IOW('o', 10, __u32)
#define AR0832_IOCTL_SET_SENSOR_REGION _IOW('o', 11, struct ar0832_stereo_region)

#define AR0832_FOCUSER_IOCTL_GET_CONFIG _IOR('o', 12, struct ar0832_focuser_config)
#define AR0832_FOCUSER_IOCTL_SET_POSITION _IOW('o', 13, __u32)

enum ar0832_test_pattern {
 TEST_PATTERN_NONE,
 TEST_PATTERN_COLORBARS,
 TEST_PATTERN_CHECKERBOARD
};

struct ar0832_otp_data {

 __u8 sensor_serial_num[6];
 __u8 part_num[8];
 __u8 lens_id[1];
 __u8 manufacture_id[2];
 __u8 factory_id[2];
 __u8 manufacture_date[9];
 __u8 manufacture_line[2];

 __u32 module_serial_num;
 __u8 focuser_liftoff[2];
 __u8 focuser_macro[2];
 __u8 reserved1[12];
 __u8 shutter_cal[16];
 __u8 reserved2[183];

 __u16 crc;
 __u8 reserved3[3];
 __u8 auto_load[2];
} __attribute__ ((packed));

struct ar0832_mode {
 int xres;
 int yres;
 __u32 frame_length;
 __u32 coarse_time;
 __u16 gain;
};

struct ar0832_point{
 int x;
 int y;
};

struct ar0832_reg {
 __u16 addr;
 __u16 val;
};

struct ar0832_stereo_region {
 int camera_index;
 struct ar0832_point image_start;
 struct ar0832_point image_end;
};

struct ar0832_focuser_config {
 __u32 settle_time;
 __u32 actuator_range;
 __u32 pos_low;
 __u32 pos_high;

};

#endif
