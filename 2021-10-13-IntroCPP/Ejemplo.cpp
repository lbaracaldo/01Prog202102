
//CALCULAR LOS NÚMEROS PARES ENTRE 1 Y 100

//Incluir las librerías que se van a utilizar
#include <iostream>
#include <cmath>

void print_even(int nmin, int nmax); //Declaración

//main function
int main(void)
{
  const int m = 1;
 const int n = 15;
    
 print_even(m,n);
 print_even(m/2,2*n);
 
  return 0;
}

void print_even(int nmin, int nmax) // Implementación
{
  for(int ii = nmin; ii <= nmax; ii = ii+1){
      //Si el número es par, entonces imprimir
      if(ii%2 == 0){
	std::cout << ii << " ";
      }
    }
  std::cout << "\n";
}
