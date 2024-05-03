#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class Map {

public:

      friend std::istream& operator>>(std::istream& is, Map& map);
      friend std::ostream& operator<<(std::ostream& os, const Map& map);

      void move(char input);

private:

      std::vector<std::string> board;
      int xaxis, yaxis;
};
