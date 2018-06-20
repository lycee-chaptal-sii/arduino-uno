//  Copyright (c) 2018 Antoine Tran Tan
//

#include <Arduino.h>
#include "../include/timer.h"
#include "../include/TimerOne.h"

void set_timer1_interrupt(uint16_t microseconds, void(& callback)(void))
{
    Timer1.initialize(microseconds);
    Timer1.attachInterrupt(callback); // blinkLED to run every 0.15 seconds
}
