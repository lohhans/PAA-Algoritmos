# **Algoritmos de PAA - 2018.2**
Implementação de quatro algoritmos para a disciplina de "[Projeto e Análise de Algoritmos][PAA]", no curso de [Ciência da Computação na Universidade Federal Rural de Pernambuco - Unidade Acadêmica de Garanhuns][UFRPE]. Estruturas desenvolvidas conforme orientação do [Prof. Tiago B. A. de Carvalho][professor].

# Implementações:

## Grafo

- [x] [Algoritmo de Kruskal][grafo]

## Paradigma Guloso

- [x] [Problema bitônico do caixeiro-viajante][guloso]

## Backtracking

- [x] [Permutação de números][bt]

## Branch and Bound

- [ ] Não implementado ainda

---

### Detalhe sobre as entradas:

---

* #### **Kruskal:**

    Neste algoritmo, o formato de entrada deverá ser feito da seguinte forma: lista com as arestas.

    Lista de adjacencia de um grafo G com 6 vértice e 8 arestas (3a coluna é o peso da aresta)

    ```
    6 8 <br>
    1 2 5 <br>
    1 3 4 <br>
    1 4 2 <br>
    1 6 6 <br>
    2 4 1 <br>
    2 5 7 <br>
    3 5 6 <br>
    4 6 1 <br>
    ```

    Se a 3a coluna for omitida vale 1. Neste caso todos os pesos das arestas valem 1

    ```
    6 8 <br>
    1 2 <br>
    1 3 <br>
    1 4 <br>
    1 6 <br>
    2 4 <br>
    2 5 <br>
    3 5 <br>
    4 6 <br>
    ```

    (...)

    Execute o comando ``make`` no terminal, então o nome do binário a ser executado será *kruskal*, ele possuirá os seguintes parâmetros:

    ```
    -h : mostra o help
    -o <arquivo> : redireciona a saida para o ‘‘arquivo’’
    -f <arquivo> : indica o ‘‘arquivo’’ que contém o grafo de entrada
    -s : mostra a solução (em ordem crescente)
    ```

    Exemplo de execução correta do arquivo:

    Para calcular o custo da árvore geradora mínima da matriz exemplo:
    ```
    $ ./kruskal -f arquivo-entrada.dat
    14
    ```
    Para imprimir a árvore do exemplo anterior:
    ```
    $ ./kruskal -f arquivo-entrada.dat -s
    (1,3) (1,4) (2,4) (3,5) (4,6)
    ```

    * Os arquivos de entrada para este algoritmo estão na pasta ``../PAA-Algoritmos/Grafo/*aqui*``


* #### **Problema bitônico do caixeiro-viajante:**

    Não foi implementado método de leitura de dados, logo, qualquer alteração deve ser feita no arquivo de execução, localizado em: ``../PAA-Algoritmos/Guloso/teste.py``

* #### **Permutação de números:**

    Não foi implementado método de leitura de dados, logo, qualquer alteração deve ser feita no arquivo de execução, localizado em: ``../PAA-Algoritmos/Backtracking/main.c``

    Para executar, use o comando ``make`` no terminal, o nome do binário será *permutacao*, então use:

    ```
    $ ./permutacao
    ```

* #### **Branch and Bound [Não implementado]:**

<!-- Links -->

[PAA]: https://sites.google.com/site/tiagoufrpe/home/projeto-e-analise-de-algoritmos-2018-2
[UFRPE]: http://bcc.uag.ufrpe.br/~portal/
[professor]: https://sites.google.com/site/tiagoufrpe/
[grafo]: https://github.com/lohhans/PAA-Algoritmos#kruskal
[guloso]: https://github.com/lohhans/PAA-Algoritmos#problema-bit%C3%B4nico-do-caixeiro-viajante
[bt]: https://github.com/lohhans/PAA-Algoritmos#permuta%C3%A7%C3%A3o-de-n%C3%BAmeros
<!-- [bnb]:  -->
