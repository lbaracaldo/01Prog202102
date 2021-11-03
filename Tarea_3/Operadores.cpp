#include<iostream>

int main (void){

long long  int i=0;
const long long int N=600851475147;
  
  for(i=2;i<N;i=i+1){
    if(N%i == 0){
      break;
    }
   }
 long long int MáximoDivisordeN=N/i;
 std::cout <<MáximoDivisordeN;
 return 0;
}

/*
Al utilizar "break" en el la función if,se obtiene el mínimo divisor de N diferente de 1 es decir,el número con el que se pueden realizar las particiones mas grandes de N, entonces;el máximo divisor de N es el número de partes posibles al dividir N entre su mínimo divisor.
*/

