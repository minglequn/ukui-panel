/* BEGIN_COMMON_COPYRIGHT_HEADER
 * (c)LGPL2+
 *
 * LXDE-Qt - a lightweight, Qt based, desktop toolset
 * http://razor-qt.org
 *
 * Copyright: 2010-2011 Razor team
 * Authors:
 *   Marat "Morion" Talipov <morion.self@gmail.com>
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
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 *
 * END_COMMON_COPYRIGHT_HEADER */

#ifndef CONFIGPANELWIDGET_H
#define CONFIGPANELWIDGET_H

#include "../ukuipanel.h"
#include <QSettings>
#include <QTimer>
#include <LXQt/ConfigDialog>

class UKUIPanel;

namespace Ui {
    class ConfigPanelWidget;
}

class ConfigPanelWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ConfigPanelWidget(UKUIPanel *panel, QWidget *parent = 0);
    ~ConfigPanelWidget();

    int screenNum() const { return mScreenNum; }
<<<<<<< HEAD:panel/config/configpanelwidget.h
    IUKUIPanel::Position position() const { return mPosition; }
=======
    ILXQtPanel::Position position() const { return mPosition; }
    void updateIconThemeSettings();
    void fillComboBox_position();
    void addPosition(const QString& name, int screen, UkuiPanel::Position position);
    bool canPlacedOn(int screenNum, UkuiPanel::Position position);
>>>>>>> e7794ba03e78464d6d5d76eb0cee48f9f90e0890:config/configpanelwidget.h

signals:
    void changed();

public slots:
    void reset();

private slots:
    void editChanged();
    void widthTypeChanged();
    void positionChanged();
    void pickFontColor();
    void pickBackgroundColor();
    void pickBackgroundImage();

private:
    Ui::ConfigPanelWidget *ui;
    UKUIPanel *mPanel;
    int mScreenNum;
    IUKUIPanel::Position mPosition;

    void addPosition(const QString& name, int screen, UKUIPanel::Position position);
    void fillComboBox_position();
    void fillComboBox_alignment();
    int indexForPosition(int screen, IUKUIPanel::Position position);
    int getMaxLength();

    // new values
    QColor mFontColor;
    QColor mBackgroundColor;

    // old values for reset
    int mOldPanelSize;
    int mOldIconSize;
    int mOldLineCount;
    int mOldLength;
    bool mOldLengthInPercents;
    UKUIPanel::Alignment mOldAlignment;
    IUKUIPanel::Position mOldPosition;
    bool mOldHidable;
    int mOldAnimation;
    int mOldShowDelay;
    int mOldScreenNum;
    QColor mOldFontColor;
    QColor mOldBackgroundColor;
    QString mOldBackgroundImage;
    int mOldOpacity;
    bool mOldReserveSpace;
};

#endif