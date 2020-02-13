#include<stdio.h>
int addTen(int x)//ต้องประกาศ prototype ก่อนเสมอ
{
    x = x +10
    return x;
}
int addTwenty();
int x = 1000;
int main()
{

}
int addTwenty()
{
    printf("x");
    x = x + 20;
    return x;
}
// ตัวแปร global คือประกาศนอก main แล้วใช้ได้ทุกฟังชันร์
// ตัวแปร local คือประกาศในฟังชันร์นั้นๆ