#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector
{
    public:
        Vector();
        Vector(double val);
        Vector(double const x, double const y, double const z);
        Vector(Vector const &vect);
        virtual ~Vector();

        double const Getx() { return x; }
        void Setx(double const val) { x = val; }
        double const Gety() { return y; }
        void Sety(double const val) { y = val; }
        double const Getz() { return z; }
        void Setz(double const val) { z = val; }

        friend std::ostream &operator<<(std::ostream &stream, Vector &vect);

        Vector operator+(Vector const &v) const;
        Vector operator-(Vector const &v) const;
        Vector operator*(double const scalar) const;
        Vector operator/(double const scalar) const;

        void operator+=(Vector const &v);
        void operator-=(Vector const &v);
        void operator*=(double const scalar);
        void operator/=(double const scalar);

        Vector operator+() const;
        Vector operator-() const;

        void makeUnit();
        Vector getUnit();

        double getLength() const;

        Vector crossProduct(Vector const &vect) const;
        double dotProduct(Vector const &vect) const;

    private:
        double x;
        double y;
        double z;
};

#endif // VECTOR_H
