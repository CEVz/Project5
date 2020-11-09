#ifndef NODE_
#define NODE_

#include <memory>

template <typename ItemType>
class Node {
private:
   ItemType item;

   std::shared_ptr<Node<ItemType>> next;

public:
 
   Node() = default;

   explicit Node(const ItemType& anItem,
                 std::shared_ptr<Node<ItemType>> nextNodePtr = nullptr);

#ifdef DTOR_TEST
 
   ~Node();
#else
 
   ~Node() = default;
#endif

   void setItem(const ItemType& anItem);

   void setNext(const std::shared_ptr<Node<ItemType>>& nextNodePtr);

   ItemType getItem() const;

   auto getNext() const;
};

#include "Node.cpp"

#endif
