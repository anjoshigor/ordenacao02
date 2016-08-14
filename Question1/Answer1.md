##Em quais situações o insertion sort, o merge sort, o quick sort e o heap sort apresentam sua melhor complexidade? Forneça exemplos para cada algoritmo.

#####Insertion Sort
Este algoritmo é conhecido por ser _O(n²)_, isso significa que ele é limitado superiormente pelo conjunto de funções de ordem _n²_. Ou melhor, ele leva o quadrado do tamanho da entrada para resolver o problema em seu pior caso. Já no seu melhor caso, onde o vetor **já está ordenado**, o algoritmo é _O(n)_. Pelas características que possui, se o vetor já estiver ordenado, o Insertion Sort apenas percorrerá o vetor sem fazer troca alguma, tendo custo _n_.

#####Merge Sort
Acredito que o algoritmo Merge Sort não possui uma situação em que sua complexidade seja variada. Por sua característica, este algoritmo apenas divide o problema em subproblemas, independente da organização, até que chegue ao caso base _(vetor de apenas um elemento)_ e na volta da recursão a ordenação é feita. Como o a divisão é feita sem nenhuma comparação, em qualquer situação o custo desse procedimento será a altura da árvore _logn_ e a ordenação é feita por comparação em cada ramo dessa árvore totalizando o custo de _n_. Sendo assim, sua complexidade _O(nlogn)_ é invariante.

#####Quick Sort
A eficiência do algoritmo Quick Sort baseia-se basicamente na melhor escolha do pivô. A escolha é tão importante que faz sua complexidade variar ente _O(n²)_ e _O(nlogn)_ em seu pior e melhor caso, respectivamente. Se a escolha do pivô for de tal forma que **quebre o problema exatamente ao meio** _(tudo à esquerda menor que o pivô e tudo à direita maior ou igual ao pivõ)_, o algoritmo terá sua melhor eficiência. Caso a escolha do pivô seja de um dos extremos, o algoritmo terá sua pior performance.

#####Heap Sort
Assim como o Merge Sort, o Heap sort possui a mesma complexidade assintótica em seu melhor e pior caso -_O(nlogn)_. A principal característica que os difere é a que este algoritmo faz a ordenação _in-place_ e não utiliza de recurso extra de memória.