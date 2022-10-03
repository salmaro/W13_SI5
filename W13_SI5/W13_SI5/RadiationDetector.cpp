#include "RadiationDetector.h"

RadiationDetector::RadiationDetector(std::shared_ptr<HardwareInterfaceRadiator> ptrHIR_)
    : ptrHIR{ ptrHIR_ }
{
}

RadiationDetector::RadiationDetector(std::shared_ptr<HardwareInterfaceDisplay> ptrHID_)
    : ptrHID{ptrHID_}
{
}

RadiationDetector::RadiationDetector(std::shared_ptr<HardwareInterfaceAudio> ptrHIA_)
    :ptrHIA{ptrHIA_}
{
}

int RadiationDetector::measureAlphaRadiation()
{
    std::cout << "Alpha Radiation Level: " << ptrHIR->alphaRadiationReading() << std::endl;
    return ptrHIR->alphaRadiationReading();
}

int RadiationDetector::measureBetaRadiation()
{
    std::cout << "Beta Radiation Level: " << ptrHIR->betaRadiationReading() << std::endl;
    return ptrHIR->betaRadiationReading();
}

int RadiationDetector::measureGammaRadiation()
{
    std::cout << "Gamma Radiation Level: " << ptrHIR->gammaRadiationReading() << std::endl;
    return  ptrHIR->gammaRadiationReading();
}

void RadiationDetector::displayMessage(std::string message)
{
    ptrHID->printMessage(message);
}

void RadiationDetector::playMusic()
{
    ptrHIA->makeSound();
}
