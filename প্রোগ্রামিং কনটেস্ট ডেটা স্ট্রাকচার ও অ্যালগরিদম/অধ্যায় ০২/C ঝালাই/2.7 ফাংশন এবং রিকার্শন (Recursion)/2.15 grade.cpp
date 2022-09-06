#include<stdio.h>

int Grade(int marks)
{
    if(marks>=80)
        return 5;
    else if(marks>=60)
        return 4;
    else if(marks>=50)
        return 3;
    else if(marks>=40)
        return 2;
    else if(marks>=33)
        return 1;
    else
        return 0;
}

int main()
{
    int marks;
    scanf("%d",&marks);

    printf("The grade = %d\n",Grade(marks));
}
