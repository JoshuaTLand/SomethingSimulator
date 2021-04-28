#pragma once

class SimEngine
{
public:
	void Init(int fps);
	bool Running();
	void Update(long delta);

private:
	double _runningMilis;
	bool _running;

	double _frameGapMilis;
	double _frameGapTargetMilis;

	void UpdateDisplay(long delta);
	void UpdateData(long delta);
};

