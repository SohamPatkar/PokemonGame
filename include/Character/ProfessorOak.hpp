#include<iostream>
using namespace std;

namespace N_Character
{
    class Player;

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
