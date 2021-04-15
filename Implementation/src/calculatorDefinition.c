/**
 * @file calculatorDefinition.c
 * @author your name (sayani0498@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */







#include "cal.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
const double pi=3.14159;
double add (double a,double b)
{
    double sum=0;
    sum=a+b;
    return sum;
}
double subtract(double a,double b)
{
    double sub=0;
    sub=a-b;
    return sub;
}
double multiply(double a,double b)
{
    double mul=1;
    mul=a*b;
    return mul;
}
double division(double a,double b)
{
    double div;
    if(b==0)
    {
        printf("Cannot divide by 0");
    }
    else
    {
    div=a/b;
    }
    return div;
}
double square(double a)
{
    double sq=1;
    sq=a*a;
    return sq;
}
double power(double a,int n )
{
    double po;
    po=pow(a,n);
    return po;
}
int factorial(int n)
{
    unsigned int fac=1;
    if(n==0)
    {
        return 1;
    }
    else
    {
    for(int i=2;i<=n;i++)
      {
       fac=fac*i;
      }
    }
    return fac;
}
int absolute_val(float a)
{
    int x;
    x=abs (a);
    return x;
}
int floor_val(float a)
{
    int x;
    x=floor(a);
    return x;
}
double sqr_root(double a)
{
    double root;
    root=sqrt(a);
    return root;
}
double cos_val(double x,int n)
{
    n=3;
    x=x*(pi/180);
    double result=1;
    double s=1,fact=1,pow=1;
    for(int i=1;i<5;i++)
    {
        s=s*(-1);
        fact=fact*(2*i-1)*(2*i);
        pow=pow*x*x;
        result=result+s*(pow/fact);
    }
    return result;
}
double sin_val(double x)
{
   
    
    double result;
    result=1-square(cos_val(x,3));
    result=sqr_root(result);
    return result;
}
double tan_val(double x)
{
   ;
    double result;
    result=sin_val(x)/cos_val(x,3);
    return result;
    
}
double logarithm(double a)
{
    double result;
    result=log(a);
    return result;
} 
double triangle(double l,double b)
{
    double area;
    area=1/2*(b*l);
    return area;
}
double circle(double r)
{
    double area,peri;
    area=pi*r*r;
    peri= 2*pi*r;
    printf( "Area is %lf and Perimeter is %lf", area,peri);
    return 0;
}
double rectangle(double l,double b)
{
    double area,peri;
    area=l*b;
    peri= 2*(l+b);
    printf( "Area is %lf and Perimeter is %lf", area,peri);
    return 0;
}
double trapezium(double a,double b,double h)
{
    double area;
    area=((a+b)/2)*h;
    return area;
}
double parallelogram(double b,double h)
{
    double area;
    area=b*h;
    return area;
}
double si(double p,double r,int t)
{
    double result;
    result=(p*r*t)/100;
    printf("Interest Earned = %lf", result );
    result=p+result;
    printf("Amount after %d years = %lf", t,result);
    return 0;
}
double ci(double p,double r,int n)
{
    double frac,amount,inte;
    frac=(100.0+r)/100.0;
    amount=p*pow(frac,n);
    inte=amount - p;
    printf("Amount after %d years = %lf", n,amount);
    printf("Interest Earned = %lf", inte );
    return 0;
}