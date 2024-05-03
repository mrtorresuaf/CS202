#include "FancyBox.h"

FancyBox::FancyBox() : fill('?') {}

std::string FancyBox::asString() const {

      std::string box;

      box += fill;

      return box;
}
