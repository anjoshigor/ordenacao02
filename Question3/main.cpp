#include "answer3.hpp"
#include <iostream>

int main(int argc, char const *argv[]) {
    int n;
    //size of vector
    std::cin >> n;
    int vector[n];

    //each element
    for (int i = 0; i < n; i++) {
      int v;
      std::cin >> v;
      vector[i]=v;
    }

    int elem;
    std::cin >> elem;
    std::cout << "Element found at "<< find(vector, elem) <<" position!"<< std::endl;

}
