
#include<stdio.h>
#include<math.h>
int main()
{

    float x1,x2,th1=0.1,y,a,w11=0.1,w12=0.03,w21=0.2,w22=0.4,w31=0.5,w32=0.6,n=0.1,th2=0.2,th3=0.3,s=0.1,h1,h2,o=0.0,h3;
    printf("\nenter the x1 and x2:\n");
    scanf("%f %f",&x1,&x2);
    while(1){

    h1=((w11*x1+w21*x2)+th1);
    h1=1/(1+exp(-h1));
    h2=((w12*x1+w22*x2)+th2);
    h2=1/(1+exp(-h2));
    h3=((w31*h1+w32*h2)+th3);
    h3=1/(1+exp(-h3));
    if(o==h3)
    {
      printf("\n ok");
      break;

    }

    else
    {
        s=((o-th3)*th3*(1-th3));
        printf("\n Now update wight and thresold\n");
        w31= w31+n*s*h1;
        w32=w32+n*s*h2;
        th3=th3+n*s;

        w11=w11+n*s*x1;
        w12=w12+n*s*x1;
        th1=th1+n*s;

        w21=w21+n*s*x2;
        w22=w22+n*s*x2;
        th2=th2+n*s;




    }

    }
    return 0;


}

