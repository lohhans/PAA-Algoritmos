# **Algoritmos de PAA - 2018.2**
Implementação de quatro algoritmos para a disciplina de "[Projeto e Análise de Algoritmos](PAA)", no curso de [Ciência da Computação na Universidade Federal Rural de Pernambuco](UFRPE). Estruturas desenvolvidas conforme orientação do [Prof. Tiago B. A. de Carvalho](professor).

# Implementações:

## Grafos

- [x] Dijkstra

## Paradigma Guloso

- [x] Dijkstra

## Backtracking

- [ ] Não implementado ainda

## Branch and Bound

- [ ] Não implementado ainda

---

### Detalhe sobre as entradas:

---

* Dijkstra

    Neste algoritmo de grafo e guloso, o formato de entrada deverá ser feito da seguinte formas: lista com as arestas.

    Lista de adjacencia de um grafo G com 6 vértice e 8 arestas (3a coluna é o peso da aresta)

    6 8 <br>
    1 2 5 <br>
    1 3 4 <br>
    1 4 2 <br>
    1 6 6 <br>
    2 4 1 <br>
    2 5 7 <br>
    3 5 6 <br>
    4 6 1 <br>

    Se a 3a coluna for omitida vale 1. Neste caso todos os pesos das arestas valem 1

    6 8 <br>
    1 2 <br>
    1 3 <br>
    1 4 <br>
    1 6 <br>
    2 4 <br>
    2 5 <br>
    3 5 <br>
    4 6 <br>

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

    * Os arquivos de entrada estão na pasta ../PAA-Algoritmos/Grafo & Guloso/*~aqui~*


<!-- Links -->

[PAA]: https://sites.google.com/site/tiagoufrpe/home/projeto-e-analise-de-algoritmos-2018-2
[UFRPE]: http://bcc.uag.ufrpe.br/~portal/
[professor]: https://sites.google.com/site/tiagoufrpe/
