#include "mbed.h"

int main()
{
    DigitalIn B1_USER(BUTTON1);

    DigitalOut LD3(LED3);

    while (true) {
        LD3 = B1_USER;
    }
}
