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
#ifndef __LINUX_TEGRA_RPC_H
#define __LINUX_TEGRA_RPC_H

#define TEGRA_RPC_MAX_MSG_LEN 256

#define TEGRA_RPC_MAX_NAME_LEN 17

struct tegra_rpc_port_desc {
 char name[TEGRA_RPC_MAX_NAME_LEN];
 int notify_fd;
};

#define TEGRA_RPC_IOCTL_MAGIC 'r'

#define TEGRA_RPC_IOCTL_PORT_CREATE _IOW(TEGRA_RPC_IOCTL_MAGIC, 0x20, struct tegra_rpc_port_desc)
#define TEGRA_RPC_IOCTL_PORT_GET_NAME _IOR(TEGRA_RPC_IOCTL_MAGIC, 0x21, char *)
#define TEGRA_RPC_IOCTL_PORT_CONNECT _IOR(TEGRA_RPC_IOCTL_MAGIC, 0x22, long)
#define TEGRA_RPC_IOCTL_PORT_LISTEN _IOR(TEGRA_RPC_IOCTL_MAGIC, 0x23, long)

#define TEGRA_RPC_IOCTL_MIN_NR _IOC_NR(TEGRA_RPC_IOCTL_PORT_CREATE)
#define TEGRA_RPC_IOCTL_MAX_NR _IOC_NR(TEGRA_RPC_IOCTL_PORT_LISTEN)

#endif
