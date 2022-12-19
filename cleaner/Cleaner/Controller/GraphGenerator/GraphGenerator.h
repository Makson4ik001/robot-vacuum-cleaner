#pragma once
#include "Vector2.h"
#include <vector>

class GraphGenerator {
public:
  virtual std::vector<std::vector<double>>
  generateGraph(std::vector<Vector2> const &grid, double radius) = 0;
};
