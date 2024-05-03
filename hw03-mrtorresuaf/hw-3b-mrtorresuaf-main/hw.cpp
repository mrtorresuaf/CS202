#include "Link.h"
#include "LinkedList.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main() {

      LinkedList list;   

      vector<double> values{37.0, 100.25, -17.5};
      for (double d: values) {
            list.insert(d);
            list.contains(d);          
      }

      cout << "There are " << list.size() << " elements in the list" << endl;

      return 0;
}
