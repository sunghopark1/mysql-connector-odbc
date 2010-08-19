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

#ifndef MYODBCUTIL_DATASOURCETAB2_H
#define MYODBCUTIL_DATASOURCETAB2_H

#include <qobject.h>
#include <qstring.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qlayout.h>
#include <qtooltip.h>

#include "MYODBCSetup.h"
#include "MYODBCSetupLineEdit.h"
#include "MYODBCSetupComboBoxDatabases.h"
#include "MYODBCSetupCheckBox.h"

class MYODBCSetupDataSourceDialog;

class MYODBCSetupDataSourceTab2 : public QWidget
{
    Q_OBJECT

    friend class MYODBCSetupDataSourceDialog;
public:
    MYODBCSetupDataSourceTab2( QWidget *pwidgetParent,
                               QString stringPort,
                               QString stringSocket,
                               QString stringInitialStatement,
                               QString stringCharset,
                               QString stringSSLKey,
                               QString stringSSLCert,
                               QString stringSSLCA,
                               QString stringSSLCAPath,
                               QString stringSSLCipher,
                               QString stringSSLVerify );

    MYODBCSetupDataSourceTab2( QWidget *pwidgetParent );

    void setPort( const QString &stringPort );
    void setSocket( const QString &stringSocket );
    void setInitialStatement( const QString &stringInitialStatement );
    void setCharset( const QString &stringCharset );
    void setSSLKey( const QString &stringSSLKey );
    void setSSLCert( const QString &stringSSLCert );
    void setSSLCA( const QString &stringSSLCA );
    void setSSLCAPath( const QString &stringSSLCApath );
    void setSSLCipher( const QString &stringSSLCipher );
    void setSSLVerify( const QString &stringSSLVerify );

    QString getPort();
    QString getSocket();
    QString getInitialStatement();
    QString getCharset();
    QString getSSLKey();
    QString getSSLCert();
    QString getSSLCA();
    QString getSSLCAPath();
    QString getSSLCipher();
    QString getSSLVerify();

signals:
    void signalRequestCharsetNames();

protected:
    MYODBCSetupLineEdit *            plineeditPort;
    MYODBCSetupLineEdit *            plineeditSocket;
    MYODBCSetupLineEdit *            plineeditInitialStatement;
    MYODBCSetupComboBoxDatabases *   pcomboboxCharset;
    MYODBCSetupLineEdit *            plineeditSSLKey;
    MYODBCSetupLineEdit *            plineeditSSLCert;
    MYODBCSetupLineEdit *            plineeditSSLCA;
    MYODBCSetupLineEdit *            plineeditSSLCAPath;
    MYODBCSetupLineEdit *            plineeditSSLCipher;
    MYODBCSetupCheckBox *            pcheckboxSSLVerify;

    void doInit();
};

#endif
