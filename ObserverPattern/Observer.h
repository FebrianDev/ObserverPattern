#pragma once
#include <iostream>
class Observer {
protected:
    std::string name;
    int score;
    int position;
public:
    virtual ~Observer() = default;
    virtual void SetName(const std::string& name) = 0;
    virtual std::string GetName() const = 0;

    virtual void SetScore(const int& score) = 0;
    virtual int GetScore() const = 0;

    virtual void SetUpdate(const int& position) = 0;
    virtual void GetUpdate() const = 0;
};
