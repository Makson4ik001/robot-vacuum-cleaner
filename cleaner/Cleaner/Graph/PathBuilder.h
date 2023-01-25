#pragma once
#include <vector>
#include "Vector2/Vector2.h"

class PathBuilder {
public:
  virtual std::vector<Vector2>
  findPath(std::vector<std::array<size_t, 4>> const &graph, size_t node, 
           std::vector<Vector2> points) = 0;
};
