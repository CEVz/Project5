#ifndef LINKED_LIST_
#define LINKED_LIST_

#include <memory>

#include "ListInterface.h"
#include "Node.h"

/** @class LinkedList LinkedList.h "LinkedList.h"
 *
 *  Specification of a smart pointer-based ADT list. */
template <typename ItemType>
class LinkedList : public ListInterface<ItemType> {
private:
   // Note: Automatically initialized to nullptr:
   std::shared_ptr<Node<ItemType>> headPtr;

   int itemCount = 0;

   /** Locates the node at the specified position in this list.
    *
    *  @pre 1 <= position <= itemCount
    *
    *  @post None.
    *
    *  @param position The desired position to locate.
    *
    *  @return A std::shared_ptr to the position-th node in this list.
    */
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
