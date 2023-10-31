#include <windows.h> /*Biblioteca para funcion sleep*/
#include <process.h>  /*biblioteca para funcion*/
#include <time.h>  /*biblioteca para funciones de relog*/
#include <stdio.h>  /*biblioteca para la funcion getchar*/

void task1(void *);

int main(int, char**)
{
    int ThreadNr;
    
    int nucleos = 210;
    
    for(int i=0; i < nucleos; i++) _beginthread( task1, 0, &ThreadNr );

    (void) getchar();
    return 0;
}

void task1(void *)
{
    while(1)
    {
        clock_t wakeup = clock() + 50;
        
        while(clock() < wakeup) {}
        
        Sleep(50);
    }
}
