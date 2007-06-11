/***************************************************************************
 *   Copyright (C) 2007 by Leandro Emanuel López                           *
 *   lopezlean@gmail.com  				                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef DATABASESESSION_H
#define DATABASESESSION_H

/**
	@author Leandro Emanuel Lopez <lopezlean@gmail.com>
*/
#include <QDialog>
class QLineEdit;
class QComboBox;

class DatabaseSession: public QDialog{
Q_OBJECT
public:
    DatabaseSession( QWidget * parent = 0 );
    ~DatabaseSession();
public Q_SLOTS:
    void tryConnect();
private:
    void init();

    //
    QLineEdit * m_databaseNameLE;
    QLineEdit * m_userNameLE;
    QLineEdit * m_passwordLE;
    QLineEdit * m_hostLE;
    QLineEdit * m_portLE;
    QComboBox * m_driversCB;


};

#endif
