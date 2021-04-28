#include "SimClock.h"
#include "SimEngine.h"

using namespace std;

int main() {

	const int fps = 2;

	SimEngine simEngine;
	SimClock simClock;

	simEngine.Init(fps);
	simClock.Start();

	while (simEngine.Running()) {
		auto delta = simClock.Mark();
		simEngine.Update(delta);
	}
}