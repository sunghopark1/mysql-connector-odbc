/* Copyright (C) 2000-2005 MySQL AB

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
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

#ifndef QTODBCMESSAGEOUTPUT_H
#define QTODBCMESSAGEOUTPUT_H

// Qt
#include <qtable.h>
#include <qstring.h>

//
class MYODBCMessage;

class MYQTODBCMessageOutput: public QTable
{
	Q_OBJECT
public:
    MYQTODBCMessageOutput( QWidget *pwidgetParent );
    ~MYQTODBCMessageOutput();

    // SETTERS
    virtual void setWaitingMessages( int n );

    // GETTERS
    virtual int getWaitingMessages() { return nWaitingMessages; }

signals:
    void signalWaitingMessages( MYQTODBCMessageOutput * );

public slots:
    virtual void slotMessage( MYODBCMessage *pmessage );

protected:
    int nWaitingMessages;
};

#endif


