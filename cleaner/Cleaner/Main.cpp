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
  std::vector<Vector2> circuit = {Vector2(0, 0), Vector2(2, -1), Vector2(1, 0),
                                  Vector2(2, 2), Vector2(0, 0)};
  double radius = 10;
  // run(circuit, &sgridGenerator, &sgraphGenerator, &spathBuilder, &srenderer,
  // radius);
  Vector2 inside(0.5, 0), outside(1.2, 0.1);
  int expectedTrue = contains(circuit, inside),
      expectedFalse = contains(circuit, outside);
  cout << expectedTrue << " " << expectedFalse;
  return 0;
}
