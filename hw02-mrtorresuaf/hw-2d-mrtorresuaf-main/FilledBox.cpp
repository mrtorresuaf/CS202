#include "FilledBox.h"

FilledBox::FilledBox() {
	this->width = 1;
	this->height = 1;
	this->fill = '?';
}

FilledBox::FilledBox(int w, int h, char c) {
	this->width = w;
	this->height = h;
	this->fill = c;
}

int FilledBox::getWidth() const {

      return this->width;
}

int FilledBox::getHeight() const {

      return this->height;
}

std::string FilledBox::asString() const {

      std::string box;

      box += fill;

      return box;
}
