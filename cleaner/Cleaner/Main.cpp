#include "Controller/Controller.h"
#include "Controller/GraphGenerator/SimpleGraphGenerator.h"
#include "Controller/GridGenerator/SimpleGridGenerator.h"
#include "Geometry/Geometry.h"
#include "Graph/SimplePathBuilder.h"
#include "Render/SimpleRenderer.h"
#include "Vector2.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  // TODO: config (optional)
  SimpleRenderer srenderer;
  SimpleGraphGenerator sgraphGenerator;
  SimplePathBuilder spathBuilder;
  SimpleGridGenerator sgridGenerator;
  std::vector<Vector2> circuit = { Vector2(0, 0), Vector2(15, -1), Vector2(17, 5),
                                  Vector2(20, 13), Vector2(16, 10), Vector2(7, 18), Vector2(4, 20)};
  double radius = 5;
  // run(circuit, &sgridGenerator, &sgraphGenerator, &spathBuilder, &srenderer,
  // radius);
  Vector2 inside(10,5), outside(16,16);
  int expectedTrue = contains(circuit, inside),
      expectedFalse = contains(circuit, outside);
  cout << expectedTrue << " " << expectedFalse<<'\n';

  vector<Vector2> grid = sgridGenerator.generateGrid(circuit, radius);
  for (size_t i = 0; i < grid.size(); i++) {
	  cout << grid[i].x << " " << grid[i].y << '\n';
  }
  return 0;
}
