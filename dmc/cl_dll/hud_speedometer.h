#pragma once
#include <cstdint>

class CHudSpeedometer : public CHudBase
{
	int speed;

	cvar_t* hud_speedometer;

public:
	virtual int Init();
	virtual int VidInit();
	virtual int Draw(float time);

	void UpdateSpeed(const float velocity[2]);
};
