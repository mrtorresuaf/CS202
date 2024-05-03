#include "HollowBox.h"

HollowBox::HollowBox(int w, int h, char c)
      : Box{w, h},
      fill{c}
{
      // Intentionally left blank
}

std::string HollowBox::asString() const {

      std::string box;

      box += fill;

      return box;
}
