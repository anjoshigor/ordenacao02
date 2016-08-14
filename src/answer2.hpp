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
  void append(int value);
};



#endif
