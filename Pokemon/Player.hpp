#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"

#include <string>
using namespace std;

class Player {
public:
    string name;
    Pokemon chosen_pokemon;

    // Default Constructor
    Player();

    // Parameterized Constructor
    Player(string p_name, Pokemon p_chosenPokemon);

    // copy constrctor

    // Player(const Player &other){
    //     name = other.name;
    //     chosen_pokemon = other.chosen_pokemon;
    //     //cout << "Player" << other.name << "has been created using the copy constructor." << endl;
    // }

    // Method to choose a pokemon
    void ChoosePokemon(int choice);
};