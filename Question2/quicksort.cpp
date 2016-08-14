#include "quicksort.hpp"
#include <utility>

int partition(List& list, int p, int r){
  int x = list.getValue(r);
  int i = p;

  for (int j = p; j < r; j++) {
    if(list.getValue(j) <= x){
      list.swap(list.getNode(i), list.getNode(j));
      i++;
    }
  }


  list.swap(list.getNode(i), list.getNode(r));
  return i;
}

void sort(List& list, int p, int r){
  int pivot;
  if(p<r){
    pivot = partition(list, p, r);
    sort(list, p, pivot-1);
    sort(list, pivot+1, r);
  }
}

void quicksort(List& list, int n){
  sort(list, 0, n);
}
