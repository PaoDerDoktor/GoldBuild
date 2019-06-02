#ifndef RAY_H
#define RAY_H


class Ray
{
    public:
        Ray();
        Ray(Point origin, Vector direction, double min_t, double max_t);
        virtual ~Ray();

        Point Getorigin() const { return origin; }
        void Setorigin(Point const val) { origin = val; }
        Point Getdirection() const { return direction; }
        void Setdirection(Point const val) { direction = val; }
        double Getmin_t() const { return min_t; }
        void Setmin_t(double const val) { min_t = val; }
        double Getmax_t() const { return max_t; }
        void Setmax_t(double const val) const { max_t = val; }

        void


    private:
        Point origin;
        Point direction;
};

#endif // RAY_H
