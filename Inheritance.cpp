#include <iostream>

using namespace std;

class Animal {
   protected:
    unsigned int age;

   public:
    Animal(unsigned int age) : age(age) {}

    // this virtual function will be overriden in Dog class
    virtual void intro() {
        cout << "I am an animal. My age is " << age << " years.\n";
    }
};

class Dog : public Animal {
   public:
    Dog(unsigned int age) : Animal(age) {}

    void intro() override {
        cout << "I am a dog. My age is " << age << " years.\n";
    }
};

int main() {
    Animal* a = new Dog(2);
    // a is pointing to a Dog instance,
    // so Dog's intro() will be called
    a->intro();
    delete a;

    a = new Animal(3);
    // now, a is pointing to an Animal instance,
    // so Dog's intro() will be called
    a->intro();
    delete a;
}
