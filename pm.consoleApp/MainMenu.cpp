#include "MainMenu.h"
#include "UsersMenu.h"
#include <iostream>

using namespace std;

void MainMenu::showUsersMenu()
{
    UsersMenu um;
    um.handle();
}


void MainMenu::showProjectsMenu() { cout << "MainMenu::showProjectsMenu\n"; }

MainMenu::MainMenu() : BaseMenu("Main menu")
{
    this->items.push_back(
        { '1', "Users", (MenuHandler)&MainMenu::showUsersMenu }
    );

    this->items.push_back(
        { '2', "Projects", (MenuHandler)&MainMenu::showProjectsMenu }
    );
}