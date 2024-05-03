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

      int row{xaxis}, col{yaxis};//, arrow;

      switch (input) {
            case 'i':
            case 'I':
            //case '72':
            case 'w':
            case 'W':
                  row--;
                  break;
            case 'j':
            case 'J':
            case 'a':
            case 'A':
            //case '75':
                  col--;
                  break;
            case 'k':
            case 'K':
            case 's':
            case 'S':
            //case '80':
                  row++;
                  break;
            case 'l':
            case 'L':
            case 'd':
            case 'D':
            //case '77':
                  col++;
                  break;
            default:
                  return;
      }

      if (row >= 0 && row <static_cast<int>(board.size()) && 
          col >= 0 && col <static_cast<int>(board[row].size()) &&
          board[row][col] != 'X') {

            if (board[row][col] == 'Z') {
                  std::cout << "YOU ARE WINNER" << std::endl;
                  exit(0);
            }

            board[xaxis][yaxis] = ' ';
            xaxis = row;
            yaxis = col;
            board[xaxis][yaxis] = 'A';
      }
}
