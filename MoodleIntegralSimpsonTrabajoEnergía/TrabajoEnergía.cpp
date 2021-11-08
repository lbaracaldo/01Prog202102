#include<iostream>
#include<cmath>

//DECLARACIÓN

double Velocity(double x);
template <typename fptr>
double IntegralTrapezoidal1(double a,double b,int h, fptr f);

int main(int argc, char **argv){
  std::cout.precision(15); std::cout.setf(std::ios::scientific);
  const double XMIN=std::atof(argv[1]);
  const double XMAX=std::atof(argv[2]);
  const int h=std::atoi(argv[3]);
  
  const double IntegralExacta=std::sqrt(sin(XMAX)*3.2-3.2*XMAX*cos(XMAX)-3.2*sin(XMIN)+3.2*XMIN*cos(XMIN));
  std::cout<<IntegralExacta<<"\n";

std::cout<<std::sqrt(IntegralTrapezoidal1(XMIN,XMAX,h, Velocity))<<"\n";
   
  std::cout<<fabs(1-std::sqrt(IntegralTrapezoidal1(XMIN,XMAX,h,Velocity))/IntegralExacta)<<"\n";

  return 0;
}


//IMPLEMENTACIÓN

double Velocity(double x)
{
  return std::sin(x)*3.2*x;
}

template <typename fptr>
double IntegralTrapezoidal1(double a, double b, int h,fptr Velocity)
{
  const double s=(b-a)/h;
  double result=0.0;
  for(int jj=1; jj<=h-1;++jj){
    double xj=jj*s;
    result += Velocity(xj);
  }
  result+= 0.5*(Velocity(a)+Velocity(b));
  result *= s;
  
  return result;
}
