#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <string.h>
#include <stdlib.h>


void increaseCounter_local();
void increaseCounter_static();
void increaseCounter_pointer(int *counter_p);


int n = 0;

int main(void) {

    int counter = 0;

    while(n <2) {
        increaseCounter_local();
        increaseCounter_static();
        increaseCounter_pointer(&counter);
        n++;
    }

    char *str = NULL;
    str = (char *)malloc(15);
    strcpy(str, "Class example");
}

void increaseCounter_local() {
    int localCounter = 0;
    localCounter++;
}

void increaseCounter_static(){
    static int staticCounter = 0;
    staticCounter++;
}

void increaseCounter_pointer(int *counter_p) {
    *counter_p += 1;
}

