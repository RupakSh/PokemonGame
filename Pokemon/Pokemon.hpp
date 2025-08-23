#include <string>

using namespace std;

enum class PokemonType;

class Pokemon {
    public:
	string name;
    PokemonType type;
	int health;

	// Default Constructor

    Pokemon();

    Pokemon(string p_name, PokemonType p_type, int p_health);

    //copy constructor
    Pokemon(const Pokemon& other);

    // Destructor
    ~Pokemon();

    void Attack();
};