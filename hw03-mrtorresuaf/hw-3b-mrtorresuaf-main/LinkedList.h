#pragma once

#include "Link.h"

class LinkedList {

public:

      LinkedList();

      ~LinkedList();

      void insert(double value);
      int size() const;
      bool contains(double element) const;

private:

      Link* head;
      int count;
};
