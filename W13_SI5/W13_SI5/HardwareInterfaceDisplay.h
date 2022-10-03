#pragma once
#include <string>
class HardwareInterfaceDisplay
{
public:

	virtual void printMessage(const std::string message) const = 0;
};

