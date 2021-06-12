//
// Created by febrian on 11/06/2021.
//

#include "HighScore.h"

#include <algorithm>

void HighScore::Attach(Observer* observer) {
    listScore.push_back(observer);
}

void HighScore::Detach(const std::string& name) {
    int i = 0;
    for (auto* list : listScore) {
        if (list->GetName() == name) {
            listScore.erase(listScore.begin() + i);
            break;
        }
        i++;
    }
}

void HighScore::NotifyAllObserver() {

    auto i = 1;
	std::cout << "Data sebelum di sort : " << std::endl;
    for (auto* list : listScore) {
        list->SetUpdate(i);
    	std::cout << i <<" Name : " << list->GetName() << " Score : " << list->GetScore() << std::endl;
        i++;
    }
    std::cout << std::endl;
    sort(listScore.begin(), listScore.end(), [](const Observer* obs1, const Observer* obs2)
    {
            return obs1->GetScore() > obs2->GetScore();
    });

    i = 1;
    std::cout << "Data setelah di sort : " << std::endl;
    for (auto* list : listScore) {
        list->SetUpdate(i);
    	std::cout << i <<" Name : " << list->GetName() << " Score : " << list->GetScore() << std::endl;
        i++;
    }
    std::cout << std::endl << std::endl;
}

std::vector<Observer*> HighScore::GetList() {
    return listScore;
}

HighScore::HighScore() {

}
