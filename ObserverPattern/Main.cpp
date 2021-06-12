#include <iostream>
#include <string>

#include "Player.h"
#include "HighScore.h"

#define MAX_PLAYER 5


int main() {
    srand(time(NULL));

    HighScore* highScore = new HighScore;

	//input new Data
    for (int i = 1; i <= MAX_PLAYER; i++) {
        Player* player = new Player();
        player->SetName("player" + std::to_string(i));
        player->SetScore((rand() % 100 + 1));
        highScore->Attach(player);
    }
    //get all data
    highScore->NotifyAllObserver();

	//delete data
	highScore->Detach("player3");

	//input new data
	Player* player = new Player();
    player->SetName("player" + std::to_string(10));
    player->SetScore((rand() % 100 + 1));
    highScore->Attach(player);

    highScore->GetList().at(1)->GetUpdate();

	//get all data
    highScore->NotifyAllObserver();
}