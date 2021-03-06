/**
 ******************************************************************************
 *
 * @file       uploadergadget.h
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2014
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup  Uploader Uploader Plugin
 * @{
 * @brief The Tau Labs uploader plugin gadget
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>
 */

#ifndef UPLOADERGADGET_H
#define UPLOADERGADGET_H

#include <coreplugin/iuavgadget.h>
#include "uploadergadgetwidget.h"
#include "uploader_global.h"

class IUAVGadget;
class QWidget;
class QString;
class UploaderGadgetWidget;

using namespace Core;

namespace uploader {

class UPLOADER_EXPORT UploaderGadget : public Core::IUAVGadget
{
    Q_OBJECT
public:
    UploaderGadget(QString classId, UploaderGadgetWidget *widget, QWidget *parent = 0);
    ~UploaderGadget();

    QWidget *widget() { return m_widget; }
    void loadConfiguration(IUAVGadgetConfiguration *config);

private:
    UploaderGadgetWidget *m_widget;
};
}
#endif // UPLOADERGADGET_H
