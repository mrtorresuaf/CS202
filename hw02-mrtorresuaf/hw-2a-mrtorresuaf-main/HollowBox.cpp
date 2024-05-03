#include "HollowBox.h"

HollowBox::HollowBox() : fill('?') {}

std::string HollowBox::asString() const {

      std::string box;

      box += fill;

      return box;
}
