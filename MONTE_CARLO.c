#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int seed;
    long int N,i;
    long circle=0;
    double x,y,pi;
    printf("enter total numbers : ");
    scanf("%ld",&N);
    printf("enter seed : ");
    scanf("%d",&seed);
    srand(seed);
    for(i=0;i<N;i++)
    {
        x=((double)rand()/RAND_MAX);
        y=((double)rand()/RAND_MAX);
        if(x*x+y*y<=1)
        {
            circle++;
        }
    }
    pi=(4.0*circle)/N;
    printf("Estimated value of pi : %lf\n",pi);

}