#include <iostream>

using std::cout;
using std::endl;

enum class Month {
      jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

std::ostream& operator<<(std::ostream& out, const Month& month) {

      switch (month) {

      case Month::jan:
            out << "January"; break;

      case Month::feb:
            out << "Febuary"; break;

      case Month::mar:
            out << "March"; break;     

      case Month::apr:
            out << "April"; break; 
      
      case Month::may:
            out << "May"; break; 
      
      case Month::jun:
            out << "June"; break; 

      case Month::jul:
            out << "July"; break;      

      case Month::aug:
            out << "August"; break;        

      case Month::sep:
            out << "September"; break; 

      case Month::oct:
            out << "October"; break; 

      case Month::nov:
            out << "Novermber"; break; 

      case Month::dec:
            out << "December"; break;             

      default:
            out << "I don't care about that month" << endl; break;
      }

      return out;
}

int main() {

      /*auto month = Month::mar;

      switch (month) {

            case Month::jan:
                  cout << "Yay -40 degrees" << endl; break;

            case Month::mar:
                  cout << "Spring break was great" << endl; break;

            default:
                  cout << "I don't care about that month" << endl; break;
      }*/

      return 0;
}