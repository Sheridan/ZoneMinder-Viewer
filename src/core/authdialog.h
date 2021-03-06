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
#ifndef AUTHDIALOG_H
#define AUTHDIALOG_H

/**
	@author Leandro Emanuel Lopez <lopezlean@gmail.com>
*/

#include <QDialog>
#include "ui_authdialogwidget.h"

#include "auth.h"


class AuthDialog: public QDialog, private Ui::AuthDialogWidget{
Q_OBJECT
public:
    AuthDialog( Auth * auth ,  QWidget * parent = 0 );
    void setHostName( const QString & host );
    ~AuthDialog();

public Q_SLOTS:
    void checkAuth();
private:
    Auth *m_auth;
};

#endif
