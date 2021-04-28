#pragma once
#include <chrono>

using namespace std::chrono;

class SimClock
{

public:
	void Start();
	long Mark();

private:
	steady_clock::time_point _point;

};

