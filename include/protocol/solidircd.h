/*
 * Copyright (C) 2005 William Pitcock, et al.
 * Rights to this code are as documented in doc/LICENSE.
 *
 * This code contains the channel mode definitions for ratbox ircd.
 *
 * $Id: solidircd.h 4529 2006-01-07 02:17:39Z nenolod $
 */

#ifndef RATBOX_H
#define RATBOX_H

#define CMODE_BAN       0x00000000      /* IGNORE */
#define CMODE_EXEMPT    0x00000000      /* IGNORE */ 
#define CMODE_INVEX     0x00000000      /* IGNORE */

/* Extended channel modes will eventually go here. */
#define CMODE_NOCOLOR	0x00001000	/* bahamut +c */
#define CMODE_MODREG	0x00002000	/* bahamut +M */
#define CMODE_REGONLY	0x00004000	/* bahamut +R */
#define CMODE_OPERONLY  0x00008000      /* bahamut +O */

#define CMODE_NOCTRL	0x00010000
#define CMODE_SSL	0x00020000
#define CMODE_NONICK	0x00040000
#define CMODE_RSL	0x00080000

#define CMODE_HALFOP	0x40000000	/* solidircd +h */

#endif
