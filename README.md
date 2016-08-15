# ordenacao02
Created to answer second project questions in Design and Analysis of Algorithms course at UFPB

# Project Description
Algoritmos de ordenação são extremamente importantes como subrotinas para diversos algoritmos encontrados em sistemas reais. Por este motivo, muitas entrevistas de empresas interessadas em contratar bons desenvolvedores envolvem este tema.

Abaixo, você encontrará perguntas retirada de livros (1-3, de caráter didático) e outras retiradas de entrevistas (4-6, de caráter prático). Resolva o máximo de questões que conseguir.

As questões de entrevistas valem pontos extras para a prova da primeira unidade, mas só serão avaliadas se as questões de caráter didático estiverem corretas. Além disto, nas questões de entrevista você será avaliado não só pela corretude da solução, como também pela eficiência (complexidade e grau de otimização) da sua solução.

###Perguntas:
1-  Em quais situações o insertion sort, o merge sort, o quick sort e o heap sort apresentam sua melhor complexidade? Forneça exemplos para cada algoritmo. [Answer](Question1/Answer1.md)

2- Implemente o quicksort para ser aplicado a uma lista simplesmente encadeada.[Answer](Question2)

3- Dado um vetor ordenado de inteiros que pode apresentar elementos repetidos e que foi rotacionado N vezes (você não sabe o valor de N). Escreva uma função que busque a posição de um dado elemento de forma eficiente. Se o elemento estiver presente repetidas vezes, retorne a posição da primeira ocorrência deste elemento.[Answer](Question3)

4- São dados dois vetores como entrada, sendo o primeiro um vetor de caracteres contendo apenas códigos que representam o tipo de cor a que se referem (“R”, “G” ou “B”) e, o segundo um vetor de inteiros contendo os valores dos componentes das cores. Escreva uma função que ordene os dois vetores de tal forma que as cores referentes a “R” precedam as cores referentes a “G”, que por sua vez precedam as cores referentes a “B”.[Answer](Question4)

# How to test everything:

#####Run make for the answer you want to test
``` 
make answer#
```

#####A `tesA#` executable file will be created, to run do as follow:
``` 
./testA# < Question#/input#
```

Where _#_ is the number of the question you want to test.

:octocat: \+ info: higor.araujo.anjos@gmail.com
