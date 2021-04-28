#include <stdio.h>
#include <iostream>
#include <chrono>
#include <windows.h>
#include "SimClock.h"
#include "SimEngine.h"

using namespace std;

int main() {

	const int fps = 5;

	SimEngine simEngine;
	SimClock simClock;

	simEngine.Init(fps);
	simClock.Start();

	while (simEngine.Running()) {
		auto delta = simClock.Mark();
		simEngine.Update(delta);
	}
}