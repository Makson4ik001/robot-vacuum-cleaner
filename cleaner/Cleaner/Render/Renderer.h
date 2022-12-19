#pragma once
#include "Vector2.h"
#include <vector>

class Renderer {
public:
  virtual void render(std::vector<std::pair<std::size_t, double>> const &path,
                      std::vector<Vector2> const &grid, double raduis) = 0;
};
