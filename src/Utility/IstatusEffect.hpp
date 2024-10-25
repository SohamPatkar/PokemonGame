#include<iostream>

class IstatusEffect
{
    virtual void applyEffect();

    virtual std::string getEffectName();

    virtual bool turnEndEffect();

    virtual void clearEffect();
};