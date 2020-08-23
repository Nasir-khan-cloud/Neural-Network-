#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m=0,n;
    float a[20],b[20],ac[20],bc[20],max[20],min[20],x=0,y=0,p[20],
    c=0.3,ca[20],cb[20],pa[20],pb[20],c1=3,min1[20],min2[20],dis[20];
    printf(" enter the number  how many element you input each set:\n ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {


        a[i]=1/((2*x)+1);
        ac[i]=1-a[i];
        x=x+1;
    }

    for(i=0;i<n;i++)
    {

        b[i]=1/(pow(3,y));

        y=y+1;
        bc[i]=1-b[i];

    }

    for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            max[i]=a[i];
            min[i]=b[i];

        }
        else
        {
            max[i]=b[i];
            min[i]=a[i];
        }
    }
    printf("------------------------------------------------------------------------------------------\n");
    printf("Union of A,B:{");

    for(i=0;i<n;i++)
    {
        printf("(%d,%g),",i,max[i]);
    }
    printf("}");
    printf("\n");

    printf("intersection of A,B:{");

    for(i=0;i<n;i++)
    {
        printf("(%d,%g),",i,min[i]);
    }
    printf("}");
    printf("\n");
    printf("------------------------------------------------------------------------------------------\n");
    printf("Now complement of each is:\n");
    printf("complement of A:{");
    for(i=0;i<n;i++)
    {
        printf("(%d,%g),",i,ac[i]);
    }
    printf("}");
    printf("\n");

    printf("complement of B:{");
    for(i=0;i<n;i++)
    {
        printf("(%d,%g),",i,bc[i]);
    }
    printf("}\n");
    printf("------------------------------------------------------------------------------------------\n");
    printf("product of of A,B:{");

    for(i=0;i<n;i++)
    {
        p[i]=a[i]*b[i];
        printf("(x%i,%g),",i,p[i]);
    }
    printf("}");
    printf("\n");
    printf("------------------------------------------------------------------------------------------\n");
    printf("equality of of A,B:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            m=m+1;
        }
        else
        {
        printf("both are not equal\n");
        break;
        }
    }
    if(m==n)
    {
        printf(" both are equal\n");
    }
printf("------------------------------------------------------------------------------------------\n");

    for(i=0;i<n;i++)
    {
        ca[i]=a[i]*c;
        cb[i]=b[i]*c;

    }
    printf("crisp product with A set:{");
    for(i=0;i<n;i++)
    {
        printf("(%d,%g),",i,ca[i]);
    }
    printf("}\n");
    printf("crisp product with B set:{");
    for(i=0;i<n;i++)
    {
        printf("(%d,%g),",i,cb[i]);
    }
    printf("}\n");
    printf("------------------------------------------------------------------------------------------\n");

    for(i=0;i<n;i++)
    {
        pa[i]=pow(a[i],c1);
        pb[i]=pow(b[i],c1);

    }
    printf(" power of A set:{");
    for(i=0;i<n;i++)
    {
        printf("(%d,%g),",i,pa[i]);
    }
    printf("}\n");
    printf("power of B set:{");
    for(i=0;i<n;i++)
    {
        printf("(%d,%g),",i,pb[i]);
    }
    printf("}\n");
printf("------------------------------------------------------------------------------------------\n");


    printf("difference of  is A,B:{");
    for(i=0;i<n;i++)
    {
        if(a[i]>bc[i])
        {

            min1[i]=bc[i];

        }
        else
        {

            min1[i]=a[i];
        }
    }

    for(i=0;i<n;i++)
    {
        printf("(%d,%g),",i,min1[i]);
    }
    printf("}");
    printf("\n");
    printf("------------------------------------------------------------------------------------------\n");


    printf("disjuctive of  is A,B:{");
    for(i=0;i<n;i++)
    {
        if(ac[i]>b[i])
        {

            min2[i]=b[i];

        }
        else
        {

            min2[i]=ac[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(min1[i]>min2[i])
        {

            dis[i]=min1[i];

        }
        else
        {

            dis[i]=min2[i];
        }
    }


    for(i=0;i<n;i++)
    {
        printf("(%d,%g),",i,dis[i]);
    }
    printf("}");
    printf("\n");

}

