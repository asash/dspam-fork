/* $Id: ldap_client.h,v 1.1 2005/06/08 02:15:09 jonz Exp $ */

/*
 DSPAM
 COPYRIGHT (C) 2002-2005 DEEP LOGIC INC.

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#ifdef HAVE_CONFIG_H
#include <auto-config.h>
#endif

#ifdef USE_LDAP

#ifndef _LDAP_CLIENT_H
#define _LDAP_CLIENT_H

#include "libdspam.h"

int ldap_verify(DSPAM_CTX *CTX, const char *username);

#endif /* _LDAP_CLIENT_H */

#endif /* USE_LDAP */