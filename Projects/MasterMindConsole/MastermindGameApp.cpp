// MastermindGameApp.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>

#include "MastermindUserPlays.h"
#include "MastermindAlgoPlays.h"
#include "MastermindGameApp.h"

int main()
{
    bool wIsRunning = true;
    std::cout << "Jeu de MasterMind\n";

    MastermindUserPlays wUserPlayObject;
    MastermindAlgoPlays uComputerPlayObject;
    
    while (wIsRunning)
    {
        std::cout << "Vos options\n";
        std::cout << "[1] Vous devinez la combinaison secrete\n";
        std::cout << "[2] l'algorithme tente de deviner la combinaison secrete\n"; 
        std::cout << "[3] Aide\n";
        std::cout << "[4] Quitter\n";

        std::string wAnswer = "";
        std::cin >> wAnswer;

        switch (wAnswer.at(0))
        {
        case '1':
            wUserPlayObject.play();
            break;
        case '2':
            uComputerPlayObject.play();
            break;
        case '3':
            std::cout << "Aide\n";
            std::cout << "Une combinaison comporte 4 caracteres\n";
            std::cout << "Les caracteres sont 1, 2, 3 ou 4\n";
        break;
        case '4':
            wIsRunning = false;
            break;
        };
    }
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
