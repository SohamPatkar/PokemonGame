#include "../../include/Utility/Utility.hpp"
#include <iostream>
using namespace std;

namespace N_Utility
{
    void Utility::clearConsole()
    {
        cout << "\033[2J\033[H";
    }

    void Utility::waitForEnter()
    {
        cout <<"(Press Enter to continue...)"<<endl;
        cin.sync();
        cin.get();
    }
}


