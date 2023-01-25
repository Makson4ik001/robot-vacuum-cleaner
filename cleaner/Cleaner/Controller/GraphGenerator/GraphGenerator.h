#pragma once
#include "Vector2.h"
#include <vector>

class GraphGenerator {
public:
  virtual std::pair<std::vector<std::array<size_t, 4>>, std::vector<Vector2>>
  generateGraph(std::vector<Vector2> const& grid, 
    std::vector<Vector2> const& circuit, double radius) = 0;
};
