#include <iostream>
#include <cmath>
using namespace std;


class Shape {
public:
    virtual double getSurfaceArea() = 0; 
};


class Parallelepiped : public Shape {
public:
    double  width, height;
    Parallelepiped( double w, double h) {
        width = w;
        height = h;
    }
    double getSurfaceArea() {
        return 6 * width * height;
    }
};

class Tetrahedron : public Shape {
public:
    double side;
    Tetrahedron(double s) {
        side = s;
    }
    double getSurfaceArea() {
        return pow(side, 2) * pow(3.14159, 3);
    }
};

class Sphere : public Shape {
public:
    double radius;
    Sphere(double r) {
        radius = r;
    }
    double getSurfaceArea() {
        return 4 * 3.14159 * pow(radius, 2);
    }
};


int main() {


    return 0;
}
