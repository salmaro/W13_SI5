#pragma once
#include <memory>
#include <iostream>
#include "HardwareInterfaceAudio.h"
#include "HardwareInterfaceDisplay.h"
#include "HardwareInterfaceRadiator.h"

class RadiationDetector
{
private:
	std::shared_ptr<HardwareInterfaceDisplay> ptrHID{};
	std::shared_ptr<HardwareInterfaceRadiator> ptrHIR{};
	std::shared_ptr<HardwareInterfaceAudio> ptrHIA{};

public:
	RadiationDetector(std::shared_ptr<HardwareInterfaceRadiator> ptrHIR_);
	RadiationDetector(std::shared_ptr<HardwareInterfaceDisplay> ptrHID_);
	RadiationDetector(std::shared_ptr<HardwareInterfaceAudio> ptrHIA_);
	int measureAlphaRadiation();
	int measureBetaRadiation();
	int measureGammaRadiation();
	void displayMessage(std::string message);
	void playMusic();
};

