#include "../../include/Utility/Utility.hpp"
#include <iostream>
#include <limits>
using namespace std;

namespace N_Utility
{
    void Utility::clearConsole()
    {
        cout << "\033[2J\033[H";
    }

    void Utility::clearInputBuffer()
    {
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    void Utility::waitForEnter()
    {
        cout <<"(Press Enter to continue...)"<<endl;
        cin.sync();
        cin.get();
    }
}


