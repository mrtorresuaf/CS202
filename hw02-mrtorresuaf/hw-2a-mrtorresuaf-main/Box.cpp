#include "Box.h"

Box::Box() {
	this->width = 1;
	this->height = 1;
}

Box::Box(int w, int h) {
	this->width = w;
	this->height = h;
}

int Box::getWidth() const {

      return this->width;
}

int Box::getHeight() const {

      return this->height;
}
