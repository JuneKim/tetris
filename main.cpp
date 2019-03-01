#include <iostream>
#include <unistd.h>
#include "Game.h"

using namespace std;
int main()
{
    bool exit = true; //false;
    Game *game;
    
    std::cout   << "Controls:\n"
                << " - Use w, a, s, d to change direction.\n"
                << " - Press space to pause the game.\n\n";
    //system("pause");
    system("clear"); 
    try {
        game = Game::getInstance();
        game->run();
        while (1) {
            usleep(100000);
        }
    } catch(exception e) {
        cout << "##Exception: " << e.what() << endl;
    }

    game->exit();
    return 0;
}