#ifndef HEADER_CONFIG_MENDER_DEFINES_H
#define HEADER_CONFIG_MENDER_DEFINES_H

/* Shell variables */
#define MENDER_BOOT_PART_NUMBER 2
#define MENDER_BOOT_PART_NUMBER_HEX 2
#define MENDER_ROOTFS_PART_A_NUMBER 2
#define MENDER_ROOTFS_PART_A_NUMBER_HEX 2
#define MENDER_ROOTFS_PART_B_NUMBER 3
#define MENDER_ROOTFS_PART_B_NUMBER_HEX 3
#define MENDER_UBOOT_STORAGE_INTERFACE "nvme"
#define MENDER_UBOOT_STORAGE_DEVICE 0

/* BB variables. */
#define MENDER_STORAGE_DEVICE_BASE "PARTUUID=62c8cbe3-3cbd-4af7-8673-2df58774106"
#define MENDER_UBOOT_ENV_STORAGE_DEVICE_OFFSET_1 0x0000
#define MENDER_UBOOT_ENV_STORAGE_DEVICE_OFFSET_2 0x4000
#define MENDER_ROOTFS_PART_A_NAME "PARTUUID=62c8cbe3-3cbd-4af7-8673-2df587741062"
#define MENDER_ROOTFS_PART_B_NAME "PARTUUID=62c8cbe3-3cbd-4af7-8673-2df587741063"

/* For sanity checks. */
#define MENDER_BOOTENV_SIZE 0x4000

#define MENDER_BOOT_KERNEL_TYPE "booti"
#define MENDER_KERNEL_NAME "Image"
#define MENDER_DTB_NAME "rk3588-rock-5b.dtb"
#define MENDER_UBOOT_PRE_SETUP_COMMANDS ""
#define MENDER_UBOOT_POST_SETUP_COMMANDS ""
#endif /* !HEADER_CONFIG_MENDER_DEFINES_H */
