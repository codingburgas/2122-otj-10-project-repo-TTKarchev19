#include "BaseMenu.h"
#include <iostream>
#include <conio.h>

using namespace std;

void BaseMenu::show()
{
    cout << ".:: " << this->title << " ::.\n";

    for (auto menuItem : items)
    {
        cout << menuItem.key << ". " << menuItem.text << "\n";
    }
};

void BaseMenu::handle()
{
    int choice = 0;
    while (true)
    {
        system("cls");
        this->show();

        choice = _getch();

        auto mi = find_if(this->items.begin(), this->items.end(),
            [&](MenuItemStruct menuItem)
        {
            return menuItem.key == choice;
        });

        if (mi == this->items.end())
        {
            break;
        }

        std::invoke((*mi).handler, this);
    }

};