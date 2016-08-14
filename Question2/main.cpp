#include "quicksort.hpp"
#include <iostream>

int main(int argc, char const *argv[]) {
  int n;

  std::cin >> n;

  List linked_list;

  for (int i = 0; i < n; i++) {
    int v;
    std::cin >> v;
    linked_list.append(v);
  }

  //using modified quicksort
  quicksort(linked_list, n);


  //printing
  Node* head = linked_list.head;
  while(head){
    std::cout << head->value << std::endl;
    head = head->next;
  }

  return 0;
}
