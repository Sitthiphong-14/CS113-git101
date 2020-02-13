#include<stdio.h>
int main()
{
    //type name[size];//type คือประเภทของตัว name คือชื่อตัวแปร size คือขนาดของอาเรย์
    int n1 = 5;
    int n2 = 10;
    int n3 = 20;
    int n4 = 30;
    int n5 = 50;
    //ตัวแปร n1 n2 n3 n4 n5 สามารถเขียนเป็นarrayได้ดังนี้
    int n[5] = {5, 10, 20, 30, 50};
    //array ก็เป็นตัวแปรดังนั้นต้องประกาศก่อนเสมอ
    //**************************************
    //การอ่าน array
    printf("%d\n",n[0]);//ได้ค่า 5 ใน array n[5]
    printf("%d\n",n[4]);//ได้ค่า 50 ใน array n[5]
    //**************************************
    //การใช้ for loop with array
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", n[i]);
    }

    printf("\n");

    for (i = 4; i >= 0; i--)
    {
        printf("%d, ", n[i]);
    }

    printf("\n");

    //array 2D 
    /*int a[3][4] = 
    {
        {35, 6, 1},
        {4, 5, 16},
        {9, 7, 92}
    };*/
    //ใช้for loopกับarray 2D
    int a[3][3] =
    {
        {35, 6, 1},
        {4, 5, 16},
        {9, 7, 92}
    };

    int c, j;
    for (c = 0; c <3; c++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d, ", a[c][j]);
        }
        printf("\n");
    }
}