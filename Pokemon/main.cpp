#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"

#include <iostream>
#include <string>
#include <limits>

using namespace std;



// Pokemon class
#include "Pokemon.hpp"

// player class
#include "Player.hpp"

// Professor Class

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
        Utility::waitForEnter();
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

    void explainMainQuest(Player &player){
        
        cout << "Professor Oak: Oak-ay! " << player.name << "I am about to explain you about your upcoming grand adventure." << endl;
        cout << "Professor Oak: You see, becoming a Pokemon Master is no easy feat. It takes courage, wisdom, and a bit of luck." << endl;
        cout << "Professor Oak: Your mission, should you choose to accept it (and trust me, you really do not have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League." << endl;
        cout << player.name << ": Wait... that sounds a lot like every other Pokémon game out there." << endl;
        
        cout << "Professor Oak: Shhh! Don't break the fourth wall " << player.name << "! This is serious business!" << endl;
        cout << "Professor Oak: To achieve this, you will need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter." << endl;
        cout << "Professor Oak: You'll capture new Pokemon to strengthen your team. Just remember—there is a limit to how many Pokémon you can carry, so choose wisely!" << endl;
        cout << "Professor Oak: Sounds like a walk in the park... right?" << endl;
        cout << "Professor Oak: Hah! That is what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let us just say you'll be starting from square one." << endl;
        cout << "Professor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?" << endl;
        cout << player.name << ": Ready as I will ever be, Professor!" << endl;
        
        cout << "Professor Oak: That is the spirit! Now, your journey begins. But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << endl;
    }
};

void gameLoop(Player &player){
    bool keepPlaying = true;
    int choice;

    while(keepPlaying){
        // clear console
        Utility::clearConsole();

        // options for the player
        cout << "What would you like to do next " << player.name << "?" << endl;
        cout << "1. Battle Wild Pokémon?" << endl;
        cout << "2. Visit PokeCenter?" << endl;
        cout << "3. Challenge Gyms" << endl;
        cout << "4. Enter Pokémon League" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice:";
        cin >> choice;

        // switch loop
        switch (choice)
        {
        case 1:
            cout << "Look around....all the wild pokemons are on vacation it seems. Try again later?" << endl;
            break;
        case 2:
            cout << "Head to the Pokecentre. Nurse joy is out of coffee, Guess your poke as to tough it out for now." << endl;
            break;
        case 3:
            cout << "You marched to the gym, but it is closed. Gym leaders on a break?" << endl;
            break;
        case 4:
            cout << "You step to the pokemon league...but the gatekeeper laughs!! Next time champ!" << endl;
            break;
        case 5:
            cout << "You try to quit. But Prof says no quitting!" << endl;
            cout << "Sure you wish to quit? (y/n)" << endl;
            
            char quitChoice;
            cin >> quitChoice;
            if(quitChoice == 'y' || quitChoice == 'Y'){
                keepPlaying = false;
            }

            break;
        default:
            break;
        }

        // wait from the screen to clear
        Utility::waitForEnter();
    }

    cout << "Goodbye," << player.name << "! Thanks for playing!" << endl;
}

// main function

int main() {

	// calling game objects

    Pokemon Charmander = Pokemon("Charmander", PokemonType::Fire, 100);

    ProfessorOak Prof = ProfessorOak("Professor Oak");
	Player player("Ash", Charmander);

	// // Greet the player and offer to choose a Pokemon

	Prof.greetPlayer(player);
    Utility::waitForEnter();
	Prof.offerPokemonChoices(player);
    Utility::clearConsole();

    // // final say

	Prof.explainMainQuest(player);

    // game loop begins/placeholder
    gameLoop(player);

    return 0;

}
