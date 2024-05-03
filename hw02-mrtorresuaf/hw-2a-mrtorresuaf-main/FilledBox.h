#pragma once

#include "HollowBox.h"

class FilledBox : public HollowBox {

public:

      FilledBox(int w, int h, char c);

      std::string asString() const override;

};
