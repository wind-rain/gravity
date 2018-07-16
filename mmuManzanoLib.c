/* mmuManzanoLib.c - MMU library for Manzano XScale variant CPU */

/* 
 * Copyright (c) 2000-2006 Wind River Systems, Inc.
 *
 * The right to copy, distribute or otherwise make use of this software
 * may be licensed only pursuant to the terms of an applicable Wind River
 * license agreement. No license to Wind River intellectual property rights
 * is granted herein. All rights not licensed by Wind River are reserved
 * by Wind River.
 */

/*
modification history
--------------------
01b,08mar06,m_h  Manzano Support
01a,25jan06,m_h  written.
*/

#define ARMCACHE        ARMCACHE_MANZANO
#define ARMMMU          ARMMMU_MANZANO

#define FN(a,b) a##MANZANO##b

#include "redef.c"

#include "vxWorks.h"
#include "arch/arm/mmuArmManzanoLib.h"
#include "mmuArmXscalePalLib.c"
#include "mmuLib.c"
