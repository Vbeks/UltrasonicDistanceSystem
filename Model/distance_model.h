#ifndef DISTANCE_MODEL_H
#define DISTANCE_MODEL_H

class DistanceModel {
  public:
    long calculateDistance(long duration) {
      return duration * 0.034 / 2;
    }
};

#endif
