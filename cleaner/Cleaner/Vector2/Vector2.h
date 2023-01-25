#pragma once
#include <cmath>
#include <ostream>

class Vector2 {
public:
  double x, y;
  Vector2();
  Vector2(double x, double y);
  Vector2(Vector2 const &other);
  Vector2(Vector2 &&other);
  double dotProduct(Vector2 const &other) const;
  double crossProduct(Vector2 const &other) const;
  double lenght() const;
  Vector2 operator+(Vector2 const &other) const;
  Vector2 operator-(Vector2 const &other) const;
  Vector2 operator*(double other) const;
  Vector2 operator/(double other) const;
  Vector2 &operator=(Vector2 const &other);
  bool& operator==(Vector2 const& other) const;
};

std::ostream &operator<<(std::ostream &out, Vector2 v);
template<>
struct std::hash<Vector2> {
	std::size_t operator()(Vector2 v) const {
		return std::hash<double>(v.x) ^ std::hash<double>(v.y);
	}
};
