#include "Pokemon.hpp"
#include <iostream>
using namespace std;

class Pokemon {
public:
	string name;
    PokemonType type;
	int health;

	// Default Constructor
    Pokemon::Pokemon() {
        name = "Pikachu";
        type = PokemonType::Electric; // Default type
        health = 10; // Default health
        //cout << "A new Pokemon has been created with the default constructor!" << endl;
    }

    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health) {
		name = p_name;
        type = p_type;
		health = p_health;
        //cout << "A new Pokemon named "<< name <<" has been created with the parameterized constructor." << endl;
    }

    //copy constructor
    Pokemon::Pokemon(const Pokemon& other) {
        name = other.name;
        type = other.type;
        health = other.health;
        //cout << "A Pokemon has been copied from "<< other.name << endl;
    }

    // Destructor
    Pokemon::~Pokemon() {
        //cout << "Pokemon " << name << " has been destroyed!" << endl;
    }

    void Pokemon::Attack() {
        cout << "Pokemon attacks!" << endl;
    }
};