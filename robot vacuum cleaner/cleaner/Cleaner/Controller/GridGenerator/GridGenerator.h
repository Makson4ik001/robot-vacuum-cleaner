#pragma once
#include <vector>
#include "../../Geometry/Vector2/Vector2.h"

class GridGenerator {
public:
	virtual std::vector<Vector2> generateGrid(std::vector<Vector2> const &circuit, double radius) = 0;
};
