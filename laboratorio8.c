#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ListaDoble/ListaDoble.h"  // Asegúrate de que este archivo incluya las declaraciones necesarias

int main() {
    // Expresión infija
    char expresion[] = "(P * Q) + C ^ (-D)";

    // Convertir la expresión a postinfix (forma postfija)
    char *postinfix = PostInfixPtr(expresion);

    // Imprimir la expresión postfija
    printf("Expresion en notacion postfija:\n %s", postinfix);

    // Crear el árbol de expresión
    NodoExpr *arbolExpresion = NULL;
    AgregarNodoExpr(&arbolExpresion, postinfix);

    // Inicializar estructura ArbolBinario y asignar la raíz
    ArbolBinario arbol;
    arbol.raiz = arbolExpresion;
    arbol.altura = 0; // Puedes calcular la altura si lo necesitas
    arbol.tam = 0; // Puedes calcular el tamaño si lo necesitas

    // Imprimir el árbol de expresión por niveles
    printf("\nArbol de expresion (impresion por niveles):\n");
    printBFS(&arbol, printfdatodeseado);  // Debes definir o adaptar la función 'printfdatodeseado'

    // Liberar memoria
    free(postinfix);

    return 0;
}
/*int main() {
    // Expresión infija
    char expresion[] = "A ^B ^C";

    // Convertir la expresión a postinfix (forma postfija)
    char *postinfix = PostInfixPtr(expresion);

    // Imprimir la expresión postfija
    printf("Expresion en notacion postfija:\n %s", postinfix);

    // Crear el árbol de expresión
    NodoExpr *arbolExpresion = NULL;
    AgregarNodoExpr(&arbolExpresion, postinfix);

    // Inicializar estructura ArbolBinario y asignar la raíz
    ArbolBinario arbol;
    arbol.raiz = arbolExpresion;
    arbol.altura = 0; // Puedes calcular la altura si lo necesitas
    arbol.tam = 0; // Puedes calcular el tamaño si lo necesitas



    // Imprimir el árbol de expresión por niveles
    printf("\nArbol de expresion (impresion por niveles):\n");
    printBFS(&arbol, printfdatodeseado);  // Debes definir o adaptar la función 'printfdatodeseado'

    // Liberar memoria
    free(postinfix);

    return 0;
}
*/
/*int main() {
    // Expresión infija
    char expresion[] = "A + B * C / F^H";

    // Convertir la expresión a postinfix (forma postfija)
    char *postinfix = PostInfixPtr(expresion);

    // Imprimir la expresión postfija
    printf("Expresion en notacion postfija:\n %s", postinfix);

    // Crear el árbol de expresión
    NodoExpr *arbolExpresion = NULL;
    AgregarNodoExpr(&arbolExpresion, postinfix);

    // Inicializar estructura ArbolBinario y asignar la raíz
    ArbolBinario arbol;
    arbol.raiz = arbolExpresion;
    arbol.altura = 0; // Puedes calcular la altura si lo necesitas
    arbol.tam = 0; // Puedes calcular el tamaño si lo necesitas

    // Imprimir el árbol de expresión por niveles
    printf("\nArbol de expresion (impresion por niveles):\n");
    printBFS(&arbol, printfdatodeseado);  // Debes definir o adaptar la función 'printfdatodeseado'

    // Liberar memoria
    free(postinfix);

    return 0;
}
*/