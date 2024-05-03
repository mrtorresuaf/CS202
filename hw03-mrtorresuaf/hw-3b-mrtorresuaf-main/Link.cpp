#include <ostream>
#include "Link.h"

Link::Link()
      : value{0.0}, next{nullptr}
{
      // blank
}

Link::Link(double val)
      : value{val}, next{nullptr}
{
      // blank
}

Link::~Link() {
      delete next;
}

std::ostream& operator<<(std::ostream& os, const Link& link) {

      os << "Link(" << link.value << ")";
      return os;
}
