#pragma once
#include <vector>
#include "../../Geometry/Vector2/Vector2.h"

class GraphGenerator {
public:
	virtual std::vector<std::vector<double>> generateGraph(std::vector<Vector2> const &grid, double radius) = 0;
};