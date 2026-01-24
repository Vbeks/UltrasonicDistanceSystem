#include "controller/distance_controller.h"

DistanceController controller;

void setup() {
  controller.init();
}

void loop() {
  controller.run();
}
