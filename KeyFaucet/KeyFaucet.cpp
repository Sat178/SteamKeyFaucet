#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <cstdlib>

class Vars {
    public:
    int genAmount;
    void genAsk() {
        
        do {
            system("CLS"); // Clear console
            std::cout << "How many keys to generate: ";
            std::cin >> genAmount;
        }

        while (genAmount == 0); // If input <= 0, ask again.
    }

    char upAlphabet[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
    char Numbers[10] = { '0','1','2','3','4','5','6','7','8','9' };

    void genNumber() {
        int rndChoice = rand() % 2;
        //std::cout << rndChoice << "\n";

        if (rndChoice == 0) { // Numbers
            int rndAlph = rand() % 25;
            std::cout << upAlphabet[rndAlph];
        }
        else if (rndChoice == 1) {
            int rndNumb = rand() % 9;
            std::cout << Numbers[rndNumb];
        }
    }
};

int main()
{
    Vars vars{};
    vars.genAsk();

    for (int i = 0; i <= (vars.genAmount * 15) - 0; i++) {
        
        //std::cout << i;

        vars.genNumber();

        if (i % 5 == 0 && i != 0) {
            if (i % 15 == 0 && i != 0) 
            {
                // do nothing
            } else { std::cout << "-"; }
            
        }
        if (i % 15 == 0 && i != 0) {
            std::cout << "\n";
        }
    }
}