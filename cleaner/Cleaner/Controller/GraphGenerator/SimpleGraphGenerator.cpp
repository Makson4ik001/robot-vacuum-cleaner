#include "SimpleGraphGenerator.h"
#include"../Geometry/Geometry.h"
std::vector<Vector2> insidePoints(std::vector<Vector2> circuit, std::vector<Vector2> const &grid) {
	std::vector<Vector2> result;
	for (size_t i = 0; i < grid.size(); i++) {
		if (contains(circuit, grid[i]) == 1 || contains(circuit, grid[i]) == -1 || contains(circuit, grid[i]) == -2) {
			result.push_back(grid[i]);
		}
	}
}
std::vector<std::vector<double>> SimpleGraphGenerator::generateGraph(std::vector<Vector2> const &grid, double radius) {
  std::vector<std::vector<double>> result; // nodeA->{nodeB}->weight
  // TODO: make graph from circuit
   


  return result;
}
