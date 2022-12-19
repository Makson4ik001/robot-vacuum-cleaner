#pragma once
#include "GridGenerator/GridGenerator.h"
#include "GraphGenerator/GraphGenerator.h"
#include "../Graph/PathBuilder.h"
#include "../Render/Renderer.h"

void run(std::vector<Vector2> circuit, GridGenerator* gridGenerator, GraphGenerator* graphGenerator, 
	PathBuilder *pathBuilder, Renderer *renderer, double radius) {
	std::vector<Vector2> baseGrid = gridGenerator->generateGrid(circuit, radius);
	std::vector<std::vector<double>> graph = graphGenerator->generateGraph(baseGrid, radius);
	std::vector<std::pair<size_t, double>> path = pathBuilder->findPath(graph);
	renderer->render(path, baseGrid, radius);
}