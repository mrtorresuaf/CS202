#pragma once

class Animal {

protected:

      Animal(bool alive);
      bool isAlive;

public:

      virtual int numLegs() const = 0;

};
