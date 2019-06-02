#ifndef POINT_H
#define POINT_H

#include <iostream>
#include "Vector.h"

class Point
{
    public:
        Point();
        Point(double const v);
        Point(double const x, double const y, double const z);
        virtual ~Point();
        Point(const Point& other);

        double Getx() { return x; } const
        void Setx(double const val) { x = val; }
        double Gety() { return y; } const
        void Sety(double const val) { y = val; }
        double Getz() { return z; } const
        void Setz(double const val) { z = val; }

        friend std::ostream &operator<<(std::ostream &stream, Point &pt);

        Vector getVectorTo(Point const &p) const;
        Vector getVectorFrom(Point const &p) const;

    private:
        double x;
        double y;
        double z;
};

#endif // POINT_H
