#include<iostream>

int main (void)
{
  int suma =0;
  int m=0;
  const int MAX=10;

  for(m=1;m<MAX;m=m+1){
  if((m%3==0) || (m%5==0)) {
    suma +=m;
  }
  std::cout << suma << "\n";
  }
  return 0;
}
