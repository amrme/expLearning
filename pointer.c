#include <stdio.h> 
#include <string.h>

int main() 
{
	char str_a[20]; // A 20-element character array
	char *pointer; // A pointer, meant for a character array 
	char *pointer2; // And yet another one
	strcpy(str_a, "Hello, world!\n");
	pointer = str_a; // Set printf(pointer);
	pointer2 = pointer + 2; 
	printf(pointer2); 
	strcpy(pointer2, "y you guys!\n"); // Copy into that spot.
	// Print again.
	printf(pointer);
}


￼