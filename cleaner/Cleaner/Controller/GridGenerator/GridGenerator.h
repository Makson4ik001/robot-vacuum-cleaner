#pragma once
#include "Vector2.h"
#include <vector>

class GridGenerator {
public:
  virtual std::vector<Vector2> generateGrid(std::vector<Vector2> const &circuit, double radius) = 0;
};
