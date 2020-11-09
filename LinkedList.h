#ifndef LINKED_LIST_
#define LINKED_LIST_

#include <memory>

#include "ListInterface.h"
#include "Node.h"

template <typename ItemType>
class LinkedList : public ListInterface<ItemType> {
private:
   std::shared_ptr<Node<ItemType>> headPtr;

   int itemCount = 0;

   auto getNodeAt(int position) const;

public:
   LinkedList() = default;

   LinkedList(const LinkedList<ItemType>& aList);

#ifdef DTOR_TEST
   virtual ~LinkedList();
#else
   virtual ~LinkedList() = default;
#endif

   virtual bool isEmpty() const;

   virtual int getLength() const;

   virtual bool insert(int newPosition,
                       const ItemType& newEntry);

   virtual bool remove(int position);

   virtual void clear();

   virtual ItemType getEntry(int position) const;

   virtual ItemType replace(int position,
                            const ItemType& newEntry);
};

#include "LinkedList.cpp"

#endif
