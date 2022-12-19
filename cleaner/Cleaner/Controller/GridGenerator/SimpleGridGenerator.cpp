#include "SimpleGridGenerator.h"
#define EPS 1e-12
struct BoundingBox {
  double lPoint;
  double rPoint;
  double topPoint;
  double buttomPoint;
};

BoundingBox extremePoints(std::vector<Vector2> const &circuit, double radius) {
  double lPoint = circuit[0].x, rPoint = circuit[0].x, topPoint = circuit[0].y,
         bottomPoint = circuit[0].y;

  for (size_t i = 1; i < circuit.size(); i++) {
    if (circuit[i].x > rPoint)
      rPoint = circuit[i].x;
    if (circuit[i].x < lPoint)
      lPoint = circuit[i].x;
    if (circuit[i].y > topPoint)
      topPoint = circuit[i].y;
    if (circuit[i].y < bottomPoint)
      bottomPoint = circuit[i].y;
  }

  lPoint -= radius;
  rPoint += radius;
  topPoint += radius;
  bottomPoint -= radius;

  return {lPoint, rPoint, topPoint, bottomPoint};
}
std::vector<Vector2>
SimpleGridGenerator::generateGrid(std::vector<Vector2> const &circuit,
                                  double radius) {
  std::vector<Vector2> result;

  BoundingBox bb = extremePoints(circuit, radius);
  radius += EPS;

  for (double j = 0; j <= (bb.topPoint - bb.buttomPoint); j += radius) {
    for (double i = 0; i <= (bb.rPoint - bb.lPoint); i += radius) {
      result.push_back({bb.lPoint + i, bb.topPoint - j});
    }
  }
  return result;
}
