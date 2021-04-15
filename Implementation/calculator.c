#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
#include "cal.h"


int main()
{
   
    printf("1.Addition(argument 1,argument 2)\n 2.Subtraction(argument 1, argument 2)\n 3.Multiplication(argument 1, argument 2)\n 4.Division(argument 1, argument 2)\n 5.Square(argument 1)\n 6.Power(argument 1, argument 2)\n 6.Factorial(argument 1)\n 8.Absolute(argument 1)\n 9.Floor(argument 1)\n 10.SquareRoot(argument 1)11.Cosine(argument 1, argument 2)\n 12.Sine(argument 1)\n 13.Tan(argument 1)\n 14.Logarithm(argument 1)\n 15.Triangle(argument 1, argument 2)\n 16.Circle(argument 1)\n 17.Rectangle(argument 1, argument 2)\n 18.Trapezium(argument 1, argument 2,argument 3)\n 19.Parallelogram(argument 1, argument 2)\n 20.SimpleInterest(Principal,rate,time)\n 21.CompoundInterest(Principal,rate,time)\n");
    scanf(" %d",&i);
    switch(i)
    {
        
        case 1:
        scanf("%lf %lf",&a,&b);
        printf("%lf",add(a,b));
        break;

        case 2:
        scanf("%lf %lf",&c,&d);
        printf("%lf",subtract(c,d));
        break;

        case 3:
        scanf("%lf %lf",&e,&f);
        printf("%lf",multiply(e,f));
        break;

        case 4:
        scanf("%lf %lf",&g,&h);
        printf("%lf",div(g,h));
        break;

        case 5:
        scanf("%lf",&k);
        printf("%lf",square(k));
        break;

        case 6:
        scanf("%lf %d",&l,&m);
        printf("%lf",power(l,m));
        break;

        case 7:
        scanf("%lf",&o);
        printf("%d",factorial(o));
        break;

        case 8:
        scanf("%f",&p);
        printf("%d",absolute_val(p));
        break;

        case 9:
        scanf("%f",&q);
        printf("%d",floor_val(q));
        break;

        case 10:
        scanf("%lf",&s);
        printf("%lf",sqr_root(s));
        break;

        case 11:
        scanf("%lf",&xt);
        printf("%lf",cos_val(xt,3));
        break;
        
        case 12:
        scanf("%lf",&xn);
        printf("%lf",sin_val(xn));
        break;

        case 13:
        scanf("%lf",&xs);
        printf("%lf",tan_val(xs));
        break;

        case 14:
        scanf("%lf",&ab);
        printf("%lf",logarithm(ab));
        break;

        case 15:
        scanf("%lf %lf",&le,&br);
        printf("%lf",triangle(le,br));
        break;

        case 16:
        scanf("%lf",&ra);
        circle(ra);
        break;

        case 17:
        scanf("%lf %lf",&lh,&bh);
        rectangle(lh,bh);
        break;

        case 18:
        scanf("%lf %lf %lf",&an,&bt,&hb);
        printf("%lf",trapezium(an,bt,hb));
        break;

        case 19:
        scanf("%lf %lf",&bz,&hz);
        printf("%lf",parallelogram(bz,hz));
        break;

        case 20:
        scanf("%lf %lf",&pq,&rd);
        scanf("%d",&ta);
        si(pq,rd,ta);
        break;

        case 21:
        scanf("%lf %lf",&po,&re);
        scanf("%d",&nm);
        ci(po,re,nm);
        break;

        default:
        printf("Wrong choice");
   }
    return 0;

}