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
  std::vector<Vector2> circuit = {Vector2(0, 0), Vector2(0, 10),
                                  Vector2(-10, 10), Vector2(-10, 0),
                                  Vector2(0, 0)};
  double radius = 10;
  // run(circuit, &sgridGenerator, &sgraphGenerator, &spathBuilder, &srenderer,
  // radius);
  Vector2 inside(-2, 1), outside(100, 100);
  cout << "alive" << endl;
  cout << contains(circuit, inside) << " " << contains(circuit, outside);
  return 0;
}
