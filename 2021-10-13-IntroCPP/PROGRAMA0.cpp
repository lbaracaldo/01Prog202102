
//CALCULAR LOS NÚMEROS IMPARES ENTRE 1 Y 100

#include <iostream>
#include <cmath>

void print_even(int nmin, int nmax);

int main(void)
{
  const int m = 1;
  const int n= 100;

  print_even(m,n);

    return 0;
}

void print_even(int nmin, int nmax)
{
  for(int ii = nmin; ii <= nmax; ii=ii+1){
    if(ii%3 == 0){
      std::cout << ii << " ";
    }
  }
  std::cout << " ";
}
