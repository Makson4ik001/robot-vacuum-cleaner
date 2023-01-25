#include "SimpleGraphGenerator.h"
#include "../Geometry/Geometry.h"
#include <unordered_map>
bool isGoodPoint(std::vector<Vector2> const& circuit, Vector2 point) {
	return contains(circuit, point) == 1 || contains(circuit, point) == -1 || contains(circuit, point) == -2;
}

std::vector<Vector2> SimpleGraphGenerator::insidePoints() {
	std::vector<Vector2> result;
	for (size_t i = 0; i < grid.size(); i++) {
		if (isGoodPoint(circuit, grid[i])) {
			result.push_back(grid[i]);
		}
	}
	return result;
}

std::unordered_map<Vector2, size_t> SimpleGraphGenerator::coolPoints() {
	std::unordered_map<Vector2, size_t> result;
	std::vector<Vector2> iPoints = insidePoints();
	size_t count = 0;
	for (auto cool : iPoints) {
		std::vector<Vector2> ccircuit({
			Vector2(cool.x - radius, cool.y + radius),
			Vector2(cool.x, cool.y + radius),
			Vector2(cool.x + radius, cool.y + radius),
			Vector2(cool.x + radius, cool.y),
			Vector2(cool.x + radius, cool.y - radius),
			Vector2(cool.x, cool.y - radius),
			Vector2(cool.x - radius, cool.y - radius),
			Vector2(cool.x - radius, cool.y)
		});
		bool broken = false;
		for (auto tmp : ccircuit) {
			if (isGoodPoint(circuit, tmp))
				continue;
			broken = true;
			break;
		}
		if (broken)
			continue;
		for (auto tmp : circuit) {
			if (!isGoodPoint(ccircuit, tmp))
				continue;
			broken = true;
			break;
		}
		if (broken)
			continue;
		result[cool] = count++;
	}
	return result;
}

std::pair<std::vector<std::array<size_t, 4>>, std::vector<Vector2>> SimpleGraphGenerator::SimpleGraph() {
	auto cools = coolPoints();
	std::vector<std::array<size_t, 4>> result(cools.size());
	std::vector<Vector2> points;
	size_t i = 0;
	for (auto &&[point, id] : cools) {
		Vector2 top = { point.x, point.y + radius }, right = { point.x + radius, point.y },
			bottom = { point.x, point.y - radius }, left = { point.x - radius, point.y };

		if (cools.find(top) != cools.end()) 
			result[i][0] = cools[top];
		else 
			result[i][0] = NODE_NOT_STATED;
		
		if (cools.find(right) != cools.end())
			result[i][1] = cools[right];
		else
			result[i][1] = NODE_NOT_STATED;

		if (cools.find(bottom) != cools.end())
			result[i][2] = cools[bottom];
		else
			result[i][2] = NODE_NOT_STATED;

		if (cools.find(left) != cools.end())
			result[i][3] = cools[left];
		else
			result[i][3] = NODE_NOT_STATED;
		points.push_back(point);
		i++;
	}
	return {result, points};
}

std::pair<std::vector<std::array<size_t, 4>>, std::vector<Vector2>> SimpleGraphGenerator::generateGraph(std::vector<Vector2> const& grid,
	std::vector<Vector2> const& circuit, double radius) {
  this->grid = grid;
  this->radius = radius;
  this->circuit = circuit;

  auto result = SimpleGraph();

  return result;
}
