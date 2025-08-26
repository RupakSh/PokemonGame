#include <iostream>
using namespace std;

class Player; // forward declaration

// Professor Class
class ProfessorOak {
public:
    string name;

    ProfessorOak(string p_name);

    // Professor greets the player
    void greetPlayer(Player& player);

    void offerPokemonChoices(Player& player);

    void explainMainQuest(Player &player);
};
