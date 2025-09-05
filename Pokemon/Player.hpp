
#include <string>
#include "Pokemon.hpp"
using namespace std;

class Player {
public:
    string name;
    Pokemon chosen_pokemon;

    // Default Constructor
    Player();

    // Parameterized Constructor
    Player(string p_name, Pokemon p_chosenPokemon);

    Player(const Player &other);

    // Method to choose a pokemon
    void ChoosePokemon(int choice);
};