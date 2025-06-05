#include <stdio.h>
#include <stdint.h>

uint8_t sensorDeger = 0b01001001;

// Sensor sırası: 87654321

typedef enum {
	SENSOR1 = 1,
	SENSOR2 = 2,
	SENSOR3 = 4,
	SENSOR4 = 8,
	SENSOR5 = 16,
	SENSOR6 = 32,
	SENSOR7 = 64,
	SENSOR8 = 128
}sensorMaske;

void sensorOku(sensorMaske sensor) {
	if (sensorDeger & sensor) {
		printf("Sensor acik. \n");
	} else {
		printf("Sensor kapali. \n");
	}
}

int main(void) {
	sensorOku(SENSOR1);
	sensorOku(SENSOR2);
	sensorOku(SENSOR3);
	sensorOku(SENSOR4);
	sensorOku(SENSOR5);
	sensorOku(SENSOR6);
	sensorOku(SENSOR7);
	sensorOku(SENSOR8);
	return 0;
}
