#include <iostream>
using namespace std;

enum class Pokemonchoice {
    Bulbasaur,
    Charmander,
    Squirtle,
    Invalidchoice
};

int main() {

    string player_name;
    
    cout << "Hi! Welcome to the world of pokemons." << endl;
    cout << "I hope you would lots of fun on the journey!" << endl;
    cout << "Tell us your name first" << endl;

    cin >> player_name;
    cout << "Ohh hello!! " << player_name << " and welcome!!" << endl;
    cout << "You can choose one of these three pokemons to play with." << endl;
    cout << "1. Bulbasaur (the wise plant guardian)" << endl;
    cout << "2. Charmander (the fiery warrior)" << endl;
    cout << "3. Squirtle (the cool-headed protector)" << endl;
    cout << "Enter a number to choose from 1 to 3" << endl;

    // using the enum
    Pokemonchoice chosen_pokemon = Pokemonchoice::Invalidchoice;

    int choice;
    cin >> choice;

    switch (choice) {
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
    
    cout << "Excellent choice. But beware, this is only the beginning." << endl;
    cout << "The journey unfolds later, just keep going." << endl;
    cout << "Good Luck and remember to choose wisely!" << endl;


    return 0;
}
