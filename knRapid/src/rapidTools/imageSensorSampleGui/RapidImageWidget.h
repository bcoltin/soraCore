/* -*- C++ -*- *****************************************************************
 * Copyright (c) 2013 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

******************************************************************************/
#ifndef RapidImageWidget_h
#define RapidImageWidget_h

#include <QWidget>
#include <QPushButton>
#include <QButtonGroup>
#include <QGridLayout>
#include <QSlider>
#include <QDateTime>

#include "ImageSensorSampleSubscriber.h"
#include "ui_RapidImageWidgetUi.h"

/**
 *
 */
class RapidImageWidget : public QWidget
{
  Q_OBJECT
public:
  RapidImageWidget(const char* agentName,
                   const char* topic,
                   const char* profile,
                   const char* library,
                   QWidget* parent);
  ~RapidImageWidget();

public slots:
  void setImage(qint64 timestamp, QImage image);

protected:
  Ui::RapidImageWidgetUi ui;
  ImageSensorSampleSubscriber* m_subscriber;

  int       m_count;
  QDateTime m_time;
};

#endif // RapidImageWidget_h

