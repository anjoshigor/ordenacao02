#include "answer2.hpp"


Node::~Node(){};
Node::Node(int value){
  this->value = value;
  this->next = nullptr;
}

void List::append(int value){
  Node* aux = new Node(value);
  aux->next = this->head;
  this->head = aux;
  this->size++;
}

List::List(){
  this->head = nullptr;
};
List::~List(){};
