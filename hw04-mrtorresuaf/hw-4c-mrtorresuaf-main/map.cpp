#include "map.h"

std::istream& operator>>(std::istream& is, Map& map) {

      std::string line;

      while (getline(is, line)) {
            
            map.board.push_back(line);
      }

      return is;
}

std::ostream& operator<<(std::ostream& os, const Map& map) {
      
      for (std::string s : map.board) {
            
            os << s << std::endl;
      }

      return os;
}
