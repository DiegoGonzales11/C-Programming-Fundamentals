/*-------------------------------------------------
/*	Program Name: Find the mistake
/*	Author: Gonzales Loayza Pool Diego
/*	Date: 07/09/2020
/*------------------------------------------------*/

/*-------------------------------------------------
/*	Section: Original code
    #include<stdio.h>
    #include<math.h> // has  sin(), abs(), and fabs() 
    int main(void)
    { 
    double interval;
    int i;
    for(i = 0; i <30; i++)  
    {
    interval = i/10.0;
    printf(“sin( %lf ) = %lf \t”, interval, abs(sin(interval)));
    }
    printf(“\n+++++++\n”);
    return 0;
    }
/*-----------------------------------------------*/

#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
double interval;
int i;
for(i = 0; i <30; i++)
{
 interval = i/10.0;
 printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));
}


printf("\n+++++++\n");
return 0;
}