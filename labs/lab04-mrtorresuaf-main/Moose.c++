#include "Moose.h++"

Moose::Moose(bool alive, int l)
      : Animal{alive}, legs{l}
{
      
}

int Moose::numLegs()const {

      return this->legs;
}
