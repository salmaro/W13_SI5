#pragma once
//#include "C:\Users\gkpc48\Documents\CodecoolAcademy\W13_SI_5\W13_SI5\W13_SI5\HardwareInterfaceRadiator.h"
#include "../W13_SI5/HardwareInterfaceRadiator.h"
#include "../W13_SI5/RadiationDetector.h"
#include "gmock/gmock.h"

class MockHIRadiaitor :
    public HardwareInterfaceRadiator
{
public:
	MOCK_METHOD(int, alphaRadiationReading, (), (override));
	MOCK_METHOD(int, betaRadiationReading, (), (override));
	MOCK_METHOD(int, gammaRadiationReading, (), (override));
};

