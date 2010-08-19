/* Copyright (c) 2004, 2010, Oracle and/or its affiliates. All rights reserved.

   The MySQL Connector/ODBC is licensed under the terms of the GPLv2
   <http://www.gnu.org/licenses/old-licenses/gpl-2.0.html>, like most
   MySQL Connectors. There are special exceptions to the terms and
   conditions of the GPLv2 as it is applied to this software, see the
   FLOSS License Exception
   <http://www.mysql.com/about/legal/licensing/foss-exception.html>.
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published
   by the Free Software Foundation; version 2 of the License.
   
   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
   for more details.
   
   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA */

#include "MYODBCUtil.h"

/*!
  \brief    Creates/replaces the given driver registration.

            This should not be used for general register/deregister
            driver tasks - use SQLInstallDriverEx() and SQLRemoveDriver()
            for that.

            Use this when you want a more rudementary method to play with
            the driver registration.

  \note     If section pDriver->pszName does not exist it will be created
            otherwise it is updated.
*/
BOOL MYODBCUtilWriteDriver( MYODBCUTIL_DRIVER *pDriver )
{
    SAVE_MODE();
    if ( pDriver->pszName &&
         !SQLWritePrivateProfileString( pDriver->pszName, NULL, NULL, "ODBCINST.INI" ) )
    {
      return FALSE;
    }
    RESTORE_MODE();
    if ( pDriver->pszDRIVER &&
         !SQLWritePrivateProfileString( pDriver->pszName, "DRIVER", pDriver->pszDRIVER, "ODBCINST.INI" ) )
    {
      return FALSE;
    }
    RESTORE_MODE();
    if ( pDriver->pszSETUP &&
         !SQLWritePrivateProfileString( pDriver->pszName, "SETUP", pDriver->pszSETUP, "ODBCINST.INI" ) )
    {
      return FALSE;
    }
    RESTORE_MODE();

    return TRUE;
}
