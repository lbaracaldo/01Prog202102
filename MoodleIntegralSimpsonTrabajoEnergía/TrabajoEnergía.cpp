#include<iostream>
#include<cmath>

//DECLARACIÓN

double Velocity(double x);
template <typename fptr>
double IntegralTrapezoidal1(double a,double b,double h, fptr f);

int main(void){
  std::cout.precision(15); std::cout.setf(std::ios::scientific);
  const double XMIN=0;
  const double XMAX=4;
  const double N1=10;
  const double N2=1000;
  const double h=0.4;
  
  const double IntegralExacta=std::sin(XMAX)*3.2-3.2*XMAX*sin(XMAX)-3.2*sin(XMIN)+3.2*XMIN*sin(XMIN);
 std::cout<<fabs(1-IntegralTrapezoidal1(XMIN,XMAX,h,Velocity)/IntegralExacta)<<"\n";

  std::cout<<IntegralTrapezoidal1(XMIN,XMAX,h, Velocity)<<"\n";
  return 0;
}


//IMPLEMENTACIÓN

double Velocity(double x)
{
  return std::sin(x)*3.2*x;
}

template <typename fptr>
double IntegralTrapezoidal1(double a, double b, double h,fptr Velocity)
{
  double result=0.0;
  for(int jj=1; jj<=9;++jj){
    double xj=jj*h;
    result += Velocity(xj);
  }
  result+= 0.5*(Velocity(a)+Velocity(b));
  result *= h;
  
  return result;
}
