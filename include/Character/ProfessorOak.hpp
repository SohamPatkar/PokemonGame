#include<iostream>
using namespace std;

class Player;

namespace N_Character
{
    class ProfessorOak
    {
        public:
        string p_name;

        ProfessorOak();
        ProfessorOak(string name);
        void explainMainQuest(Player &player);
        void greetPlayer(Player &player);
        void offerPokemonChoices(Player &player);
    };
}
