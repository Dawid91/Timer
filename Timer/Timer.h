#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#pragma once

class Timer
{
	time_t start, stop;

public:

	int current = 0;
	void go();
	void stop1();
	void count_difference();
	void show_difference();
	void reset();


};

