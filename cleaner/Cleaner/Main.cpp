#include <iostream>
#include <vector>
#include "Geometry/Geometry.h"
#include "Geometry/Vector2/Vector2.h"
#include "Controller/GridGenerator/SimpleGridGenerator.h"
#include "Controller/GraphGenerator/SimpleGraphGenerator.h"
#include "Graph/SimplePathBuilder.h"
#include "Render/SimpleRenderer.h"
#include "Controller/Controller.h"

using namespace std;

int main() {
	//TODO: config (optional)
	SimpleRenderer srenderer;
	SimpleGraphGenerator sgraphGenerator;
	SimplePathBuilder spathBuilder;
	SimpleGridGenerator sgridGenerator;
	std::vector<Vector2> circuit = { Vector2(0, 0), Vector2(0, 10), Vector2(-10, 10), Vector2(-10, 0), Vector2(0,0) };
	double radius = 10;
	//run(circuit, &sgridGenerator, &sgraphGenerator, &spathBuilder, &srenderer, radius);
	Vector2 inside(-2, 1), outside(100, 100);
	cout << contains(circuit, inside) << " " << contains(circuit, outside);
	return 0;
}