#include "Robot.h"

int main(int** iParam, int iLength)
{
	Robot wRobot;
	int wParam1 = 0;
	int wParam2 = 0;
	int wParam3 = 0;

	int wValRet = wRobot.compute(wParam1, wParam2, wParam3);

	return wValRet;
}