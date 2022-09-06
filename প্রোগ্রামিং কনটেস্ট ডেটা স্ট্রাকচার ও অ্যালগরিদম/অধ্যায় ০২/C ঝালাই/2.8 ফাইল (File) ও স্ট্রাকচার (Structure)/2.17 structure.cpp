#include<stdio.h>

struct Student
{
    char name[30],father[30],address[50];
    int birth_date,birth_month,birth_year;
    int phone;
};

int main()
{
    Student s,students[50];

    scanf("%s",s.name);
    printf("%s\n",s.name);
    scanf("%d",&students[10].phone);

    printf("%d\n",students[10].phone);
}
