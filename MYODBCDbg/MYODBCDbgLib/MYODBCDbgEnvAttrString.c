/*! 
    \file     MYODBCDbgEnvAttrString.c
    \author   Peter Harvey <pharvey@mysql.com>
              Copyright (C) MySQL AB 2004-2005, Released under GPL.
    \version  Connector/ODBC v3
    \date     2005          
    \brief    Code to provide debug information.
    
    \license  Copyright (C) 2000-2005 MySQL AB

              This program is free software; you can redistribute it and/or modify
              it under the terms of the GNU General Public License as published by
              the Free Software Foundation; either version 2 of the License, or
              (at your option) any later version.
            
              There are special exceptions to the terms and conditions of the GPL as it
              is applied to this software. View the full text of the exception in file
              EXCEPTIONS in the directory of this software distribution.
            
              This program is distributed in the hope that it will be useful,
              but WITHOUT ANY WARRANTY; without even the implied warranty of
              MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
              GNU General Public License for more details.
            
              You should have received a copy of the GNU General Public License
              along with this program; if not, write to the Free Software
              Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
#include "../include/MYODBCDbg.h"

const char *MYODBCDbgEnvAttrString( SQLINTEGER nAttribute )
{
    switch ( nAttribute )
    {
        case SQL_ATTR_CONNECTION_POOLING:
            return "SQL_ATTR_CONNECTION_POOLING";
        case SQL_ATTR_CP_MATCH:
            return "SQL_ATTR_CP_MATCH";
        case SQL_ATTR_ODBC_VERSION:
            return "SQL_ATTR_ODBC_VERSION";
        case SQL_ATTR_OUTPUT_NTS:
            return "SQL_ATTR_OUTPUT_NTS";
    }

    return "unknown";
}

