#pragma once
#include <vector>
#include "../Geometry/Vector2/Vector2.h"

class Renderer {
public:
	virtual void render(std::vector<std::pair<size_t, double>>& const path,
		std::vector<Vector2> const &grid,
		double raduis) = 0;
};