#include "SimplePathBuilder.h"
#include "../Controller/GraphGenerator/SimpleGraphGenerator.h"
#include <array>
magic::Adjacency_list SimplePathBuilder::makeMagicGraph(std::vector<std::array<size_t, 4>> const &graph){
  magic::Adjacency_list result(graph.size());
  for(size_t i = 0; i < graph.size(); i++){
    for(size_t j = 0; j < 4; j++){
      if(graph[i][j] == NODE_NOT_STATED)
        continue;
      result[i].push_back({graph[i][j], 1});
    }
  }
  return result;
}
std::vector<Vector2> SimplePathBuilder::makeRegularPath(magic::Path path, std::vector<Vector2> points){
  std::vector<Vector2> result;
  for(auto node: path.indices){
    result.push_back(points[node]);
  }
  return result;
}
std::vector<Vector2>
  SimplePathBuilder::findPath(std::vector<std::array<size_t, 4>> const &graph, size_t node, std::vector<Vector2> points) {
  auto mGraph = makeMagicGraph(graph);
  auto mPath = magic::compute_minimal_full_path(mGraph, node, 10000);
  return makeRegularPath(mPath, points);
}