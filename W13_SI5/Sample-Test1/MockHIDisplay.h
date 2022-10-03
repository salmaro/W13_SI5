#pragma once
#include "../W13_SI5/HardwareInterfaceDisplay.h"
#include "../W13_SI5/RadiationDetector.h"
#include "gmock/gmock.h"

class MockHIDisplay : 
	public HardwareInterfaceDisplay

{
public:

	MOCK_METHOD(void, printMessage, (const std::string), (override, const));
};

