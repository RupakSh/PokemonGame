#include "Grass.hpp"


class Player;

class Game {

    private:
        Grass forestGrass;

    public:

        Game();
        // game loop
        void gameLoop(Player &player);

};


