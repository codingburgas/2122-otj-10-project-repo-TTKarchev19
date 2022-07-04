#pragma once
#include <string>
#include <vector>
#include "common.h"


struct MenuItemStruct
{
    char key;
    std::string text;
    MenuHandler handler;
};

class BaseMenu {
private:
    std::string title;
protected:
    std::vector<MenuItemStruct> items;
public:

    BaseMenu(std::string title)
    {
        this->title = title;
    }

    void show();

    void handle();
};