//
//  fibonacci.c
//  
//
//  Created by Gabriel Conlon on 2/20/12.
//  Copyright (c) 2012 Whitworth University. All rights reserved.
//

#include <stdio.h>
//#include <sys/types.h>
//#include <unistd.h>

int main()
{
    int a = 0;
    int b = 1;
    
    int n;
    printf("How many numbers into the series: ");
    scanf("%d", &n);
    
    printf("Fibonacci\n%d, %d", a,b);
    int c,i;
    for(i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf(", %d", c);
    }
    printf("\n");
    return 0;
}