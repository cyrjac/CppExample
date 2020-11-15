#pragma once
class Robot
{
public:
	Robot();
	Robot(const int iParam, const int iParam2);

	int compute(const int iParam, int& oParamOut, int& ioParam2);

private:
	int mProperty;            // Prefix m signifie que c'est une propriete de l'instance de la classe
	static bool mProperty2;   // Propriete partagee entre toutes les "instances des classes Robot" 
	                          // Propriete partagee entre tous les objets de type Robot.

	const int kDelay = 1000;  // Prefix k signifie que c'est une constante...
	const int kNow   = 0;     // Prefix k signifie que c'est une constante...

};

