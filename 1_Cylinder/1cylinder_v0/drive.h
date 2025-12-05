#ifndef DRIVE_H
#define DRIVE_H

#ifdef __cplusplus
extern "C" {
#endif

enum {
	
	hyst				= 30,
	LEVEL_ONE 	= 350,
	LEVEL_TWO 	= 650,
	LEVEL_THREE = 1000
};

enum {

	
	SPEED_THREE = 20,	
	SPEED_TWO 	= 300,
	SPEED_ONE 	= 600,
	IDLE 	  		= 800,
	PAUSE				= 2000
};

extern int speedPause;

extern unsigned long thisEngineCycle;
extern unsigned long lastEngineCycle;

int getSpeedPause(void);

void driveCar(void);

#ifdef __cplusplus
}
#endif

#endif
