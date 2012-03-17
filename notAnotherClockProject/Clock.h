#ifndef Clock_h
#define Clock_h

#include "Mode.h"
#include <Arduino.h>

class Clock: 
public Mode {
public:
  Clock();
  ~Clock();
  PGM_P *getName();
  void loop();
};

#endif


