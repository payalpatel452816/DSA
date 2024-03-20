#include<stdio.h>
int main()
{
    int a=10,b=20,c=12,d;
   d=a&&++b||c;
   printf("a:%d,b:%d,c:%d,d:%d",a,b,c,d);
  d=++a&&--b||c;
   printf("a:%d,b:%d,c:%d,d:%d",a,b,c,d);
   d=--a||b&&c;
   printf("a:%d,b:%d,c:%d,d:%d",a,b,c,d);
   d=a&&b||c;
   printf("a:%d,b:%d,c:%d",)
}