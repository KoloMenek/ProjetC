#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


#define TRUE 1
#define FALSE 0


struct contact {
	char number[10];
	char name[256];
	char address[256];
	char email[256];
};

typedef struct contact Contact;

struct phonebook {
	Contact list[256];
	int N;
};

typedef struct phonebook Phonebook;

//Shows selected contact's informations
void showContact(Contact myContact){
	printf("Contact information : \n");
	printf("Name : %s \n", myContact.name);
	printf("Phone number : %s \n", myContact.number);
	printf("Address : %s \n", myContact.address);
	printf("Email : %s \n", myContact.email);
}

//Creates and adds a contact to the phonebook. It also show the contact before adding it to the phonebook.
void createContact(Phonebook *myPhonebook){
	Contact newContact;

	printf("You are about to create a contact.\n");
	printf("Please enter the contact's number : \n");
	scanf(" %[^\n]", newContact.number);
	printf("Please enter the contact's name : \n");
	scanf(" %[^\n]", newContact.name);
	printf("Please enter the contact's address : \n");
	scanf(" %[^\n]", newContact.address);
	printf("Please enter the contact's email : \n");
	scanf(" %[^\n]", newContact.email);

	showContact(newContact);
	myPhonebook->list[myPhonebook->N] = newContact;
	myPhonebook->N += 1;
}


int main(int argc, char *argv[]){
	//Phonebook initialisation
	Phonebook myPhonebook;
	myPhonebook.N = 0;
	createContact(&myPhonebook);
	showContact("")


}

