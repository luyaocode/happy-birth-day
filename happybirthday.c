#include <windows.h>
#include <stdio.h>
//F调
//时长
#define T32 3200
#define T24 2400
#define T16 1600
#define T12 1200
#define T8 800
#define T6 600
#define T4 400
#define T2 200
#define T1 100
//低
#define D1 349
#define D2 392
#define D3 440
#define D4 466
#define D5 523
#define D6 587
#define D7 659
//中
#define Z1 698
#define Z2 784
#define Z3 880
#define Z4 988
#define Z5 1046
#define Z6 1175
#define Z7 1318
//高
#define G1 1397
void main(void)
{
    int i = 0;
    while (i++ < 2) {
        Beep(D5, T4);
        Beep(D5, T4);
        Beep(D6, T8);
        Beep(D5, T8);
        Beep(Z1, T8);
        Beep(D7, T16);

        Beep(D5, T4);
        Beep(D5, T4);
        Beep(D6, T8);
        Beep(D5, T8);
        Beep(Z2, T8);
        Beep(Z1, T16);

        Beep(D5, T4);
        Beep(D5, T4);
        Beep(Z5, T8);
        Beep(Z3, T8);
        Beep(Z1, T8);
        Beep(D7, T16);

        Beep(Z4, T4);
        Beep(Z4, T4);
        Beep(Z3, T8);
        Beep(Z1, T8);
        Beep(Z2, T8);
        Beep(Z1, T16);
    }
}
