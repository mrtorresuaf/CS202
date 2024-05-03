#pragma once

#include "Box.h"

class HollowBox : public Box {

public:

      HollowBox();
      HollowBox(int w, int h, char c) : Box(w, h), border(c){};

      std::string asString() const override;

protected:

      char border;

};
