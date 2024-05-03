#pragma once

#include <string>

class Line {

private:

      int width;

public:

      Line();
      Line(int w);

      int getWidth() const;
      std::string asString() const;

};
