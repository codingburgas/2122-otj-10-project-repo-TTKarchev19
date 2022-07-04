#include <iostream>
#include "../pm.types/User.h"
#include "../pm.bll/UserManager.h"
#include "pm.consoleApp.h"
#include <iomanip>
#include <ios>
#include "Application.h"
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <ctime>
#include <conio.h>
#include "BaseMenu.h"
#include "MainMenu.h"

pm::bll::UserManager userManager;
using namespace std;

void registerUser()
{
    std::string firstName, lastName, email, password;
    int age;

    std::cout << "First name: ";
    std::cin >> firstName;

    std::cout << "Last name: ";
    std::cin >> lastName;

    std::cout << "Age: ";
    std::cin >> age;

    std::cout << "Email: ";
    std::cin >> email;

    std::cout << "Password: ";
    std::cin >> password;

    userManager.registerUser(firstName, lastName, age, email, password);
}

void listRegisteredUsers()
{
    auto users = userManager.getRegisteredUsers();
    std::cout << "-----\n";
    for (auto user : users)
    {
        std::cout << user.id << " " << user.firstName 
            << " " << user.lastName << " " << user.email 
            << " " << std::hex << user.passwordHash << std::endl;
    }
}

int sum(int a, int b) 
{
    return 0;
}
float sum(float a, float b)
{
    return 0.0f;
}

struct Foo
{
    int a;
    bool b;
    short int c;
};

struct UserStruct
{
    size_t id;
    char name[100];
    bool isEnabled;
};

class Car
{
private:
    // Engine
    bool leftBlinker;
    bool rightBlinker;
public:
    Car(int initialState) : leftBlinker(initialState), rightBlinker(initialState)
    {
        //leftBlinker = false;
        
    }
    void Start() {};
    void Stop() {};
    void TurnLeft() {};
};

class Animal
{
public:
    int cuteness;
    string name;

    void virtual makeSound() 
    {
        cout << "I'm an animal\n";
    };
};

class Cat : public Animal
{
public: 
    int livesCount;

    void makeSound()
    {
        cout << "I'm the cat " << this->name << "\n";
    };
};

class Dog : public Animal
{
public:
    string furrColor;

    void makeSound()
    {
        cout << "I'm the dog " << this->name << "\n";
    };
};






int main()
{

    
    MainMenu* bm1 = new MainMenu();
    //BaseMenu* menus[10]{ new MainMenu(), new UsersMenu() };

    
    bm1->handle();
    
    return 0;

    // TODO: make variables to be pointers
    Animal a1;
    a1.cuteness = 5;
    a1.name = "Animal1";

    Cat cat1;
    cat1.cuteness = 7;
    cat1.name = "Oscar";

    Dog dog1;
    dog1.cuteness = 9;
    dog1.name = "Ray";

    a1.makeSound();
    cat1.makeSound();
    dog1.makeSound();

    Animal a2 = dog1;
    a2.makeSound();

    Animal animalKingdom[3]{ a1, cat1, dog1 };

    



    //float f = 5.2e1;

    //int i = static_cast<int>(f);



    //Car car1(false);
    //
    //int a(42); // int a = 42;

    ////Application app;

    ////app.run();



    //registerUser();

    //userManager.seedDatabase();
    //auto users = userManager.getRegisteredUsers();

    //listRegisteredUsers();

    //users[1].firstName = "Foo";

    //userManager.updateUser(users[1]);

    ////userManager.removeUser(2);

    //listRegisteredUsers();


    //string s1 = "1,Ivan,Ivanov,iivanov@my.lab,17,HASH1,CreatedOn1";
    //stringstream ss(s1);
    //string token;

    //while (getline(ss, token, ','))
    //{
    //    //cout << token << " | ";
    //}

    ////istream_iterator<string> ii(s1);

    //string str(10, 'F');

    //cout << str << endl;

    
}
