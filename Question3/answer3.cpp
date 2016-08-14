/**Dado um vetor ordenado de inteiros que pode apresentar elementos repetidos e
que foi rotacionado N vezes (você não sabe o valor de N).
Escreva uma função que busque a posição de um dado elemento de forma eficiente.
Se o elemento estiver presente repetidas vezes, retorne a posição da primeira
ocorrência deste elemento.**/

int find(int* vet, int elem){
  int i=0; int j=1;

  while(vet[i]<=vet[j]){

    if(vet[i]==elem)
      return ++i;

    i++; j++;
  }

  return -1;

}
