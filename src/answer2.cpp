#include "answer2.hpp"


Node::~Node(){};
Node::Node(int value){
  this->value = value;
  this->next = nullptr;
}

void List::prepend(int value){
  Node* aux = new Node(value);
  aux->next = this->head;
  this->head = aux;

  if(this->head->next = nullptr)
    this->tail = aux;

  this->size++;
}

void List::append(int value){
  Node* aux = new Node(value);
    if (this->tail == nullptr)
    {
        aux->next = this->tail;
        this->tail = aux;
        this->head = aux;
        this->size++;
        return;
    }
  this->tail->next = aux;
  this->tail = this->tail->next;
  this->size++;
}

List::List(){
  this->head = nullptr;
  this->tail = nullptr;
};
List::~List(){};

int List::getValue(int pos){
  if((pos-1)>=this->size)
    return -1;

  Node* aux = this->head;

  for (int i = 0; i < (pos-1); i++) {
    aux = aux->next;
  }

  return aux->value;
}


Node* List::getNode(int pos){
  if((pos-1)>=this->size)
    return nullptr;

  Node* aux = this->head;

  for (int i = 0; i < (pos-1); i++) {
    aux = aux->next;
  }

  return aux;
}

Node* List::getPreviousNode(int pos){
  if((pos-1)>=this->size)
    return nullptr;

	if((pos-1)==0)
		return this->head;


  Node* aux = this->head;

  for (int i = 0; i < (pos-2); i++) {
    aux = aux->next;
  }

  return aux;
}

void List::swap(Node* lhs, Node* rhs){
	int aux = lhs->value;
	lhs->value = rhs->value;
	rhs->value = aux;
}
