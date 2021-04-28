#include "SimClock.h"

void SimClock::Start() {
	_point = high_resolution_clock::now();
}

long SimClock::Mark() {
	auto now = high_resolution_clock::now();
	auto delta = duration_cast<nanoseconds>(now - _point);
	_point = now;
	return (long)delta.count();
}

