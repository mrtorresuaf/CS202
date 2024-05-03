#include "Link.h"
#include "LinkedList.h"
#include <iostream>
#include <string>
#include <functional>
#include <sstream>
#include <iomanip>

using std::cout;
using std::endl;
using std::ostringstream;
using std::hex;
using std::setw;
using std::setfill;
using std::string;
using std::function;
using std::stringstream;
using std::fixed;
using std::setprecision;

void fancyPrint(Link* link) {

// variables

      void* vlink{reinterpret_cast<void*>(link)}; // needed to make value string
      void* pointer{reinterpret_cast<void*>(link -> next)}; // needed to make pointer string

      stringstream ss;
            ss << fixed << setprecision(2) << link -> value; // used in vmessage

      ostringstream osv, osp;
            osv << hex << setw(16) << setfill('0') << reinterpret_cast<uintptr_t>(vlink); // used in value
            osp << hex << setw(16) << setfill('0') << reinterpret_cast<uintptr_t>(pointer); // used in address
      
      string ul{"┏"}, ur{"┓"}, ll{"┗"}, lr{"┛"}, h{"━"}, v{"┃"},
            value = osv.str(), // used in vend
            address = osp.str(), // used in pend
            vend = value.substr(value.length() - 4), // used on top of boxes
            pend = address.substr(address.length() - 4), // used in pmessage
            vmessage{"value: " + ss.str()}, // used in vpad
            pmessage{"  next: " + pend}; // used in ppad

      int bwidth{18}, bheight{6},
            vpad{(bwidth - vmessage.size()) - 4},
            ppad{(bwidth - pmessage.size()) - 3};
      
// body of function

      cout << "@ " << vend << endl;

      for (int i{0}; i < bheight; i += 1) {
            if (i == 0) { // top row
                  
                  cout << ul;
                  
                  for (int k{0}; k < (bwidth - 2); k += 1) {
                        cout << h;
                  }
                  
                  cout << ur << endl;

            } else if (i == 5) { // bottom row
                  
                  cout << ll;
                  
                  for (int k{0}; k < (bwidth - 2); k += 1) {
                        cout << h;
                  }
                  
                  cout << lr << endl;

            } else { 
                  
                  cout << v;
                  
                  if (i == 2) {
                        
                        cout << " " << vmessage << " ";
                        
                        for (int b{0}; b < vpad; b += 1) {
                              cout << " ";
                        }
                  
                  } else if (i == 3) {
                        
                        if (pend == "0000") {
                              
                              cout << "  next: nullptr ";
                        
                        } else {
                              
                              cout << pmessage << " ";
                              
                              for (int b{0}; b < ppad; b += 1) {
                                    cout << " ";
                              }
                        }
                  } else {
                        
                        for (int k{0}; k < (bwidth - 2); k += 1) {
                              cout << " ";
                        }
                  }
                  cout << v << endl;
            }
      }
      cout << endl;
}

int main() {

      LinkedList list;   

      list.insert(37.0);
      list.insert(100.25);
      list.insert(-17.5);

      cout << "\nLinkedList:\n" << endl;	
      list.processEachLink(fancyPrint);	

      return 0;
}
