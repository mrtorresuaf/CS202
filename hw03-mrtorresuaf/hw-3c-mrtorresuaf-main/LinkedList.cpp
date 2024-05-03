#include <iostream>
#include "LinkedList.h"

using std::cerr;
using std::endl;

LinkedList::LinkedList()
      : head{nullptr}
{
      cerr << "LinkedList object constructed using LinkedList() default constructor" << endl;
}

LinkedList::~LinkedList() {
      cerr << "LinkedList object is being destructed using ~LinkedList() destructor" << endl;
      delete head;
      cerr << "LinkedList object has been destructed using ~LinkedList() destructor" << endl;
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
}
