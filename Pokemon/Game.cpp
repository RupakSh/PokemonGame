#include "Player.hpp"
#include "Utility.hpp"
#include "Game.hpp"
#include "Grass.hpp"
#include <iostream>

using namespace std;

class Player;

Grass forestGrass = {
    "Forest",
    {{"Pidgey", PokemonType::Normal, 40}, {"Caterpie", PokemonType::Bug, 35}},
    70
};

Grass caveGrass = {
    "Cave",
    {{"Zubat", PokemonType::Poison, 30}, {"Geodude", PokemonType::Rock, 50}},
    80
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