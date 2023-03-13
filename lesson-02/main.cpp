#include <iostream>
using namespace std;
class Animal {
    protected:
        string spieces;
        string name;
        int age;
        Animal(string spieces, string name, int age) {
            this->name = name;
            this->spieces = spieces;
            this->age = age;
        }

    public:
        string getName() { return this->name; }
        string getSpieces() { return this->spieces; }
        int getAge() { return this->age; }
        void makeASound();
};

class Bird : public Animal {
    public:
        Bird(string name, int age) : Animal("mammal", name, age){};
        void makeASound() { cout << "cwir cwir" << endl; }
};

class Monkey : public Animal {
    public:
        Monkey(string name, int age) : Animal("mammal", name, age){};
        void makeASound() { cout << "ouugh ouugh" << endl; }
};

int main() {
    Bird bird("cwierkacz", 4);
    Monkey monkey("harambe", 21);
    cout << bird.getName() << " " << bird.getAge() << endl;
    bird.makeASound();
    cout << monkey.getName() << " " << monkey.getAge() << endl;
    monkey.makeASound();
}