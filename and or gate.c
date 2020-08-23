
#include<stdio.h>
int main()
{
    int i,j,k=0;
    float x1,x2,th=0.8,y,a,w1=0.9,w2=1,n=0.1,net,w11,w22,th1,in[5];
    printf("enter the output value\n");
    for(i=0;i<4;i++)
    {
        scanf("%f",&in[i]);

    }

    while(1){
    printf("\nenter the x1 and x2:\n");
    scanf("%f %f",&x1,&x2);
    net=((w1*x1+w2*x2)-th);
    if(net>0)
    {
      y=1;

    }
    else if(net<=0)
    {
        y=0;

    }

    a=in[k]-y;

    if(a==0)
    {
        printf("\nok");

      k=k+1;
      if(k==4)
      {
          printf("\nall neuron are set for and gate\n");
          printf("w1=%f,w2=%f,th=%f\n",w1,w2,th);
          break;
      }

    }
    else
    {
        printf("\n Now update wight and thresold\n");
        w11=n*a*x1;
        w1=w1+w11;
        w22=n*a*x2;
        w2=w2+w22;
        th1=-n*a;
        th=th+th1;


        k=0;
    }

    }
    return 0;


}
