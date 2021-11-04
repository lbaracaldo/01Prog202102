#include<iostream>

bool isprime (long long n); //Declaración
long long largestprimedivisor (long long n);

int main(void)
{
  const long long N = 600851475147;
  std::cout <<largestprimedivisor(N)<<std::endl;
	
  return 0;
}

//Implementación
long long largestprimedivisor(long long n)
{
  long long result = n;
  for (long long ii=2;ii<n;ii++){
    if (n%ii==0){
      long long largedivisor=n/ii;
      if (isprime(largedivisor)==true){
	result=largedivisor;
	break;
      }
    }
  }
  return result;
}


bool isprime(long long n)
{
 bool isprime = true;
      for(long long jj = 2; jj<n; jj++){
	if(n%jj==0){
	  isprime=false;
	  break;
	}
      }
  return isprime;
}
