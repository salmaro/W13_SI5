#pragma once
#include "../W13_SI5/HardwareInterfaceAudio.h"
#include "../W13_SI5/RadiationDetector.h"
#include "gmock/gmock.h"

class MockHIAudio:
	 public HardwareInterfaceAudio
{
public:
	MOCK_METHOD(void, makeSound,(), (override));
};

