#include <print>

class Wektor2D
{
public:
    Wektor2D(double poz = 0, double pion = 0)
    {
        x = poz;
        y = pion;
    }
    ~Wektor2D() {}
    void setX(double a) { x = a; }
    double  getX() { return x; }
    void setY(double a) { y = a; }
    double  getY() { return y; }
 private:
    double x, y;
};

Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
    return Wektor2D(v2.getX() + v1.getX(), v2.getY() + v1.getY());
}
double operator*(Wektor2D v1, Wektor2D v2)
{
    return ((v2.getX() * v1.getX()) + (v2.getY() * v1.getY()));
}