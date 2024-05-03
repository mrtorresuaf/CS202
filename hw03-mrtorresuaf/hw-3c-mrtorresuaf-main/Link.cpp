#include <iostream>
#include "Link.h"

using std::cerr;
using std::endl;

Link::Link()
      : value{0.0}, next{nullptr}
{
      cerr << "Link object constructed using Link() default constructor" << endl;
}

Link::Link(double val)
      : value{val}, next{nullptr}
{
      cerr << "Link object constructed using Link(" << value << ") constructor" << endl;
}

Link::~Link() {
      cerr << "Link(" << value << ") object is being destructed using ~Link() destructor" << endl;
      delete next;
      cerr << "Link(" << value << ") object has been destructed using ~Link() destructor" << endl;
}

std::ostream& operator<<(std::ostream& os, const Link& link) {

      os << "Link(" << link.value << ")";
      return os;
}
