#include<stdio.h>


//global structure

struct student
{
    char name[10];
    int roll;
    int age;
};

int main(){
    struct student student1, student2, student3;

    printf("Student one information: \n");
//    student1.name = "Subarna";
    strcpy(student1.name, "Subarna");
    student1.roll = 14;
    student1.age = 25;

    printf("Name: %s\n", student1.name);
    printf("Roll: %d\n", student1.roll);
    printf("Age: %d\n", student1.age);

    printf("Student Two information: \n");
//    student2.name = "Ffgrer";
    strcpy(student2.name, "Farmget");
    student2.roll = 15;
    student2.age = 30;

    printf("Name: %s\n", student2.name);
    printf("Roll: %d\n", student2.roll);
    printf("Age: %d\n", student2.age);


    printf("Student Three information: \n");
    strcpy(student3.name, "Lafere");
    student3.roll = 16;
    student3.age = 34;

    printf("Name: %s\n", student3.name);
    printf("Roll: %d\n", student3.roll);
    printf("Age: %d\n", student3.age);

    getch();
    return 0;
}
