#include "Starship.h"
#include "FederationStarship.h"
#include "Battlestar.h"

using std::cout;
using std::endl;

int main() {
	
      const FederationStarship enterprise;
      const Battlestar galactica;

      cout << enterprise << endl;
      cout << endl;
      enterprise.draw();
      cout << endl;
  
      cout << galactica << endl;
      cout << endl;
      galactica.draw();
      cout << endl;
}
