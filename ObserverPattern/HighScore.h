//
// Created by febrian on 11/06/2021.
//

#pragma once
#include <vector>
#include <iostream>
#include "Observer.h"

class HighScore {
private:
    std::vector<Observer*> listScore;
public:

    HighScore();

    void Attach(Observer* observer);
    void Detach(const std::string& name);

    void NotifyAllObserver();

    std::vector<Observer*> GetList();
};


