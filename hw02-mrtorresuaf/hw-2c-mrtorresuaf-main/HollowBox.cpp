#include "HollowBox.h"

HollowBox::HollowBox() : border('?') {}

std::string HollowBox::asString() const {

      std::string box;

      box += border;

      return box;
}
