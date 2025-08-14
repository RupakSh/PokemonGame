#include <iostream>
#include <string>
using namespace std;

enum class Pokemonchoice {
    Bulbasaur = 1,
    Charmander,
    Squirtle,
    Pikachu // default choice
};

enum class PokemonType {
	Grass,
    Fire,
    Water,
    Electric,
    Normal // added for the default constructor
};

// Pokemon class

class Pokemon {
public:
	string name;
    PokemonType type;
	int health;

	// Default Constructor

    Pokemon() {
        name = "Pikachu";
        type = PokemonType::Electric; // Default type
        health = 10; // Default health
        cout << "A new Pokemon has been created with the default constructor!" << endl;
    }

    Pokemon(string p_name, PokemonType p_type, int p_health) {
		name = p_name;
        type = p_type;
		health = p_health;
        cout << "A new Pokemon named "<< name <<" has been created with the parameterized constructor." << endl;
    }

    //copy constructor
    Pokemon(const Pokemon& other) {
        name = other.name;
        type = other.type;
        health = other.health;
        cout << "A Pokemon has been copied from "<< other.name << endl;
    }

    // Destructor
    ~Pokemon() {
        cout << "Pokemon " << name << " has been destroyed!" << endl;
    }

    void Attack() {
        cout << "Pokemon attacks!" << endl;
    }

}; 

// Player class

class Player {
public:
    string name;
    Pokemon chosen_pokemon;

    // Default Constructor
    Player() {
        name = "Trainer";
        chosen_pokemon = Pokemon(); // Default Pokemon
        cout << "A new player named " << name << " has been created using the default constructor!" << endl;
    }

    // Parameterized Constructor
    Player(string p_name, Pokemon p_chosenPokemon){
        name = p_name;
        chosen_pokemon = p_chosenPokemon;
        cout << "Player " << name << " has been created using the parameterized constructor." << endl;
    }

    // copy constrctor

    Player(const Player &other){
        name = other.name;
        chosen_pokemon = other.chosen_pokemon;
        cout << "Player" << other.name << "has been created using the copy constructor." << endl;
    }

    // Method to choose a pokemon
    void ChoosePokemon(int choice) {
        switch (choice) {
        case 1: 
            chosen_pokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
            cout << "Very kool!! you chose Bulbasaur!" << endl;
            break;
        case 2:
            chosen_pokemon = Pokemon("Charmander", PokemonType::Fire, 100);
            cout << "Very kool!! you chose Charmander!" << endl;
            break;
        case 3:
            chosen_pokemon = Pokemon("Squirtle", PokemonType::Water, 100);
            cout << "Very kool!! you chose Squirtle!" << endl;
            break;
        default:
            chosen_pokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
            cout << "You chose wrong....so the system choses Charmander for you!" << endl;
            break;
        }
        cout << "Player " << name << " has chosen " 
			<< chosen_pokemon.name << " as their pokemon." << endl;
    }
};

class ProfessorOak {
public:
    string name;

    ProfessorOak(string p_name){
        name = p_name;
    }

    // Professor greets the player
    void greetPlayer(Player& player) {
        cout << name << ": First, tell me your name?" << endl;
        getline(cin, player.name);
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
        cout << "Please enter the number for the pokemon of your choice" << endl;
        cin >> choice;

        player.ChoosePokemon(choice);
	}
};



// main function

int main() {

	//ProfessorOak professor;
	Pokemon defaultPokemon = Pokemon();
    Pokemon Charmander = Pokemon("Charmander", PokemonType::Fire, 100);

    Pokemon Bulbasaur = Pokemon("Bulbasaur", PokemonType::Grass, 100);
    Pokemon bulbasaurCopy = Bulbasaur;

    cout << "Printing out the details for the created pokemons." << endl;
    cout << "The name of default pokemon is " << defaultPokemon.name << ", Type is :" << (int)defaultPokemon.type << " and Power is :" << defaultPokemon.health << endl;
	cout << "The name of other pokemon is " << Charmander.name << ", Type is :" << (int)Charmander.type << " and Power is :" << Charmander.health << endl;

    cout << "Printing the details of the two new pokemons." << endl;
    cout << "The name of the new pokemon is " << Bulbasaur.name << ", Type is :" << (int)Bulbasaur.type << " and Power is :" << Bulbasaur.health << endl;
	cout << "The name of other pokemon is " << bulbasaurCopy.name << ", Type is :" << (int)bulbasaurCopy.type << " and Power is :" << bulbasaurCopy.health << endl;

    // modifying the health for bulbasaur copy

    bulbasaurCopy.health = 80;

   	cout << "The health of Bulbasaur Copy after modification is :" << bulbasaurCopy.health << endl;


    {
        Pokemon squirtle("Squirtle", PokemonType::Water, 100);
    }


    ProfessorOak Prof = ProfessorOak("Professor Oak");
	Player player("Ash", Charmander);

	// professor.name = "Professor Oak";

	// // Greet the player and offer to choose a Pokemon

	Prof.greetPlayer(player);
	Prof.offerPokemonChoices(player);

    // // final say

	cout << "We three are going to be the best of friends!" << endl;
	cout << "Let's go on an adventure together!" << endl;

    return 0;
}
