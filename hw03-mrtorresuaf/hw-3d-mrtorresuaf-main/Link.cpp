#include <iostream>
#include "Link.h"

Link::Link()
      : value{0.0}, next{nullptr}
{
      std::cerr << "Link object constructed using Link() default constructor" << std::endl;
}

Link::~Link() {
      std::cerr << "Link(0) object is being destructed using ~Link() destructor" << std::endl;
      delete next;
      std::cerr << "Link(0) object has been destructed using ~Link() destructor" << std::endl;
}
