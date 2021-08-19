//
//  EX310.c
//  
//
//  Created by Gabriel Conlon on 2/20/12.
//  Copyright (c) 2012 Whitworth University. All rights reserved.
//

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

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
        printf("child: pid = %d\n", pid);
        printf("child: pid1 = %d\n", pid1);
    }
    else{
        pid1 = getpid();
        printf("parent: pid = %d\n", pid);
        printf("parent: pid1 = %d\n", pid1);
        wait(NULL);
    }
    printf("END");
    return 0;
}