#pragma once
#include "Renderer.h"

class SimpleRenderer : public Renderer {
public:
  void render(std::vector<std::pair<size_t, double>> const &path,
              std::vector<Vector2> const &grid, double raduis) override;
};
