
#include <Arduino.h>
#include "sensor_voltage.h"
#include "../response.h"

namespace Sensor {
	void Voltage::update() {
		int raw = analogRead(pin);
		Response::sensor_voltage(raw);
	}
}