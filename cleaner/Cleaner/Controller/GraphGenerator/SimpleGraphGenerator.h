#pragma once
#include "GraphGenerator.h"

class SimpleGraphGenerator : public GraphGenerator {
public:
  std::vector<std::vector<double>>
  generateGraph(std::vector<Vector2> const &grid, double radius) override;
};
