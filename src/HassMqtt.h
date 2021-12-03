/*
  HassMqtt.h - Library for Home Assistant MQTT Discovery management.
  Created by Rodrigo Jurado, December 3, 2021.
  Released into the public domain.
*/
#ifndef HassMqtt_h
#define HassMqtt_h

#include "Arduino.h"
#include "PubSubClient.h"

class HassMqtt
{
  public:
    HassMqtt();
    void log(const String message);
};

#endif