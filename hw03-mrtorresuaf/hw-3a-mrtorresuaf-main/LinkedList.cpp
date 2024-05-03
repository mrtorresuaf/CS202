#include "LinkedList.h"

LinkedList::LinkedList()
      : head{nullptr}
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
}

int LinkedList::size() const {

	int num_links{0};
	Link* current = head;

	while (current != nullptr) {
	      num_links += 1;
	      current = current -> next;
	}

	return num_links;
}

bool LinkedList::contains(double element) const {
	
	Link* current = head;

	while (current != nullptr) {
		if (current->value == element) {
			return true;
		} else {
			current = current->next;
		}
	}

	return false;
}

void LinkedList::processEachLink(std::function<void(Link*)> aFunction) {

	Link* current = head;

	while (current != nullptr) {
		aFunction(current);
		current = current -> next;
	}
}
