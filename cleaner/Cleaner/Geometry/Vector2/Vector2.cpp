#include "Vector2.h"

Vector2::Vector2() {
	x = y = 0;
}

Vector2::Vector2(double x, double y) : x(x), y(y) {}

Vector2::Vector2(Vector2 const& other) : x(other.x), y(other.y) {}
Vector2::Vector2(Vector2&& other) : x(other.x), y(other.y) {}

double Vector2::dotProduct(Vector2 const& other) const{
	return x * other.x + y * other.y;
}

double Vector2::crossProduct(Vector2 const& other) const{
	return  (x * other.y) - y * other.x;
}

double Vector2::lenght() {
	return (sqrt(dotProduct(*this)));
}

Vector2 Vector2::operator*(double other) const{
	
	return Vector2(x * other, y * other);
}

Vector2 Vector2::operator+(Vector2 const& other) const{
	return Vector2(x + other.x, y + other.y);
}

Vector2 Vector2::operator-(Vector2 const& other) const{
	return Vector2(*this + (other * (-1.)));
}

Vector2 Vector2::operator/(double other) const {
	return Vector2(*this * (1 / other));
}

Vector2& Vector2::operator=(Vector2 const& other) {
	x = other.x;
	y = other.y;
	return *this;
}


std::ostream& operator<<(std::ostream& out, Vector2 v) {
	out << "{x: " << v.x << ", y: " << v.y << " }";
	return out;
}