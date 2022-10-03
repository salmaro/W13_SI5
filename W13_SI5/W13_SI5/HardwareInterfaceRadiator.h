#pragma once
class HardwareInterfaceRadiator
{
public:
	virtual int alphaRadiationReading() = 0;
	virtual int betaRadiationReading() = 0;
	virtual int gammaRadiationReading() =0;
};

