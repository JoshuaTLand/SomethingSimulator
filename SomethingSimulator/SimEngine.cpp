#include "SimEngine.h"
#include <iostream>

void SimEngine::Init(int fps) {
	_runningMilis = 0;
	_running = true;

	// Absract this away to the display class
	_frameGapMilis = 0;
	_frameGapTargetMilis = (1 / (double)fps) * 1000.0;
}

bool SimEngine::Running() {
	return _running;
}

void SimEngine::Update(long delta) {
	auto milis = (delta * 1.0e-6);
	_runningMilis += milis;
	_frameGapMilis += milis;

	UpdateData(delta);

	if (_frameGapMilis > _frameGapTargetMilis) {
		UpdateDisplay(delta);
		_frameGapMilis = 0.0;
	}
}

void SimEngine::UpdateDisplay(long delta) {
	system("cls");
	printf("Time Delta: %i\n", delta);
	printf("Time Total: %.2f\n", _runningMilis);
	printf("\r");
}

void SimEngine::UpdateData(long delta) {
	return;
}
