#ifndef DISTANCE_CONTROLLER_H
#define DISTANCE_CONTROLLER_H

#include "../model/distance_model.h"
#include "../view/led_view.h"

class DistanceController {
  private:
    DistanceModel model;
    LedView view;

  public:
    void init() {
      // Initialize pins here
    }

    void run() {
      long duration = 0; // simulated sensor reading
      long distance = model.calculateDistance(duration);
      view.showFar();
    }
};

#endif
