#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> 
/*quick sort 
בוחרים פייוט באקראי 
מסדרים את המערך כך שכל האיברים הגדולים מהפיווט יהיו אחריו וכל האיברים הקטנים ממנו לפניו
אחרי הפעולה הזאת הפיווט יהיה במקומות נהכון במערך אך האיברים הקטנים או הגדולים ממנו עלולים להיות מבולגנים באזור שלהם
ממיינים ריקורסיבית את כל אחד מהחלקי המערך באותו אופן*/
int main(){
    return 0;
}
void swap (int* px, int* py){
    int temp = *px;
    *px = *py;
    *py = temp;
}
void quick_sort (int a[], int n){
    int p, b=1, t=n-1;
    if(n<2) return;
    swap(&a[0], &a[n/2]); // כדי לעשות את זה אקראי נחליף בין האיבר הראשון לאמצעי
    p = a[0]; // האיבר האמצעי הוא הפיווט שלנו 
    while (b<=t){ // בי זה צד ימין וטי זה צד שמאל
        while (t>=b && a[t] >=p) t--; // אנחנו עוברים על המערך כל עוד טי גדול שווה לבי וגם הערך של המערך במקום איי גדול או שווה לפיווט שלנו נוריד את טי באחד
        while (b<=t && a[b] < p) b++;// אותו דבר פה
        /*מה בעצם כמה בלולאות למעלה
        אנחנו רוצים שהצד הימיני יהיה איברים שקטנים מהפיווט שלנו 
        וצד שמאל יהיה האיברים שגדולים מהפוויט שלנו 
        אנחנו מחסירים ומוסיפים את האינדקסים עד שאנחנו מגיעים למצב שהם מחולקים*/
        if (b<t){ // לבדוק מה קורה פה
            swap(&a[b++], &a[t--]);
        }
    }
    swap(&a[0], &a[t]); // מחליפים בין האיבר הראשון לאיבר במקום טי שבו הפיווט שייך
    quick_sort(a,t); // לשאול
    quick_sort(a+t+1, n-t-1);  // לשאול
}
/*complexity
time complexity avg is nlog2n
the worst case n^2

place complexity avg logn
the worst case n*/