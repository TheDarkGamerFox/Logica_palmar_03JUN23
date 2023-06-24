/* 
hacer una funcion que diga en na cadena hay solo digitos
 */

#include <stdio.h>
#include <string.h>

int main(){
  char cadena[100];
  int i, cont =0;

  printf("Dijite una cadena:");
  gets(cadena);
  
    for(i = 0; i < strlen(cadena); i++){
    if (cadena[i] >= '0' && cadena[i] <= '9') ;{
    cont++;
    }
    }

    if(cont == strlen(cadena)) {
    printf("La cadena de caracteres solo posee digitos \"%s\"", cadena);
    }else{
    printf("La cadena de caracteres posee no posee solo \"%d" "digitos");
  }
return 0; 
}
