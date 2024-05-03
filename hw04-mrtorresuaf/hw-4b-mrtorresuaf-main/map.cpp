#include "map.h"

std::istream& operator>>(std::istream& is, Map& map) {

      std::string line;
      int row{0};

      while (getline(is, line)) {
            
            map.board.push_back(line);

            size_t col = line.find('A');
            if (col != std::string::npos) {
                  map.xaxis = row;
                  map.yaxis = static_cast<int>(col);
            }

            row++;
      }

      return is;
}

std::ostream& operator<<(std::ostream& os, const Map& map) {
      
      for (const std::string& s : map.board) {
            
            os << s << std::endl;
      }

      return os;
}

void Map::move(char input) {

      int newRow{xaxis}, newCol{yaxis};

      switch (input) {
            case 'i':
                  newRow--;
                  break;
            case 'j':
                  newCol--;
                  break;
            case 'k':
                  newRow++;
                  break;
            case 'l':
                  newCol++;
                  break;
            default:
                  return;
      }

      if (newRow >= 0 && newRow <static_cast<int>(board.size()) && 
          newCol >= 0 && newCol <static_cast<int>(board[newRow].size()) &&
          board[newRow][newCol] != 'X') {

            board[xaxis][yaxis] = ' ';
            xaxis = newRow;
            yaxis = newCol;
            board[xaxis][yaxis] = 'A';

      }
}
