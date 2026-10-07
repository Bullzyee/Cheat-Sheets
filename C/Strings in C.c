#include<stdio.h>
#include<string.h>

void creatingStrings() {
	char name[] = "John";
	char msg[10] = "Hello!";
	const char *txt = "Hi!";

	msg[0] = 'h'; // ALLOWED

	printf("Name: %s\n", name);
	printf("Msg: %s\n", msg);
	printf("Txt: %s\n", txt);
}

void displayUserInput() {
	char name[50];
	char msg[50];

	// printf("Enter your name: ");
	// WE DO NOT NEED AN AMPERSAND BELOW
	// scanf("%s", name); // Can't read spaces
	// printf("Name: %s\n", name);
	
	printf("Enter your msg: ");
	// fgets can read spaces from user input
	fgets(msg, sizeof(msg), stdin);
	printf("Msg: %s\n", msg);
}

void gettingStringLength() {
	char name[40] = "Hello World!";
	printf("Length of name: %ld\n", strlen(name));
}

void copyingAString() {
	char name1[] = "Naruto Uzamaki";
	char name2[50];

	// name2 = name1; // ERROR
	strcpy(name2, name1);
	printf("Name2: %s\n", name2);
}

void concatenation() {
	char name1[] = "Naruto";
	char name2[] = "Uzamaki";

	strcat(name1, name2);
	// strcat(destination, src);

	printf("Name1: %s\n", name1);

	// REMOVES FIRST CHARACTER OF NAME 2
	printf("Name2: %s\n", name2);
}

void comparingStrings() {
	char name1[] = "uzamaki";
	char name2[] = "Naruto";


	// int result = (name1 == name2);
	int result = strcmp(name1, name2);
	// 0 EXACT MATCH
	// int DID NOT MATCH
	printf("Result: %d\n", result);
}

int main() {
	comparingStrings();
	return 1;
}
