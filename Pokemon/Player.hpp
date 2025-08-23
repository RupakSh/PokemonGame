
#include <string>
using namespace std;

class Pokemon;

class Player {
public:
    string name;
    Pokemon chosen_pokemon;

    // Default Constructor
    Player();

    // Parameterized Constructor
    Player(string p_name, Pokemon p_chosenPokemon);

    // Method to choose a pokemon
    void ChoosePokemon(int choice);
};