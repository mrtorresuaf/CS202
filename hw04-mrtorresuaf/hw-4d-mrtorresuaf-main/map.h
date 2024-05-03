#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class Map {

public:

      friend std::istream& operator>>(std::istream& is, Map& board);
      friend std::ostream& operator<<(std::ostream& os, const Map& board);

private:

      std::vector<std::string> board;
};
