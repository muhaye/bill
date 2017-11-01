/**
 * Command based program to create bill form 
 */

#include <stdio.h> 
#include <string.h> 

#define MAX_LEN 80

// Header -- Section
int addClient(); 

// Implementation -- Section
int main(int argc, char *argv[]) { 
	
	if ( argc > 2 ) {
		printf("Please add valid parameter "); 
		return -1;	
	}

	char *a_command = argv[1];

	if ( strcmp(a_command, "addClient") == 0 ) {

		return addClient();

	} else if (strcmp(a_command, "addBill") == 0 ) {

		return addClient();

	} else {
		// Unreconized parameter
		printf("Unreconized parameter: %s\n", a_command); 
	}

	return -1;
}

int addClient() {
	
	char a_client[MAX_LEN];
	printf("Please enter client Name ex:(Candy inc.):\n"); 
	scanf("%99[^\n]", a_client);
	printf("You entered: %s\n", a_client); 
	return 0; 
}
