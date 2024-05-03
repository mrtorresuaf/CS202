#pragma once

#include <string>

class Box {

public:

      Box();
      Box(int w, int h);
      virtual ~Box() = default;

      int getWidth() const;
      int getHeight() const;
      virtual std::string asString() const = 0;

protected:

      int width, height;

};
