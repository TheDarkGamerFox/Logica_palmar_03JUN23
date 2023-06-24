/*
  2. Hacer una funcion que diga si un caracte está en una cadena de caractéres.
*/
#include <stdio.h>
#include <string.h>
int main(){

  char cadena[100], caracter;
  int count = 0;
  printf("Ingrese la cadena de caracteres: ");
  gets(cadena);
  printf("digite el caracter que busca: ");
  scanf("%c", &caracter);

  for(int i=0;i<strlen(cadena);i++){
    if (cadena[i] == caracter) {
        count++;}
  }

  if (count>0){
    printf("cadena de caracteres \"%s\" posee el caracter \"%c\"", cadena, caracter); 
  } else {
      printf("cadena de caracteres \"%s\" nop posee el caracter \"%c\" repetidas estas veces:\"%d\"", cadena, caracter, count);
    }

  return 0;
}