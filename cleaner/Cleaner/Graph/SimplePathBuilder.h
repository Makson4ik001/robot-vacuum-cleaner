#pragma once
#include "PathBuilder.h"
#include "magic.h"

class SimplePathBuilder : public PathBuilder {
public:
  std::vector<Vector2>
  findPath(std::vector<std::array<size_t, 4>> const &graph, size_t node, std::vector<Vector2> points) override;
private:
  magic::Adjacency_list makeMagicGraph(std::vector<std::array<size_t, 4>> const &graph);
  std::vector<Vector2> makeRegularPath(magic::Path path, std::vector<Vector2> points);
};
