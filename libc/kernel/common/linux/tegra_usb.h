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
#ifndef _TEGRA_USB_H_
#define _TEGRA_USB_H_

enum tegra_usb_operating_modes {
 TEGRA_USB_DEVICE,
 TEGRA_USB_HOST,
 TEGRA_USB_OTG,
};

struct tegra_ehci_platform_data {
 enum tegra_usb_operating_modes operating_mode;

 int power_down_on_bus_suspend;
 void *phy_config;
};

#endif
