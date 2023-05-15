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



class Waterbody {
protected:
    string name;
    float area;
public:
    Waterbody(string n, float a) : name(n), area(a) {}
    virtual ~Waterbody() {}
    virtual void print() {
        cout << "Waterbody: " << name << ", area: " << area << " sq km" << endl;
    }
};

class Bay : public virtual Waterbody {
protected:
    string bayType;
public:
    Bay(string n, float a, string t) : Waterbody(n, a), bayType(t) {}
    virtual ~Bay() {}
    virtual void print() {
        Waterbody::print();
        cout << "Bay type: " << bayType << endl;
    }
};


int main() {
    Shape* shape; 

    Parallelepiped parallelepiped(3, 4, 5); 
    shape = &parallelepiped; 
    cout << "Surface area of ​​a parallelepiped: " << shape->getSurfaceArea() << endl;

    Tetrahedron tetrahedron(3); 
    shape = &tetrahedron; 
    cout << "Surface area of ​​the tetrahedron: " << shape->getSurfaceArea() << endl;

    Sphere sphere(3); 
    shape = &sphere; 
    cout << "Surface area of ​​the sphere: " << shape->getSurfaceArea() << endl;
    
    return 0;
}
