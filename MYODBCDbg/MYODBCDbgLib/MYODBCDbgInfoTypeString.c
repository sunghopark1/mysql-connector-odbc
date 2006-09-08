/*! 
    \file     MYODBCDbgInfoTypeString.c
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

const char *MYODBCDbgInfoTypeString( SQLUSMALLINT nInfoType )
{
    switch ( nInfoType )
    {
        case SQL_ACCESSIBLE_PROCEDURES:
            return "SQL_ACCESSIBLE_PROCEDURES";
        case SQL_ACCESSIBLE_TABLES:
            return "SQL_ACCESSIBLE_TABLES";
        case SQL_ACTIVE_ENVIRONMENTS:
            return "SQL_ACTIVE_ENVIRONMENTS";
        case SQL_AGGREGATE_FUNCTIONS:
            return "SQL_AGGREGATE_FUNCTIONS";
        case SQL_ALTER_DOMAIN:
            return "SQL_ALTER_DOMAIN";
        case SQL_ALTER_TABLE:
            return "SQL_ALTER_TABLE";
        case SQL_ASYNC_MODE:
            return "SQL_ASYNC_MODE";
        case SQL_BATCH_ROW_COUNT:
            return "SQL_BATCH_ROW_COUNT";
        case SQL_BATCH_SUPPORT:
            return "SQL_BATCH_SUPPORT";
        case SQL_BOOKMARK_PERSISTENCE:
            return "SQL_BOOKMARK_PERSISTENCE";
        case SQL_CATALOG_LOCATION:
            return "SQL_CATALOG_LOCATION";
        case SQL_CATALOG_NAME:
            return "SQL_CATALOG_NAME";
        case SQL_CATALOG_NAME_SEPARATOR:
            return "SQL_CATALOG_NAME_SEPARATOR";
        case SQL_CATALOG_TERM:
            return "SQL_CATALOG_TERM";
        case SQL_CATALOG_USAGE:
            return "SQL_CATALOG_USAGE";
        case SQL_COLLATION_SEQ:
            return "SQL_COLLATION_SEQ";
        case SQL_COLUMN_ALIAS:
            return "SQL_COLUMN_ALIAS";
        case SQL_CONCAT_NULL_BEHAVIOR:
            return "SQL_CONCAT_NULL_BEHAVIOR";
        case SQL_CONVERT_BIGINT:
            return "SQL_CONVERT_BIGINT";
        case SQL_CONVERT_BINARY:
            return "SQL_CONVERT_BINARY";
        case SQL_CONVERT_BIT:
            return "SQL_CONVERT_BIT";
        case SQL_CONVERT_CHAR:
            return "SQL_CONVERT_CHAR";
#ifdef SQL_CONVERT_GUID
        case SQL_CONVERT_GUID:
            return "SQL_CONVERT_GUID";
#endif
        case SQL_CONVERT_DATE:
            return "SQL_CONVERT_DATE";
        case SQL_CONVERT_DECIMAL:
            return "SQL_CONVERT_DECIMAL";
        case SQL_CONVERT_DOUBLE:
            return "SQL_CONVERT_DOUBLE";
        case SQL_CONVERT_FLOAT:
            return "SQL_CONVERT_FLOAT";
        case SQL_CONVERT_INTEGER:
            return "SQL_CONVERT_INTEGER";
        case SQL_CONVERT_INTERVAL_YEAR_MONTH:
            return "SQL_CONVERT_INTERVAL_YEAR_MONTH";
        case SQL_CONVERT_INTERVAL_DAY_TIME:
            return "SQL_CONVERT_INTERVAL_DAY_TIME";
        case SQL_CONVERT_LONGVARBINARY:
            return "SQL_CONVERT_LONGVARBINARY";
        case SQL_CONVERT_LONGVARCHAR:
            return "SQL_CONVERT_LONGVARCHAR";
        case SQL_CONVERT_NUMERIC:
            return "SQL_CONVERT_NUMERIC";
        case SQL_CONVERT_REAL:
            return "SQL_CONVERT_REAL";
        case SQL_CONVERT_SMALLINT:
            return "SQL_CONVERT_SMALLINT";
        case SQL_CONVERT_TIME:
            return "SQL_CONVERT_TIME";
        case SQL_CONVERT_TIMESTAMP:
            return "SQL_CONVERT_TIMESTAMP";
        case SQL_CONVERT_TINYINT:
            return "SQL_CONVERT_TINYINT";
        case SQL_CONVERT_VARBINARY:
            return "SQL_CONVERT_VARBINARY";
        case SQL_CONVERT_VARCHAR:
            return "SQL_CONVERT_VARCHAR";
        case SQL_CONVERT_FUNCTIONS:
            return "SQL_CONVERT_FUNCTIONS";
        case SQL_CORRELATION_NAME:
            return "SQL_CORRELATION_NAME";
        case SQL_CREATE_ASSERTION:
            return "SQL_CREATE_ASSERTION";
        case SQL_CREATE_CHARACTER_SET:
            return "SQL_CREATE_CHARACTER_SET";
        case SQL_CREATE_COLLATION:
            return "SQL_CREATE_COLLATION";
        case SQL_CREATE_DOMAIN:
            return "SQL_CREATE_DOMAIN";
        case SQL_CREATE_SCHEMA:
            return "SQL_CREATE_SCHEMA";
        case SQL_CREATE_TABLE:
            return "SQL_CREATE_TABLE";
        case SQL_CREATE_TRANSLATION:
            return "SQL_CREATE_TRANSLATION";
        case SQL_CREATE_VIEW:
            return "SQL_CREATE_VIEW";
        case SQL_CURSOR_COMMIT_BEHAVIOR:
            return "SQL_CURSOR_COMMIT_BEHAVIOR";
        case SQL_CURSOR_ROLLBACK_BEHAVIOR:
            return "SQL_CURSOR_ROLLBACK_BEHAVIOR";
        case SQL_CURSOR_SENSITIVITY:
            return "SQL_CURSOR_SENSITIVITY";
        case SQL_DATA_SOURCE_NAME:
            return "SQL_DATA_SOURCE_NAME";
        case SQL_DATA_SOURCE_READ_ONLY:
            return "SQL_DATA_SOURCE_READ_ONLY";
        case SQL_DATABASE_NAME:
            return "SQL_DATABASE_NAME";
        case SQL_DATETIME_LITERALS:
            return "SQL_DATETIME_LITERALS";
        case SQL_DBMS_NAME:
            return "SQL_DBMS_NAME";
        case SQL_DBMS_VER:
            return "SQL_DBMS_VER";
        case SQL_DDL_INDEX:
            return "SQL_DDL_INDEX";
        case SQL_DEFAULT_TXN_ISOLATION:
            return "SQL_DEFAULT_TXN_ISOLATION";
        case SQL_DESCRIBE_PARAMETER:
            return "SQL_DESCRIBE_PARAMETER";
        case SQL_DM_VER:
            return "SQL_DM_VER";
        case SQL_DRIVER_HDBC:
            return "SQL_DRIVER_HDBC";
        case SQL_DRIVER_HENV:
            return "SQL_DRIVER_HENV";
        case SQL_DRIVER_HDESC:
            return "SQL_DRIVER_HDESC";
        case SQL_DRIVER_HLIB:
            return "SQL_DRIVER_HLIB";
        case SQL_DRIVER_HSTMT:
            return "SQL_DRIVER_HSTMT";
        case SQL_DRIVER_NAME:
            return "SQL_DRIVER_NAME";
        case SQL_DRIVER_ODBC_VER:
            return "SQL_DRIVER_ODBC_VER";
        case SQL_DRIVER_VER:
            return "SQL_DRIVER_VER";
        case SQL_DROP_ASSERTION:
            return "SQL_DROP_ASSERTION";
        case SQL_DROP_CHARACTER_SET:
            return "SQL_DROP_CHARACTER_SET";
        case SQL_DROP_COLLATION:
            return "SQL_DROP_COLLATION";
        case SQL_DROP_DOMAIN:
            return "SQL_DROP_DOMAIN";
        case SQL_DROP_SCHEMA:
            return "SQL_DROP_SCHEMA";
        case SQL_DROP_TABLE:
            return "SQL_DROP_TABLE";
        case SQL_DROP_TRANSLATION:
            return "SQL_DROP_TRANSLATION";
        case SQL_DROP_VIEW:
            return "SQL_DROP_VIEW";
        case SQL_DYNAMIC_CURSOR_ATTRIBUTES1:
            return "SQL_DYNAMIC_CURSOR_ATTRIBUTES1";
        case SQL_DYNAMIC_CURSOR_ATTRIBUTES2:
            return "SQL_DYNAMIC_CURSOR_ATTRIBUTES2";
        case SQL_EXPRESSIONS_IN_ORDERBY:
            return "SQL_EXPRESSIONS_IN_ORDERBY";
        case SQL_FILE_USAGE:
            return "SQL_FILE_USAGE";
        case SQL_FORWARD_ONLY_CURSOR_ATTRIBUTES1:
            return "SQL_FORWARD_ONLY_CURSOR_ATTRIBUTES1";
        case SQL_FORWARD_ONLY_CURSOR_ATTRIBUTES2:
            return "SQL_FORWARD_ONLY_CURSOR_ATTRIBUTES2";
        case SQL_GETDATA_EXTENSIONS:
            return "SQL_GETDATA_EXTENSIONS";
        case SQL_GROUP_BY:
            return "SQL_GROUP_BY";
        case SQL_IDENTIFIER_CASE:
            return "SQL_IDENTIFIER_CASE";
        case SQL_IDENTIFIER_QUOTE_CHAR:
            return "SQL_IDENTIFIER_QUOTE_CHAR";
        case SQL_INDEX_KEYWORDS:
            return "SQL_INDEX_KEYWORDS";
        case SQL_INFO_SCHEMA_VIEWS:
            return "SQL_INFO_SCHEMA_VIEWS";
        case SQL_INSERT_STATEMENT:
            return "SQL_INSERT_STATEMENT";
        case SQL_INTEGRITY:
            return "SQL_INTEGRITY";
        case SQL_KEYSET_CURSOR_ATTRIBUTES1:
            return "SQL_KEYSET_CURSOR_ATTRIBUTES1";
        case SQL_KEYSET_CURSOR_ATTRIBUTES2:
            return "SQL_KEYSET_CURSOR_ATTRIBUTES2";
        case SQL_KEYWORDS:
            return "SQL_KEYWORDS";
        case SQL_LIKE_ESCAPE_CLAUSE:
            return "SQL_LIKE_ESCAPE_CLAUSE";
        case SQL_MAX_ASYNC_CONCURRENT_STATEMENTS:
            return "SQL_MAX_ASYNC_CONCURRENT_STATEMENTS";
        case SQL_MAX_BINARY_LITERAL_LEN:
            return "SQL_MAX_BINARY_LITERAL_LEN";
        case SQL_MAX_CATALOG_NAME_LEN:
            return "SQL_MAX_CATALOG_NAME_LEN";
        case SQL_MAX_CHAR_LITERAL_LEN:
            return "SQL_MAX_CHAR_LITERAL_LEN";
        case SQL_MAX_COLUMN_NAME_LEN:
            return "SQL_MAX_COLUMN_NAME_LEN";
        case SQL_MAX_COLUMNS_IN_GROUP_BY:
            return "SQL_MAX_COLUMNS_IN_GROUP_BY";
        case SQL_MAX_COLUMNS_IN_INDEX:
            return "SQL_MAX_COLUMNS_IN_INDEX";
        case SQL_MAX_COLUMNS_IN_ORDER_BY:
            return "SQL_MAX_COLUMNS_IN_ORDER_BY";
        case SQL_MAX_COLUMNS_IN_SELECT:
            return "SQL_MAX_COLUMNS_IN_SELECT";
        case SQL_MAX_COLUMNS_IN_TABLE:
            return "SQL_MAX_COLUMNS_IN_TABLE";
        case SQL_MAX_CONCURRENT_ACTIVITIES:
            return "SQL_MAX_CONCURRENT_ACTIVITIES";
        case SQL_MAX_CURSOR_NAME_LEN:
            return "SQL_MAX_CURSOR_NAME_LEN";
        case SQL_MAX_DRIVER_CONNECTIONS:
            return "SQL_MAX_DRIVER_CONNECTIONS";
        case SQL_MAX_IDENTIFIER_LEN:
            return "SQL_MAX_IDENTIFIER_LEN";
        case SQL_MAX_INDEX_SIZE:
            return "SQL_MAX_INDEX_SIZE";
        case SQL_MAX_PROCEDURE_NAME_LEN:
            return "SQL_MAX_PROCEDURE_NAME_LEN";
        case SQL_MAX_ROW_SIZE:
            return "SQL_MAX_ROW_SIZE";
        case SQL_MAX_ROW_SIZE_INCLUDES_LONG:
            return "SQL_MAX_ROW_SIZE_INCLUDES_LONG";
        case SQL_MAX_SCHEMA_NAME_LEN:
            return "SQL_MAX_SCHEMA_NAME_LEN";
        case SQL_MAX_STATEMENT_LEN:
            return "SQL_MAX_STATEMENT_LEN";
        case SQL_MAX_TABLE_NAME_LEN:
            return "SQL_MAX_TABLE_NAME_LEN";
        case SQL_MAX_TABLES_IN_SELECT:
            return "SQL_MAX_TABLES_IN_SELECT";
        case SQL_MAX_USER_NAME_LEN:
            return "SQL_MAX_USER_NAME_LEN";
        case SQL_MULT_RESULT_SETS:
            return "SQL_MULT_RESULT_SETS";
        case SQL_MULTIPLE_ACTIVE_TXN:
            return "SQL_MULTIPLE_ACTIVE_TXN";
        case SQL_NEED_LONG_DATA_LEN:
            return "SQL_NEED_LONG_DATA_LEN";
        case SQL_NON_NULLABLE_COLUMNS:
            return "SQL_NON_NULLABLE_COLUMNS";
        case SQL_NULL_COLLATION:
            return "SQL_NULL_COLLATION";
        case SQL_NUMERIC_FUNCTIONS:
            return "SQL_NUMERIC_FUNCTIONS";
        case SQL_ODBC_API_CONFORMANCE:
            return "SQL_ODBC_API_CONFORMANCE";
        case SQL_ODBC_INTERFACE_CONFORMANCE:
            return "SQL_ODBC_INTERFACE_CONFORMANCE";
        case SQL_ODBC_VER:
            return "SQL_ODBC_VER";
        case SQL_OJ_CAPABILITIES:
            return "SQL_OJ_CAPABILITIES";
        case SQL_ORDER_BY_COLUMNS_IN_SELECT:
            return "SQL_ORDER_BY_COLUMNS_IN_SELECT";
        case SQL_PARAM_ARRAY_ROW_COUNTS:
            return "SQL_PARAM_ARRAY_ROW_COUNTS";
        case SQL_PARAM_ARRAY_SELECTS:
            return "SQL_PARAM_ARRAY_SELECTS";
        case SQL_PROCEDURE_TERM:
            return "SQL_PROCEDURE_TERM";
        case SQL_PROCEDURES:
            return "SQL_PROCEDURES";
        case SQL_POS_OPERATIONS:
            return "SQL_POS_OPERATIONS";
        case SQL_QUOTED_IDENTIFIER_CASE:
            return "SQL_QUOTED_IDENTIFIER_CASE";
        case SQL_ROW_UPDATES:
            return "SQL_ROW_UPDATES";
        case SQL_SCHEMA_TERM:
            return "SQL_SCHEMA_TERM";
        case SQL_SCHEMA_USAGE:
            return "SQL_SCHEMA_USAGE";
        case SQL_SCROLL_OPTIONS:
            return "SQL_SCROLL_OPTIONS";
        case SQL_SEARCH_PATTERN_ESCAPE:
            return "SQL_SEARCH_PATTERN_ESCAPE";
        case SQL_SERVER_NAME:
            return "SQL_SERVER_NAME";
        case SQL_SPECIAL_CHARACTERS:
            return "SQL_SPECIAL_CHARACTERS";
        case SQL_SQL_CONFORMANCE:
            return "SQL_SQL_CONFORMANCE";
        case SQL_SQL92_DATETIME_FUNCTIONS:
            return "SQL_SQL92_DATETIME_FUNCTIONS";
        case SQL_SQL92_FOREIGN_KEY_DELETE_RULE:
            return "SQL_SQL92_FOREIGN_KEY_DELETE_RULE";
        case SQL_SQL92_FOREIGN_KEY_UPDATE_RULE:
            return "SQL_SQL92_FOREIGN_KEY_UPDATE_RULE";
        case SQL_SQL92_GRANT:
            return "SQL_SQL92_GRANT";
        case SQL_SQL92_NUMERIC_VALUE_FUNCTIONS:
            return "SQL_SQL92_NUMERIC_VALUE_FUNCTIONS";
        case SQL_SQL92_PREDICATES:
            return "SQL_SQL92_PREDICATES";
        case SQL_SQL92_RELATIONAL_JOIN_OPERATORS:
            return "SQL_SQL92_RELATIONAL_JOIN_OPERATORS";
        case SQL_SQL92_REVOKE:
            return "SQL_SQL92_REVOKE";
        case SQL_SQL92_ROW_VALUE_CONSTRUCTOR:
            return "SQL_SQL92_ROW_VALUE_CONSTRUCTOR";
        case SQL_SQL92_STRING_FUNCTIONS:
            return "SQL_SQL92_STRING_FUNCTIONS";
        case SQL_SQL92_VALUE_EXPRESSIONS:
            return "SQL_SQL92_VALUE_EXPRESSIONS";
        case SQL_STANDARD_CLI_CONFORMANCE:
            return "SQL_STANDARD_CLI_CONFORMANCE";
        case SQL_STATIC_CURSOR_ATTRIBUTES1:
            return "SQL_STATIC_CURSOR_ATTRIBUTES1";
        case SQL_STATIC_CURSOR_ATTRIBUTES2:
            return "SQL_STATIC_CURSOR_ATTRIBUTES2";
        case SQL_STRING_FUNCTIONS:
            return "SQL_STRING_FUNCTIONS";
        case SQL_SUBQUERIES:
            return "SQL_SUBQUERIES";
        case SQL_SYSTEM_FUNCTIONS:
            return "SQL_SYSTEM_FUNCTIONS";
        case SQL_TABLE_TERM:
            return "SQL_TABLE_TERM";
        case SQL_TIMEDATE_ADD_INTERVALS:
            return "SQL_TIMEDATE_ADD_INTERVALS";
        case SQL_TIMEDATE_DIFF_INTERVALS:
            return "SQL_TIMEDATE_DIFF_INTERVALS";
        case SQL_TIMEDATE_FUNCTIONS:
            return "SQL_TIMEDATE_FUNCTIONS";
        case SQL_TXN_CAPABLE:
            return "SQL_TXN_CAPABLE";
        case SQL_TXN_ISOLATION_OPTION:
            return "SQL_TXN_ISOLATION_OPTION";
        case SQL_UNION:
            return "SQL_UNION";
        case SQL_USER_NAME:
            return "SQL_USER_NAME";
        case SQL_XOPEN_CLI_YEAR:
            return "SQL_XOPEN_CLI_YEAR";
    }

    return "unknown";
}

