/* Enter your solutions in this file */
#include <stdio.h>

/*1*/

float average(int s[], int l) {
    int sum = 0;
    float avg = 0.0;
    for (int i=0; i<l; i++) {
        sum = sum + s[i];
    }
    avg = sum/l;
    return avg;
}     


/*2*/

int factors(int n, int r[])
{
  int p[] ={2,3,5,7,9,11,13,17,19};
  int sum =0 , j=0;
 for(int i=0;i<9;i++)
 {
     while(n%p[i] ==0)
  { r[j]=p[i];
  n=n/p[i];
   sum +=1;
   j++;
      
  }
     
 }
  return sum;
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



/*4*/

int min(int array[], int size){  
  
  int smallest = array[0];
 
        for (int i = 1; i < size; i++) 
        {
            if (smallest > array[i])
            smallest = array[i];
        }
 
        
 
        return smallest;
 
}



/*5*/

int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}

