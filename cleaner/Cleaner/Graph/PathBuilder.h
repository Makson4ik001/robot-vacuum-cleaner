#pragma once
#include <vector>

class PathBuilder {
public:
	virtual std::vector<std::pair<size_t, double>> findPath(std::vector<std::vector<double>> const &graph) = 0;
};