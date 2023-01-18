#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/* bubble sort for every loop we go over the arrary 
and swap between the member that are not in the right place
time complexity n^2
place complexity 1*/

int main(){
    return 0;
}

void swap (int* px, int* py){
    int temp = *px;
    *px = *py;
    *py = temp;
}
/*the bubble itself*/
int bubble (int a[], int n){
    int i, swapped = 0;
    for(i=1;i<n;i++){
        if(a[i-1]>a[i]){ // אם האיבר הקודם יותר גדול מהאיבר הנוכחי נחליף ביניהם בגלל זה התחתנו מ1
            swap(&a[i], &a[i-1]);
            swapped = 1;
        }
    }
    return swapped;
}

void bubble_sort(int a[], int n){
    int not_sorted = 1;
    while( (n> 1) && not_sorted){ // עושים את זה עד שגודל המערך מסתיים וגם שאין יותר מה להחליף
        not_sorted = bubble(a, n--);
    }
}
