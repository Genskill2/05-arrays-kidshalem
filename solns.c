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



/*3*/

int max(int array[], int size){  
  
  int largest = array[0];
 
        for (int i = 1; i < size; i++) 
        {
            if (largest < array[i])
            largest = array[i];
        }
 
        
 
        return largest;
 
}
