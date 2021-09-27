
#include <iostream>
#include <stdlib.h>
#include <signal.h>
#include <conio.h>

/*
    Source by Microsoft
    Modified For Learn by RK
    I.D.E : VS2019
*/

void SignalHandler(int signal) {
    if (signal == SIGABRT) {
        // abort signal handler code
    } else {
        // ...
    }
}

int main() {
    typedef void (*SignalHandlerPointer)(int);

    SignalHandlerPointer previousHandler;
    previousHandler = signal(SIGABRT, SignalHandler);

    abort();

    _getch();
    return 0;
}