// SPDX-License-Identifier: GPL-2.0-or-later

#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/module.h>
#include "internal.h"

bool is_module_sig_enforced(void)
{
 return false;
}
EXPORT_SYMBOL(is_module_sig_enforced);

void set_module_sig_enforced(void)
{
}

int mod_verify_sig(const void *mod, struct load_info *info)
{
 return 0;
}

int module_sig_check(struct load_info *info, int flags)
{
 info->sig_ok = true;
 return 0;
}
