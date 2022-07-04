#include "UsersMenu.h"
#include "common.h"
#include <string>
#include <iostream>

using namespace std;

void UsersMenu::showUsers() 
{ 
    cout << "UsersMenu::showUsers\n"; 
}

UsersMenu::UsersMenu() : BaseMenu("Users menu")
{
    this->items.push_back(
        { '1', "Show users", (MenuHandler)&UsersMenu::showUsers }
    );
}
