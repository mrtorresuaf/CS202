#pragma once

#include <string>

class Box {

public:

      Box(int w, int h);

      int getWidth() const;
      int getHeight() const;
      virtual std::string asString() const = 0;

protected:

      int width, height;

};
