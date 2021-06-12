//
// Created by febrian on 11/06/2021.
//

#include "Player.h"

void Player::SetName(const std::string& name) {
    this->name = name;
}

std::string Player::GetName() const {
    return name;
}

void Player::SetScore(const int& score) {
    this->score = score;
}

int Player::GetScore() const {
    return score;
}

void Player::GetUpdate() const
{
    std::cout << GetName() <<" ada di posisi "<< position<<std::endl<< std::endl;
}

void Player::SetUpdate(const int& position) {
    this->position = position;
}

Player::Player() {
    this->score = 0;
    this->name = "";
}
