#pragma once

#include "Box.h"

class FancyBox : public Box {

public:

      FancyBox();
      FancyBox(int w, int h, char c) : Box(w, h), fill(c) {};

      std::string asString() const override;

protected:

      char fill;

};
