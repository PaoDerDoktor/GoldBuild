#include "Vector.h"
#include <cmath>

Vector::Vector()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Vector::Vector(double const val)
{
    this->x = val;
    this->y = val;
    this->z = val;
}

Vector::Vector(double const x, double const y, double const z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Vector::Vector(Vector const &vect)
{
    this->x = vect.x;
    this->y = vect.y;
    this->z = vect.z;
}

Vector::~Vector()
{
    //dtor
}

std::ostream &operator<<(std::ostream &stream, Vector &vect)
{
    stream << "Vector: x=" << vect.Getx() << " // y=" << vect.Gety() << " // z=" << vect.Getz();
    return stream;
}

Vector Vector::operator+(Vector const &v) const
{
    return Vector(this->x + v.x, this->y + v.y, this->z + v.z);
}

Vector Vector::operator-(Vector const &v) const
{
    return Vector(this->x - v.x, this->y - v.y, this->z - v.z);
}

Vector Vector::operator*(double const scalar) const
{
    return Vector(this->x * scalar, this->y * scalar, this->z * scalar);
}

Vector Vector::operator/(double const scalar) const
{
    return Vector(this->x / scalar, this->y / scalar, this->z / scalar);
}

void Vector::operator+=(Vector const &v)
{
    this->x += v.x;
    this->y += v.y;
    this->z += v.z;
}

void Vector::operator-=(Vector const &v)
{
    this->x -= v.x;
    this->y -= v.y;
    this->z -= v.z;
}

void Vector::operator*=(double const scalar)
{
    this->x *= scalar;
    this->y *= scalar;
    this->z *= scalar;
}

void Vector::operator/=(double const scalar)
{
    this->x *= scalar;
    this->z *= scalar;
    this->y *= scalar;
}

Vector Vector::operator+() const
{
    return Vector(*this);
}

Vector Vector::operator-() const
{
    return Vector(- this->x, - this->y, - this->z);
}

double Vector::getLength() const
{
    return std::sqrt(std::pow(this->x, 2) + std::pow(this->y, 2) + std::pow(this->z, 2));
}

void Vector::makeUnit()
{
    double l = this->getLength();
    this->x /= l;
    this->y /= l;
    this->z /= l;
}

Vector Vector::crossProduct(Vector const &vect) const
{
    return Vector(this->y * vect.z - this->z * vect.y,
                  this->z * vect.x - this->x * vect.z,
                  this->x * vect.y - this->y * vect.x);
}

double Vector::dotProduct(Vector const &vect) const
{
    return this->x * vect.x + this->y * vect.y + this->z * vect.z;
}
