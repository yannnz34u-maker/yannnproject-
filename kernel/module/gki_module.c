// SPDX-License-Identifier: GPL-2.0-only

#include <linux/errno.h>
#include <linux/kernel.h>

bool gki_is_module_protected_export(const char *name)
{
 return false;
}

bool gki_is_module_unprotected_symbol(const char *name)
{
 return true;
}
