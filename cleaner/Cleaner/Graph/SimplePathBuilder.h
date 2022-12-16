#pragma once
#include "PathBuilder.h"

class SimplePathBuilder : public PathBuilder {
  std::vector<std::pair<std::size_t, double>>
  findPath(std::vector<std::vector<double>> const &graph) override;
};
