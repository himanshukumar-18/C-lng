// structure.
#include <stdio.h>
#include <string.h>

/*
struct studentDetails {
    char name[50];
    char gender[10];
    int rollNo;
    char class[10];
};

int main()
{
    struct studentDetails details;
    struct studentDetails details2;

    stpcpy(details.name, "Himanshu Kumar");
    stpcpy(details.gender, "Male");
    details.rollNo = 057;
    stpcpy(details.class, "BCA");

    details2 = details;

    strcpy(details2.name, "Golu Rana");
    strcpy(details2.gender, "male");
    details2.rollNo = 48;
    strcpy(details2.class, "BCA");


    printf("\nStudent name is %s", details2.name);
    printf("\nStudent gender is %s", details2.gender);
    printf("\nStudent roll no is %d", details2.rollNo);
    printf("\nStudent class is %s", details2.class);

    return 0;
}*/

struct Owner {
    char firstName[50];
    char lastName[50];
};

struct Car {
    char brand[30];
    char model[30];
    int year;
    struct Owner owner;
};

struct Truck {
    char name[30];
    int year;
};

void changeYear(struct Truck *y) 
{
    y->year = 2025; 
}

int main()
{
    /*
    struct Owner owner1 = { "Golu", "Rana" };
    struct Owner owner2 = { "Himanshu", "Rana" };
    struct Owner owner3 = { "Rhaul", "Rana" };

    struct Car c1 = {"BMW", "X5", 1999, owner1};
    struct Car c2 = {"fors", "mustang", 2020, owner2};
    struct Car c3 = {"toyota", "corlaa", 2024, owner3};

    printf("%s %s %d %s %s\n", c1.brand, c1.model, c1.year, c1.owner.firstName, c1.owner.lastName);
    printf("%s %s %d %s %s\n", c2.brand, c2.model, c2.year, c2.owner.firstName, c2.owner.lastName);
    printf("%s %s %d %s %s\n", c3.brand, c3.model, c3.year, c3.owner.firstName, c3.owner.lastName);*/

    struct Truck truck = { "Tata", 2022};
    struct Truck *trk = &truck;

    changeYear(&truck);

    printf("Truck name: %s\n", trk->name);
    printf("Truck year: %d\n", trk->year);

    return 0;
}