#pragma once
#include "../pm.types/User.h"
#include "../pm.bll/UserManager.h"

struct Application
{
	pm::bll::UserManager userManager;
	void run();
};