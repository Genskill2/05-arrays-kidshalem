/* Enter your solutions in this file */
#include <stdio.h>

/*1*/

float average(int s[], int l) {*
    int sum = 0;
    float avg = 0.0;
    for (int i=0; i<l; i++) {
        sum = sum + s[i];
    }
    avg = sum/l;
    return avg;
}     

