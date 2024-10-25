#pragma once
#include "./Pokemon.hpp"
#include<iostream>

class IstatusEffect
{
    virtual void applyEffect(N_Pokemon::Pokemon* target);

    virtual std::string getEffectName();

    virtual bool turnEndEffect(N_Pokemon::Pokemon* target);

    virtual void clearEffect(N_Pokemon::Pokemon* target);
};