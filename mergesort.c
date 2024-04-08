#include <stdio.h>
#define max 10
int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10];
void merging(int low, int mid, int high){
   int j, k, i;
   for(j = low,k = mid + 1, i = low; j <= mid && k <= high; i++) {
      if(a[j] <= a[k])
         b[i] = a[j++];
      else
         b[i] = a[k++];
   }
   while(j <= mid)
      b[i++] = a[j++];
   while(k <= high)
      b[i++] = a[k++];
   for(i = low; i <= high; i++)
      a[i] = b[i];
}
void sort(int low, int high){
   int mid;
   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   } else {
      return;
   }
}
int main(){
   int i;
   printf("Array before sorting\n");
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
   sort(0, max);
   printf("\nArray after sorting\n");
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
}