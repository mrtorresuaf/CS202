#include "FederationStarship.h"

FederationStarship::FederationStarship()
      : Starship("Starship Enterprise", "NCC 1701-D", "explore strange new worlds")
{
      //blank
}

void FederationStarship::draw() const {
      
      std::cout << R"(                       __...---'-----`---...__    
                  _===============================
 ______________,/'      `---..._______...---'     
(____________LL). .    ,--'                       
 /    /.---'       `. /                           
'--------_  - - - - _/                            
          `~~~~~~~~'                               )"
          << std::endl;
      
}
