#include "Utility.hpp"
#include "Player.hpp"
#include "ProfessorOak.hpp"
#include "Game.hpp"

#include <iostream>
#include <string>
#include <limits>

using namespace std;

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
    Game game;

    game.gameLoop(player);

    return 0;

}
