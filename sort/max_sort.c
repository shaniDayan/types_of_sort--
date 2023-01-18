#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/*max sort
we find the max number and move it to the end
we do this again for the array that is not sorted
for the i iteration we do the sort for 0 until n-i-1*/
int main(){
    return 0;
}
/*finding the indexs of the biggest number*/
int index_of_max(int a[], int n){
    int i, i_max = 0;
    for(i=1; i<n;i++){
        if(a[i]>a[i_max]){
            i_max=i;
        }
    }
    return i_max;
}
/*max sort with loops
time complexity n^2
place complexity 1*/
void max_sort(int a[], int n){
    int length;
    for (length=n; length>1;length--){
        int i_max = index_of_max(a, length);
        swap(&a[length-1], &a[i_max]);
    }
}
void swap (int* px, int* py){
    int temp = *px;
    *px = *py;
    *py = temp;
}

/*max sort with recursive
time complexity n^2
place complexity n*/
void max_sort_recursive(int a[], int n){
    if (n==1) return;
    int i_max = index_of_max(a, n);
    swap(&a[n-1], &a[i_max]);
    max_sort_recursive(a, n-1); // חוזרים על הפעולה עם מערך קטן יותר

}
