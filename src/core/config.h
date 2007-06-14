/***************************************************************************
 *   Copyright (C) 2007 by Leandro Emanuel López                           *
 *   lopezlean@gmail.com                         *
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

#ifndef CONFIG_H
#define CONFIG_H


/**
    default translation function
*/
#ifdef Q_WS_X11
 #define _(str) QObject::trUtf8( str)
 #define __(str,comment) QObject::trUtf8( str,comment)
#else
 #define _(str) QObject::tr( str)
 #define __(str,comment) QObject::tr( str,comment)
#endif

#define ZMVIEWER_VERSION 0.1
static char * ApplicationName = "ZoneMinder Viewer";
static char * ApplicationShortName ="ZMViewer";

#endif
