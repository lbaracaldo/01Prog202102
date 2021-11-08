#include<iostream>
#include<cmath>

//DECLARACIÓN

double Velocity(double x);
template <typename fptr>
double IntegralTrapezoidal(double a,double b,int h, fptr f);
template <typename fptr>
double IntegralSimpson(double a, double b, int h,  fptr f);

//Función Main
int main(void){
  std::cout.precision(15); std::cout.setf(std::ios::scientific);

const double XMIN=0;
const double XMAX=4;
const double N1=10;
const double N2=1000;
  
  const double IntegralExacta=std::sqrt(sin(XMAX)*3.2-3.2*XMAX*cos(XMAX)-3.2*sin(XMIN)+3.2*XMIN*cos(XMIN));
  
  std::cout<<"10"<<"\t"
	   <<std::fabs(1-std::sqrt(IntegralTrapezoidal(XMIN, XMAX, N1, Velocity))/IntegralExacta)<<"\t"
	   <<std::fabs(1-sqrt(IntegralSimpson(XMIN, XMAX, N1, Velocity))/IntegralExacta)<<"\n";

  std::cout<<"1000"<<"\t"
	   <<std::fabs(1-std::sqrt(IntegralTrapezoidal(XMIN, XMAX, N2, Velocity))/IntegralExacta)<<"\t"
	   <<std::fabs(1-std::sqrt(IntegralSimpson(XMIN, XMAX, N2, Velocity))/IntegralExacta)<<"\n";
 
  return 0;
}



//Función a Integrar(Velocidad al Cuadrado)//

double Velocity(double x)
{
  return std::sin(x)*3.2*x;
}


//IMPLEMENTACIÓN TRAPECIO//

template <typename fptr>
double IntegralTrapezoidal(double a, double b, int h,fptr Velocity)
{
  const double s=(b-a)/h;
  double result=0.0;
  for(int jj=1; jj<=h-1;++jj){
    double xj=a+jj*s;
    result += Velocity(xj);
  }
  result+= 0.5*(Velocity(a)+Velocity(b));
  result *= s;
  
  return result;
}


//IMPLEMENTACIÓN SIMPSON//

template <typename fptr>
double IntegralSimpson(double a, double b, int h, fptr Velocity)
{
  const double s=(b-a)/h;
  double result=0.0;
  for(int jj=0; jj<=h-2;jj=jj+2){
    double xj=a+jj*s; 
  double  Parábola=(1.0/3.0)*s*(Velocity(xj)+4*Velocity(xj+s)+Velocity(xj+2*s));
  result =result+Parábola;
  }
  
  return result;
}

