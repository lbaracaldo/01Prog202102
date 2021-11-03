#include<iostream>

/*
N-> long long
Calcular los divisores primos:
Calcular el divisor
Verificar si el divisor es primo

 */

int main(void)
{
  const long long N = 6008514751437;
  for (long long ii = 2; ii<N; ii++){
    if (N%ii == 0){
      long long largedivisor=N/ii;
      bool isprime = true; //Se supone que es primo
      for(long long jj = 2; jj<largedivisor; jj++){
	if(largedivisor%jj==0){ //Se verifica si tiene otro divisor
	  isprime=false; //Si tiene divisor diferente, es falso, no es primo.
	  break; //Solo encontrando un divisor mas no es primo, así que no se verifica todo.
	} //Salen solo los primos(isprime=true)
    }
      if(isprime) { 
	std::cout <<largedivisor <<std::endl;
	break;
      }
    }
  }
  return 0;
}
