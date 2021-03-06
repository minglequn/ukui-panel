/* BEGIN_COMMON_COPYRIGHT_HEADER
 * (c)LGPL2+
 *
 * LXQt - a lightweight, Qt based, desktop toolset
 * https://lxqt.org
 *
 * Copyright: 2010-2011 Razor team
 * Authors:
 *   Petr Vanek <petr@scribus.info>
 *
 * This program or library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 *
 * END_COMMON_COPYRIGHT_HEADER */

#include "ukuimountplugin.h"

#include <Solid/DeviceNotifier>

UKUIMountPlugin::UKUIMountPlugin(const IUKUIPanelPluginStartupInfo &startupInfo):
    QObject(),
    IUKUIPanelPlugin(startupInfo),
    mPopup(nullptr),
    mDeviceAction(nullptr)
{
    mButton = new Button;
    mPopup = new Popup(this);

    connect(mButton, &QToolButton::clicked, mPopup, &Popup::showHide);
    connect(mPopup, &Popup::visibilityChanged, mButton, &QToolButton::setDown);
    // Note: postpone creation of the mDeviceAction to not fire it in startup time
    QTimer::singleShot(0, this, &UKUIMountPlugin::settingsChanged);
}

UKUIMountPlugin::~UKUIMountPlugin()
{
    delete mButton;
    delete mPopup;
}

QDialog *UKUIMountPlugin::configureDialog()
{
    if (mPopup)
        mPopup->hide();

}

void UKUIMountPlugin::realign()
{
    //nothing to do
}

void UKUIMountPlugin::settingsChanged()
{


}
