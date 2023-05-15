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
};

class Tetrahedron : public Shape {
public:
  double side;
  Tetrahedron(double s) {
    side = s;
  }
};

class Sphere : public Shape {
public:
  double radius;
  Sphere(double r) {
    radius = r;
  }
};

int main() {


    return 0;
}
