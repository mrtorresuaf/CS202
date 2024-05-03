#pragma once

#include <string>

class FilledBox {

private:

      int width, height;
      char fill;

public:

      FilledBox();
      FilledBox(int w, int h, char c);

      int getWidth() const;
      int getHeight() const;
      std::string asString() const;

};
