#ifndef SABALIB_H
#define SABALIB_H

#include "Arduino.h"

class PartBase {

 public:
  
  PartBase();
  ~PartBase();

  void tick(void);

};

#endif // SABALIB_H