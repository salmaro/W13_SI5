#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../W13_SI5/HardwareInterfaceAudio.h"
#include "../W13_SI5/HardwareInterfaceDisplay.h"
#include "../W13_SI5/HardwareInterfaceRadiator.h"
#include "../W13_SI5/RadiationDetector.h"
#include "MockHIRadiaitor.h"
#include "MockHIDisplay.h"
#include "MockHIAudio.h"

#include<memory>



class TestMockHIRadaition : public testing::Test {

public:
	std::shared_ptr<MockHIRadiaitor> ptrMockObj = std::make_shared<MockHIRadiaitor>();
};

class TestMockHIDispaly : public testing::Test {

public:
	std::shared_ptr<MockHIDisplay> ptrMockObj = std::make_shared<MockHIDisplay>();
};

TEST_F(TestMockHIRadaition, TestAlphaRadiaiton) {

	EXPECT_CALL(*ptrMockObj, alphaRadiationReading()).Times(2).WillRepeatedly(testing::Return(5));
	RadiationDetector rdObejct(ptrMockObj);
	int alpha = rdObejct.measureAlphaRadiation();
}

TEST_F(TestMockHIRadaition, TestBetaRadiation) {

	EXPECT_CALL(*ptrMockObj, betaRadiationReading()).Times(2).WillRepeatedly(testing::Return(10));
	RadiationDetector rdObejct(ptrMockObj);
	int beta = rdObejct.measureBetaRadiation();
}

TEST_F(TestMockHIRadaition, TestGammaRadiation) {

	EXPECT_CALL(*ptrMockObj, gammaRadiationReading()).Times(2).WillRepeatedly(testing::Return(15));
	RadiationDetector rdObejct(ptrMockObj);
	int beta = rdObejct.measureGammaRadiation();
}

TEST_F(TestMockHIDispaly, test1) {

	EXPECT_CALL(*ptrMockObj, printMessage("Message")).Times(1);
	RadiationDetector rdObject(ptrMockObj);
	rdObject.displayMessage("Message");
}


TEST(TestMockHIAudio, test1) {

	//MockHIAudio mockObj;
	std::shared_ptr<MockHIAudio> ptrMockObj = std::make_shared<MockHIAudio>();
	EXPECT_CALL(*ptrMockObj, makeSound()).Times(1);

	RadiationDetector rdObject(ptrMockObj);
	rdObject.playMusic();
}