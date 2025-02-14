/*
 * (C) Copyright 2013
 * Andreas Bießmann <andreas@biessmann.org>
 *
 * This file consolidates all the different hang() functions implemented in
 * u-boot.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <command.h>
#include <bootstage.h>

#ifdef CONFIG_SPL_BUILD
__weak void spl_hang_reset(void) {}
#endif
/**
 * hang - stop processing by staying in an endless loop
 *
 * The purpose of this function is to stop further execution of code cause
 * something went completely wrong.  To catch this and give some feedback to
 * the user one needs to catch the bootstage_error (see show_boot_progress())
 * in the board code.
 */
void hang(void)
{
#if !defined(CONFIG_SPL_BUILD) || (defined(CONFIG_SPL_LIBCOMMON_SUPPORT) && \
		defined(CONFIG_SPL_SERIAL_SUPPORT))
	puts("### ERROR ### Please RESET the board ###\n");
#endif
do_reset(NULL, 0, 0, NULL);
bootstage_error(BOOTSTAGE_ID_NEED_RESET);
#if defined(CONFIG_SPL_BUILD)
        spl_hang_reset();
#endif
	for (;;)
		;
}
