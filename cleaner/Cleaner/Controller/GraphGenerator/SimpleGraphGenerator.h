#pragma once
#include "GraphGenerator.h"
#include <unordered_map>
#include <array>

const size_t NODE_NOT_STATED = (size_t)-1;

class SimpleGraphGenerator : public GraphGenerator {
private:
	double radius;
	std::vector<Vector2> grid;
	std::vector<Vector2> circuit;
	std::pair<std::vector<std::array<size_t, 4>>, std::vector<Vector2>> SimpleGraph();
	std::unordered_map<Vector2, size_t> coolPoints();
	std::vector<Vector2> insidePoints();
public:
	std::pair<std::vector<std::array<size_t, 4>>, std::vector<Vector2>>
		generateGraph(std::vector<Vector2> const& grid, std::vector<Vector2> const& circuit, double radius) override;
};
