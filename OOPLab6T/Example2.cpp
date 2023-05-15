#include "Lab6Example.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std; //  гоглг
namespace SpaceExample2 {
    // Abstract Class
// Створити абстрактний базовий клас домашня тварина із віртуальною функцією говорить. 
// Створити похідні класи: кішка, собака, корова, качка та курка. 
    using namespace std;
    class Pet {
    protected:
        string name;
        int age;
        int numberOfLegs = 0;
    public:
        Pet() : age(0), name("noname") { }
        Pet(string n, int a) : age(a), name(n) { }

        virtual string Say() = 0;
        virtual int Legs() = 0;
    };

    class Cat : public Pet {

    public:
        Cat(string n, int a) : Pet(n, a) {}
        virtual string Say() override
        {
            string rt = string("Mayu-mayu - Cat ") + name;
            return rt;
        }
        virtual int Legs() override { return 4; }
    };

    class Dog : public Pet {
    public:
        Dog(string n, int a) : Pet(n, a) {}
        virtual string Say() override
        {
            string rt = string("Gau-gau - Dog ") + name;
            return rt;
            //return "Gau-gau";
        }
        virtual int Legs() override { return 4; }

    };

    class Cow : public Pet {
    public:
        Cow(string n, int a) : Pet(n, a) {}
        virtual string Say() override
        {
            string rt = string("Mu-mu - Cow ") + name;
            return rt;
            //  return "Mu-mu";
        }
        virtual int Legs() override { return 4; }
    };

    class Duke : public Pet {
    public:
        Duke(string n, int a) : Pet(n, a) {}
        virtual string Say() override
        {
            string rt = string("Kraj-kraj - Duke ") + name;
            return rt;
            // return "Kraj-kraj";
        }
        virtual int Legs() override { return 2; }

    };
    class Chicken : public Pet {
    public:
        Chicken(string n, int a) : Pet(n, a) {}
        virtual string Say() override
        {
            string rt = string("Ko-ko - Chicken ") + name;
            return rt;
            //   return "Ko-ko";
        }
        virtual int Legs() override { return 2; }

    };
    string setNamePets() {
        string name;
        int r1 = 1, r2 = 0;
        string n1[7] = { "Ro",  "Bo",   "Sor",  "Muri", "Cusi", "Duri", "Zo" };
        string n2[7] = { "ko",  "no",   "vik",  "ro",   "mo",   "zo",   "vo" };
        r1 = rand() % 6;
        r2 = rand() % 6;
        name = n1[r1] + n2[r2];
        return name;
    }
    int mainExample2()
    {
        
        cout << "Example 2 \n";
        Pet** masPets;
        int n = 0, type = 1;
        int age = 0;
        string name;
        do {
            cout << "How many pets \n";
            cin >> n;
        } while (n <= 0 || n > 100);
        masPets = new Pet * [n];
        cout << " input random pets press 1 <enter> ";
        int rn;
        srand(n);
        cin >> rn;
        for (int i = 0; i < n; i++) {
            if (rn == 1) {
                type = 1 + rand() % 5;
                age = rand() % 20;
                name = setNamePets();
            }
            else {
                do {
                    cout << "Input:  \n";
                    cout << "1 - if it is a cat \n";
                    cout << "2 - if it is a dog \n";
                    cout << "3 - if it is a cow \n";
                    cout << "4 - if it is a duke \n";
                    cout << "5 - if it is a chicken \n";
                    cin >> type;
                } while (type < 1 || type>5);
                cout << "Input name : "; cin >> name;
                cout << "Input age of the animal "; cin >> age;
            }
            switch (type) {
            case 1: masPets[i] = new Cat(name, age); break;
            case 2: masPets[i] = new Dog(name, age); break;
            case 3: masPets[i] = new Cow(name, age); break;
            case 4: masPets[i] = new Duke(name, age); break;
            case 5: masPets[i] = new Chicken(name, age); break;
            }
        }

        cout << " Singing pets : \n ";
        int numleg = 0;
        for (int i = 0; i < n; i++) {
            cout << masPets[i]->Say() << endl;
            numleg += masPets[i]->Legs();
        }
        cout << "The number of legs in pets : " << numleg << endl;
        cin.get();
        return 0;
    }


}