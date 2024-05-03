#include "Link.h"
#include "LinkedList.h"
#include <vector>

using std::vector;

int main() {

      LinkedList list;   

      vector<double> values{37.0, 100.25, -17.5};
      for (double d: values) {
            list.insert(d);
      }

      return 0;
}
