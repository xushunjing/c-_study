#include "stdafx.h"
#include <stdio.h>  
#include <windows.h>  
#include <iostream>  
#include <process.h>  
using namespace std;

#define UM_MSG1 WM_USER+1  
#define UM_MSG2 WM_USER+2  

DWORD WINAPI Thread1(LPVOID para)  
{  
    DWORD dwThreadId = *(DWORD *)para;  
    DWORD i=0;  
    char strTmp[100];  

    while(TRUE)  
    {  
        Sleep(1700);            
        sprintf(strTmp,"Hello %d ",i++);  
        PostThreadMessage(dwThreadId,UM_MSG1,(WPARAM)strTmp,(LPARAM)NULL);  

    }  

    return 0;     
}  

DWORD WINAPI Thread2(LPVOID para)  
{  

    char strTmp[100];  
    DWORD dwThreadId = *(DWORD *)para;  
    DWORD i=0;  
    while(TRUE)  
    {    
        Sleep(3000);  

        sprintf(strTmp,"World %d \n",i++);  
        PostThreadMessage(dwThreadId,UM_MSG2,(WPARAM)strTmp,(LPARAM)NULL);  
    }  

    return 0;  
}  

int main()  
{  
    DWORD dwValue =GetCurrentThreadId();  
    cout<<"GetCurrentThreadId "<<dwValue<<endl;;  
    HANDLE hThread1 = CreateThread(NULL,0,&Thread1,&dwValue,0,NULL);  
    HANDLE hThread2 = CreateThread(NULL,0,&Thread2,&dwValue,0,NULL);  
    CloseHandle(hThread1);  
    CloseHandle(hThread2);  
    MSG msg;  
    while(GetMessage(&msg,NULL,0,0))  
    {  
        switch(msg.message)  
        {  
        case UM_MSG1:  
        case UM_MSG2:  
            printf("msg:%d: %s\n",msg.message,msg.wParam);  

            break;  
        default:  
            printf("Unknown msg:0x%x\n",msg.message);  
            break;  
        }  
        Sleep(1);  
    }  
    return 0;  
}   