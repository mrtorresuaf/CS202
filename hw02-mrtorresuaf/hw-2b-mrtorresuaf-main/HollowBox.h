#pragma once

#include "Box.h"

class HollowBox : public Box {

public:

      HollowBox(int w, int h, char c);

      std::string asString() const override;

protected:

      char fill;

};
