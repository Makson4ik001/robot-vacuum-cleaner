#pragma once
#include "GridGenerator/GridGenerator.h"
#include "GraphGenerator/GraphGenerator.h"
#include "../Graph/PathBuilder.h"
#include "../Render/Renderer.h"

void run(std::vector<Vector2> circuit, GridGenerator* gridGenerator, GraphGenerator* graphGenerator, 
	PathBuilder *pathBuilder, Renderer *renderer, double radius) {
	std::vector<Vector2> baseGrid = gridGenerator->generateGrid(circuit, radius);
	auto graph = graphGenerator->generateGraph(baseGrid, circuit, radius);
	size_t nodeToBegin = 0;
	std::vector<Vector2> path = pathBuilder->findPath(graph.first, 0, graph.second);
	renderer->render(path, baseGrid, radius);
}