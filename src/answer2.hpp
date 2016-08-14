#ifndef LIST_H
#define LIST_H

class Node {
public:
  Node (int value);
  virtual ~Node ();
  int value;
  Node* next;
};


class List {
public:
  List();
  virtual ~List ();
  int size;
  Node* head;
  Node* tail;
  void append(int value);
  void prepend(int value);
  int getValue(int pos);
  Node* getNode(int pos);
  Node* getPreviousNode(int pos);
  void swap(Node* lhs, Node* rhs);
};



#endif
