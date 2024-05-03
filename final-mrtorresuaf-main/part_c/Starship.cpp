#include "Starship.h"

Starship::Starship(std::string name, std::string id, std::string mis)
      : name{name}, identifier{id}, mission{mis} 
{
      //blank
}

std::string Starship::getName() const {

      return name;
}

std::string Starship::getId() const {

      return identifier;
}

std::string Starship::getMission() const {

      return mission;
}

std::ostream& operator<<(std::ostream& os, const Starship& s) {
      
      os << s.getName() << " (" << s.getId()
         << ") is ready to " << s.getMission()
         << ".";

      return os;
}
