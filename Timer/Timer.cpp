#include "stdafx.h"
#include "Timer.h"
#include <conio.h>
#include <time.h>
#include <cstdlib>

using namespace std;


void Timer::go()
{
	time(&start);
};

void Timer::stop1()
{
	time(&stop);
};

void Timer::count_difference()
{
	current += difftime(stop, start);
};

void Timer::reset()
{
	current = 0;
};


