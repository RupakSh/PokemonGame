#include <iostream>
using namespace std;

enum class Pokemonchoice {
    Bulbasaur,
    Charmander,
    Squirtle,
    Invalidchoice
};

enum class PokemonType {
	Fire,
    Grass,
    Water,
    Electric
};

// Pokemon class

class Pokemon {
	string name;
    PokemonType type;
	int health;

	// Constructor

    Pokemon() {

    }

    Pokemon(string p_name, PokemonType p_type, int p_health) {
		name = p_name;
        type = p_type;
		health = p_health;
    }

    void Attack() {
        cout << "Pokemon attacks!" << endl;
    }

}; 

// Player class

class Player() {
    string name;
    Pokemonchoice chosen_pokemon;

    void ChoosePokemon(int choice) {
        switch (Pokemonchoice(choice)) {
        case 1:
            chosen_pokemon = Pokemonchoice::Bulbasaur;
            cout << "Very kool!! you chose Bulbasaur!" << endl;
            break;
        case 2:
            chosen_pokemon = Pokemonchoice::Charmander;
            cout << "Very kool!! you chose Charmander!" << endl;
            break;
        case 3:
            chosen_pokemon = Pokemonchoice::Squirtle;
            cout << "Very kool!! you chose Squirtle!" << endl;
            break;
        default:
            chosen_pokemon = Pokemonchoice::Invalidchoice;
            cout << "You chose wrong....so the system choses Charmander for you!" << endl;
            break;
        }
        cout << "Player " << name << " has chosen " 
			<< chosen_pokemon.name << " as their pokemon." << endl;
    }
};

class ProfessorOak() {
    string name;

    void greetPlayer(Player& player) {
        cout << "Hello " << player.name << "! Welcome to the world of Pokemon!" << endl;
        cout << "I am Professor Oak, your guide on this journey." << endl;
        cout << "Let's get started!" << endl;
	}

    void offerPokemonChoices(Player& player) {
        cout << "You can choose one of these three pokemons to play with." << endl;
        cout << "1. Bulbasaur (the wise plant guardian)" << endl;
        cout << "2. Charmander (the fiery warrior)" << endl;
        cout << "3. Squirtle (the cool-headed protector)" << endl;
        cout << "Enter a number to choose from 1 to 3" << endl;
        int choice;
        cin >> choice;
        player.ChoosePokemon(choice);
	}
};



// main function

int main() {

	Player player;
    ProfessorOak professor;
	Pokemon placeholderPokemon;

	placeholderPokemon.name = "Pikachu";
	placeholderPokemon.type = PokemonType::Electric;
	placeholderPokemon.health = 50;

	player.name = "Ash Ketchum";

	professor.name = "Professor Oak";

	// Greet the player and offer to choose a Pokemon

	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

    // final say

	cout << "We three are going to be the best of friends!" << endl;
	cout << "Let's go on an adventure together!" << endl;




    return 0;
}
