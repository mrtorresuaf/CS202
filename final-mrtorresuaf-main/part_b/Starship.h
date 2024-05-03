#pragma once

#include <string>
#include <ostream>

class Starship {

public:

      Starship(std::string name, std::string id, std::string mis);

      friend std::ostream& operator<<(std::ostream& os, const Starship& s);

      std::string getName() const;
      std::string getId() const;
      std::string getMission() const;

private:

      std::string name;
      std::string identifier;
      std::string mission;

};
