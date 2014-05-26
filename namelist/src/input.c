#include <stdio.h>
#include "input.h"

char name[80];
int id[7];
char city[10];

int getAge() {
	int age;
	printf("Please enter your age: ");
	scanf("%i", &age);
	return age;
}

char *getName() {	
	printf("Please enter your name: ");
	scanf("%s", name);
	return name;
}

int getID(){
    printf("Please give me your ID: ");
	scanf("%i", &id );
	printf("\n you have enter your id as %i", id);
	return  id;
}

char *getPlace(){
     printf("Please give me your city you live in:  ");
	 scanf("%s", city);
	 printf(" \n you live in %s", city);
	 return city;
	 }
	 
	 
#ifndef TEST
void main() {
	printf("your age is %i\n", getAge());
	printf("hello %s\n", getName());
}
#endif	// TEST