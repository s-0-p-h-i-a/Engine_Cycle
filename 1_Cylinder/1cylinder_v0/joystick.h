#ifndef JOYSTICK_H
#define JOYSTICK_H

enum {
  joystick_X	= 0,
  joystick_Y	= 1,
  joystick_Z	= 7,
  debounceDelay = 100,
  correction = 128 
};

extern int x;
//extern int y;
extern bool z;
//extern unsigned long lastInput;

void readJoystick(void);

#endif
