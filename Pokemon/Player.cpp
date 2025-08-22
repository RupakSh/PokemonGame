#include "Player.hpp"
#include <iostream>
using namespace std;


    Player::Player() {
        name = "Trainer";
        chosen_pokemon = Pokemon(); // Default Pokemon
        //cout << "A new player named " << name << " has been created using the default constructor!" << endl;
    }

    Player::Player(string p_name, Pokemon p_chosenPokemon){
        name = p_name;
        chosen_pokemon = p_chosenPokemon;
        //cout << "Player " << name << " has been created using the parameterized constructor." << endl;
    }

    // copy constrctor

    Player::Player(const Player &other){
        name = other.name;
        chosen_pokemon = other.chosen_pokemon;
        //cout << "Player" << other.name << "has been created using the copy constructor." << endl;
    }

    // Method to choose a pokemon
    void Player::ChoosePokemon(int choice) {
        switch (choice) {
        case 1: 
            chosen_pokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
            //cout << "Very kool!! you chose Bulbasaur!" << endl;
            break;
        case 2:
            chosen_pokemon = Pokemon("Charmander", PokemonType::Fire, 100);
            //cout << "Very kool!! you chose Charmander!" << endl;
            break;
        case 3:
            chosen_pokemon = Pokemon("Squirtle", PokemonType::Water, 100);
            //cout << "Very kool!! you chose Squirtle!" << endl;
            break;
        default:
            chosen_pokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
            //cout << "You chose wrong....so the system choses Charmander for you!" << endl;
            break;
        }
        cout << "Player " << name << " has chosen " << chosen_pokemon.name << " as their pokemon." << endl;
    }