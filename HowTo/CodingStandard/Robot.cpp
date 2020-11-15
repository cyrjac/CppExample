#include "Robot.h"


bool Robot::mProperty2 = true;

// But:              Contructeur par defaut.
// Parametre:        Aucun
// Valeur de retour: Aucune
// Description:      Contructeur specialise
Robot::Robot() :
    mProperty(0)
{
}

// But:              Contructeur specialise
// Parametre:        iParam1 signifie .... le suffixe i signifie que c'est un parametre d'entree. 
//                   iParam2 signifie ....
// Valeur de retour: Aucune
Robot::Robot(const int iParam1, const int iParam2) : // On met const car la variable iParam ne changera pas pendant l'execution du la fonction
    mProperty(0)
{
}
    
// But:              La fonction permet de ....
// Parametre:        iParam1 signifie   ....le suffixe i signifie que c'est un parametre d'entree. 
//                   oParamOut signifie ....le suffixe o signifie que c'est un parametre de sortie. 
//                   ioParam2 signifie  ....le suffixe io signifie que c'est un parametre d'entree/sortie.
// Valeur de retour: La signification de la valeur de retour
int Robot::compute(const int iParam, int& oParamOut, int & ioParam2)
{
    int wValeurRetour = 0;   // suffixe w car il s'agit d'une variable locale
    int wTemp = 4;           // Deconseillé: donnez toujours un nom qui signifie qques choses.
                             // Toujours initialisé une variable locale, si possible avec constante.

    if (iParam > 0)
    {
        //oParamOut = 1000;       // Mauvaise pratique: 1000 est un nombre magique. 
        oParamOut = kDelay;       // Meilleure pratique.... le code est plus lisible sans valeur magique.      
    }
    else
    {
        oParamOut = kNow;
    }    

    return wValeurRetour;
}


