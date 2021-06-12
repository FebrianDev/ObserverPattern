#pragma once
#include <iostream>
#include "Observer.h"

class Player : public Observer {

public:
    Player();
    void SetName(const std::string& name) override;
    std::string GetName() const override;

    void SetScore(const int& score) override;
    int GetScore() const override;

    void SetUpdate(const int& position) override;
    void GetUpdate() const override;
};

