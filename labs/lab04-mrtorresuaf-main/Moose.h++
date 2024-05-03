#pragma once

#include "Animal.h++"

class Moose : public Animal {

public:

      Moose(bool alive, int legs);
      int numLegs() const;

private:

      int legs;

};
