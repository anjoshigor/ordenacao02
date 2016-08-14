#include "src/answer2.hpp"
#include <iostream>

int main(int argc, char const *argv[]) {
  int n;
  //size of vector
  std::cin >> n;

  //linked list
  List linked_list;

  //each element
  for (int i = 0; i < n; i++) {
    int v;
    std::cin >> v;
    //appending
    linked_list.append(v);
  }

  Node* head = linked_list.head;
  while(head){
    std::cout << head->value << std::endl;
    head = head->next;
  }

  return 0;
}
