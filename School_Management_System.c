#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int i = 0;


struct sinfo {
    char fname[50];
    char lname[50];
    int roll;
    float cgpa;
    char sc[10];
} st[55];


void add_student()
{

    printf("Add the Students Details\n");
    printf("-------------------------\n");
    printf("Enter the first name of student\n");
    scanf("%s", st[i].fname);
    printf("Enter the last name of student\n");
    scanf("%s", st[i].lname);
    printf("Enter the Roll Number\n");
    scanf("%d", &st[i].roll);
    printf("Enter the CGPA you obtained\n");
    scanf("%f", &st[i].cgpa);
    printf("Enter the subject code of each course\n");
    for (int j = 0; j < 5; j++) {
        printf("for the %d subject: \n",j+1);
        scanf("%s", &st[i].sc[j]);
    }
    i = i + 1;
}


void find_rollnumber()
{
    int x;
    printf("Enter the Roll Number of the student\n");
    scanf("%d", &x);
    for (int j = 1; j <= i; j++) {
        if (x == st[i].roll) {
            printf("The Students Details are\n");
            printf("The First name is %s\n",st[i].fname);
            printf("The Last name is %s\n",st[i].lname);
            printf("The CGPA is %f\n",st[i].cgpa);
            printf("Enter the course ID of each course\n");
        }
        for (int j = 0; j < 5; j++) {
            printf("The subject code are %s\n",st[i].sc[j]);
        }
        break;
    }
}


void find_firstname()
{
    char a[50];
    printf("Enter the First Name of the student\n");
    scanf("%s", a);
    int c = 0;
    for (int j = 1; j <= i; j++) {
        if (!strcmp(st[j].fname, a)) {
            printf("The Students Details are\n");
            printf("The First name is %s\n",st[i].fname);
            printf("The Last name is %s\n",st[i].lname);
            printf("The Roll Number is %d\n ",st[i].roll);
            printf("The CGPA is %f\n",st[i].cgpa);
            printf("Enter the subject code of each course\n");
            for (int j = 0; j < 5; j++) {
                printf("The subject code are %s\n",st[i].sc[j]);
            }
            c = 1;
        }
        else
            printf("The First Name not Found\n");
    }
}


void find_code()
{
    int sc;
    printf("Enter the subject code\n");
    scanf("%d", &sc);
    int c = 0;

    for (int j = 1; j <= i; j++) {
        for (int d = 0; d < 5; d++) {
            if (sc == st[j].sc[d]) {
                printf("The Students Details are\n");
                printf("The First name is %s\n",st[i].fname);
                printf("The Last name is %s\n",st[i].lname);
                printf("The Roll Number is %d\n ",st[i].roll);
                printf("The CGPA is %f\n",st[i].cgpa);
                c = 1;
                break;
            }
            else
                printf("The First Name not Found\n");
        }
    }
}


void total_students()
{
    printf("The total number of Student is %d\n",i);
    printf("\n you can have a max of 50 students\n");
    printf("you can have %d more students\n",50 - i);
}


void delete_student()
{
    int a;
    printf("Enter the Roll Number which you want to delete\n");
    scanf("%d", &a);
    for (int j = 1; j <= i; j++) {
        if (a == st[j].roll) {
            for (int k = j; k < 49; k++)
                st[k] = st[k + 1];
            i--;
        }
    }
    printf("The Roll Number is removed Successfully\n");
}


void update_student()
{

    printf("Enter the roll number to update the entry : ");
    long int x;
    scanf("%ld", &x);
    for (int j = 0; j < i; j++) {
        if (st[j].roll == x) {
            printf("1. first name\n2. last name\n3. roll no.\n4. CGPA\n5. courses\n");
            int z;
            scanf("%d", &z);
            switch (z) {
            case 1:
                printf("Enter the new first name : \n");
                scanf("%s", st[j].fname);
                break;
            case 2:
                printf("Enter the new last name : \n");
                scanf("%s", st[j].lname);
                break;
            case 3:
                printf("Enter the new roll numnber : \n");
                scanf("%d", &st[j].roll);
                break;
            case 4:
                printf("Enter the new CGPA : \n");
                scanf("%f", &st[j].cgpa);
                break;
            case 5:
                printf("Enter the subject codes for 5 subjects \n");
                scanf("%s %s %s %s %s", &st[j].sc[0],&st[j].sc[1], &st[j].sc[2],&st[j].sc[3], &st[j].sc[4]);
                break;
            }
            printf("UPDATED SUCCESSFULLY.\n");
        }
    }
}

void main()

{   int i;
    int choice, count;
    while (i == 1) {
        printf("The Task that you want to perform\n");
        printf("1. Add the Student Details\n");
        printf("2. Find the Student Details by Roll Number\n");
        printf("3. Find the Student Details by First Name\n");
        printf("4. Find the Student Details Subject Code\n");
        printf("5. Find the Total number of Students\n");
        printf("6. Delete the Students Details by Roll Number\n");
        printf("7. Update the Students Details by Roll Number\n");
        printf("8. To Exit\n");
        printf("Enter your choice to find the task\n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            add_student();
            break;
        case 2:
            find_rollnumber();
            break;
        case 3:
            find_firstname();
            break;
        case 4:
            find_code();
            break;
        case 5:
            total_students();
            break;
        case 6:
            delete_student();
            break;
        case 7:
            update_student();
            break;
        case 8:
            exit(0);
            break;
        }
    }
}