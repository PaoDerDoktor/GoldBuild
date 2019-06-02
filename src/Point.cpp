#include "Point.h"

Point::Point() {
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Point::Point(double const v) {
    this->x = v;
    this->y = v;
    this->z = v;
}

Point::Point(double const x, double const y, double const z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Point::~Point()
{
    //dtor
}

Point::Point(const Point& other)
{
    this->x = other.x;
    this->y = other.y;
    this->z = other.z;
}

std::ostream &operator<<(std::ostream &stream, Point &pt) {
    stream << "Point: x=" << pt.Getx() << " // y=" << pt.Gety() << " // z=" << pt.Getz();
}

Vector Point::getVectorTo(Point const &p) const
{
    return Vector(p.x - this->x, p.y - this->y, p.z - this->z);
}

Vector Point::getVectorFrom(Point const &p) const
{
    return Vector(this->x - p.x, this->y - p.y, this->z - p.z);
}
