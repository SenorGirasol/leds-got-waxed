#ifndef _DIP_CONFIG_H
#define _DIP_CONFIG_H
#include <inttypes.h>
#include <Arduino.h>

class DipConfig
{
public:
	DipConfig(uint8_t _latchPin, uint8_t _clkPin, uint8_t _dataPin);
	uint16_t get();
	inline uint8_t isTestMode() {
		return 0 != (get() & (uint16_t)(1 << 11));
	};
private:
	uint8_t latchPin;	
	uint8_t clkPin;	
	uint8_t dataPin;	
};

#endif