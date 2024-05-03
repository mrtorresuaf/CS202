#pragma once

#include "Link.h"

class LinkedList {

public:

      LinkedList();

      ~LinkedList();

      void insert(double value);

private:

      Link* head;

};
