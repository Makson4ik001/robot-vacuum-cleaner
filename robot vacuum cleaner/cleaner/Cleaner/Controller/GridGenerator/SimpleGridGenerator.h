#pragma once
#include "GridGenerator.h"

class SimpleGridGenerator : public GridGenerator {
	std::vector<Vector2> generateGrid(std::vector<Vector2> const &circuit, double radius) override;
};