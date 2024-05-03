#include <iostream>
#include "LinkedList.h"

using std::cerr;
using std::endl;

LinkedList::LinkedList()
      : head{nullptr}, count{0}
{
      // blank
}

LinkedList::~LinkedList() {
      delete head;
}

void LinkedList::insert(double value) {

      if (head == nullptr) {
            head = new Link(value);
      } else {
            Link* current = head;
            Link* previous = nullptr;

            while (current != nullptr) {
                  previous = current;
                  current = current -> next;
            }
            previous -> next = new Link(value);
            
      }
      cerr << "After adding " << value << ": ";

      Link* temp = head;
      while (temp) {
            cerr << *temp;
            if (temp -> next) {
                  cerr << " -> ";
            } 
            temp = temp -> next;
      }
      cerr << endl;

      count += 1;
}

int LinkedList::size() const {

      return count;
}

bool LinkedList::contains(double element) const {
      
      if (element) {
            cerr << element << " is in the list" << endl;
      }
      return true;
}
