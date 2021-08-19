//
//  EX314.c
//  
//
//  Created by Gabriel Conlon on 2/20/12.
//  Copyright (c) 2012 Whitworth University. All rights reserved.
//

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int fibonacci();

int main()
{
    pid_t pid, pid1;
    
    pid = fork();
    
    if(pid < 0){
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    else if(pid ==0){
        pid1 = getpid();
        fibonacci();
    }
    else{
        pid1 = getpid();
        wait(NULL);
    }
    printf("END\n");
    return 0;
}

int fibonacci()
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
}
