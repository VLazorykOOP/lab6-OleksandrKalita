#include "Lab6Example.h"
#include <iostream>
#include <string>
using namespace std;
namespace SpaceExample3 {
    // MultipleiInherance.cpp 
// Ієрархія типів складається з сутностей: 
// машина, пасажирський транспорт і автобус.
//


    class Car {
    protected:
        string marka;
        float power;
        int numberOfWheels;
    public:
        Car() : marka("Neoplan"), power(5.2f), numberOfWheels(6) {
        }
        Car(string m, float p, int nw) : marka(m), power(p), numberOfWheels(nw) {
        }
        string getMarka() { return marka; }
        void setMarka(string m) { marka = m; }
        float getPower() {
            return power;
        }
        void setPower(float p) {
            power = p;
        }
        int getNumberOfWheels() {
            return numberOfWheels;
        }
        void setNumberOfWheels(int n) {
            numberOfWheels = n;
        }
        string toString() {
            string r = marka + "\t" + to_string(power) + "\t" + to_string(numberOfWheels) + "\t";
            return r;
        }
    };

    class PassengerTransport {
    protected:
        int flightNumber;
        int numberOfPassengerSeats;
    public:
        PassengerTransport() : flightNumber(101), numberOfPassengerSeats(45) {}
        PassengerTransport(int f, int n) : flightNumber(f), numberOfPassengerSeats(n) {}
        int  getFlightNumber() { return flightNumber; }
        void setFlightNumber(int f) { flightNumber = f; }
        int getNumberOfPassengerSeats() { return numberOfPassengerSeats; }
        void setnumberOfPassengerSeats(int n) { numberOfPassengerSeats = n; }
        string toString() {
            string r = to_string(flightNumber) + "\t" + to_string(numberOfPassengerSeats) + "\t";
            return r;
        }
    };
    class AutoBus : public Car, public  PassengerTransport
    {
        string busRoute;
    public:
        AutoBus() : busRoute("Kyiv-Chernivci") {}
        AutoBus(string m, float p, int nw, int f, int n, string bs)
            : Car(m, p, nw), PassengerTransport(f, n), busRoute(bs) {}
        string getbusRoute() {
            return busRoute;
        }
        void setbusRoute(string bs) { busRoute = bs; }

        string toString() {
            string r = Car::toString() + PassengerTransport::toString() + busRoute;
            return r;
        }
    };

    int mainExample3()
    {
        AutoBus def;
        AutoBus lvCh("Iveko", 6.2f, 6, 301, 40, "Lviv-Chernivci");
        AutoBus* pVnCn = new AutoBus();
        pVnCn->setMarka("Ikarus");
        pVnCn->setPower(7.2f);
        pVnCn->setNumberOfWheels(6);
        pVnCn->setFlightNumber(403);
        pVnCn->setnumberOfPassengerSeats(42);
        pVnCn->setbusRoute("Vinnicya-Chernivci");

        cout << def.toString() << endl;
        cout << lvCh.toString() << endl;
        cout << pVnCn->toString() << endl;
        return 0;
    }


}