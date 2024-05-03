#include "FilledBox.h"

FilledBox::FilledBox(int w, int h, char c) 
      : HollowBox{w, h, c}
{
      // Intentionally left blank
}

std::string FilledBox::asString() const {

      std::string box;

      box += fill;

      return box;
}
