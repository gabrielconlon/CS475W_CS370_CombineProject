//
//  EX315.c
//  
//
//  Created by Gabriel Conlon on 2/26/12.
//  Copyright (c) 2012 Whitworth University. All rights reserved.
//

#include <stdio.h>
#include <windows.h>

int main(VOID)
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));
    
    if(!CreateProcess(NULL, (LPWSTR)"fibonacci", NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
    {
        fprintf(stderr, "Create Process Failed");
        return -1;
    }
    
    WaitForSingleObject(pi.hProcess, INFINITE);
    printf("Child Complete: Fibonacci");
    
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
}