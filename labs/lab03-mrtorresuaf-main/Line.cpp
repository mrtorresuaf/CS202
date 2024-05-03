#include "Line.h"

Line::Line() 
      : width{0}
{
	
}

Line::Line(int w) 
      : width{w}
{

}

int Line::getWidth() const {

      return this->width;
}

std::string Line::asString() const {

      std::string line;

      line += "x";

      return line;
}
