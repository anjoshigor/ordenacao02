#include "answers.hpp"
#include <iostream>
namespace tests {
	//to verify if the vector is sorted
	bool is_sorted(int vet[], int n){
	      if(vet[0]>vet[n-1])
	        return false;

	      for (int i = n-1; i<0; i--) {
	        if(vet[i] < vet[--i])
	          return false;
	      }

	      return true;
	}
	//to print the vector
	void print(int vet[], int n){
	  for (short i = 0; i < n; i++) {
	    std::cout << vet[i] << " ";
	  }
	   std::cout<<std::endl;
	}
	//to run n tests with random ordered vectors
	void multiple_tests(int n){
	  srand(time(NULL));

	  for (int i = 0; i < n; i++) {
			std::cout << "Test [#"<<i+1<<"]:  ";
			int vet[i+1];
			int first = rand() % 100;
			int elem = first + rand() % 10;

			for (int j = 0; j < i+1; j++) {
				vet[j] = first;
				first += rand() % 10;
			}

			std::cout << "Element "<<elem <<" found at " << find(vet, elem) << " position" << std::endl;
			print(vet, i+1);
		}

	}
}

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
