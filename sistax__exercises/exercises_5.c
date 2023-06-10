#include <stdio.h>

int main() {
  /*
    variables en C

    las variables son contenedores para alamcenar valores de datos, como numeros y caracteres.

    En C, hay diferentes tipos de variables (definidas por diferentes palabras clave), por ejempo:

      *int - almacena enteros (numeros enteros), sin decimales, como 123 o -123

      *float - almacena numeros de coma  flotantes o decimales, como 19.99 o -19.99
      *char - almacena caracteres individuales como 'a' o 'b'. Los valores de char estan entre comillas simles
  */

  /*
    Declaracion (Crear) variables

    para crear una variable en C especifique el tipo y signele un valor

    *sintaxis

     tipo nombreVariable = valor

     Donde tipo es uno de los tipos de variables de C (como int) y nombreVariable es el nombre de la variable (como x miNombre)
. El signo = se utiliza para asignar el valor de una variable.
 */

// Crear una variable que almacene un numero entero

/*
Tambien puede adignar una variable sin asigar el valor y colocarselo mas tarde 
*/

// declaracion de la variable
int myNum;

// Asignamos el valor de la variable 
myNum = 15;

/*
si intentamos imprimir una variable en C no va a ocurrir nada si no le damos el formato especifico 
*/

// especificadores de formato

/*los especificadores de formato se usan junto con la funcion print() para decirle al compilador que tipo de datos estan almacenados la variale 

un especificador de formato comienza con un signo de % , seguido de un caracter 

por ejemplo, generalmente el valor de int, debe usar el especificador de formato %d o %i y estar entre comillas doble dentro, de la funcio printf(),
*/
/* int myNumero = 15;
printf("%d", myNumero);  */// y nada va a ocurrir

  /*
    para imprimir o hacer uso de variables debemos familirizanos con los especifcaciones de formato

//para imprimir otros tipos, use %c para char y %f para float

//decimal o coma flotante 

  */
/* 
    float miNumeroDecimal = 9.33;

    //para un caracter 
    char miLetra = 'N'; */

    //impresion de variables 
/*   printf("%f\n", miNumeroDecimal);
  printf("%c\n", miLetra); */

  //para cambiar texto y una variable, separelo con una coma dentro de la funcion printf
  /* int miNumero = 50;

  printf("Minumero favorito es el: %d", miNumero); 
  */

/*
para imprimir diferentes tipos de variables en un solo printf() se puede hacer lo sigiente
 */

/* int miNumero =30; 
char miLetra = 'L';

printf("Mi numero es %d y mi letrra es la %c", miNumero, miLetra); */

//cambiar valores de variable 

/* si asignamos un nuevo valor a una variable existente, sobreescribimos el valor anterior */


/* int miNumero = 19;
miNumero = 91;

printf("%d", miNumero); */


/*
tambien podemos asignar el valor de una variable a otra

*/

//Asignamos el valor de una variable a otra

/* int miNumero =57;
int miOtroNumero=14;
 */
//Asignamos el valor de miOtroNumero (14) a miNumero
/* miNumero = miOtroNumero;
 */
//miNumero es ahora el 14, en el lugar del 57
/* printf("%d", miNumero); */

/* int miNumero =57;
int miOtroNumero= miNumero;

printf("%d", miOtroNumero); */

//suma valores de variables

int x = 8;
int y = 15;
int suma = x y;
printf("%d", suma); 


    return 0;

}
