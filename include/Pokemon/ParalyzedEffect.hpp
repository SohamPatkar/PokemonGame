#pragma once
#include "./Pokemon.hpp"
#include "./IstatusEffect.hpp"
#include <iostream>

class ParalyzedEffect : public IstatusEffect
{
    private:
    int turnsLeft;

    public:
    virtual void applyEffect(N_Pokemon::Pokemon* target) override; 
    virtual std::string getEffectName() override;
    virtual bool turnEndEffect(N_Pokemon::Pokemon* target) override;
    virtual void clearEffect(N_Pokemon::Pokemon* target) override;
};