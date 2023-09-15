#include <stdio.h>

int main() {
	FILE *file = fopen("102-result", "w"); // Open the file for writing

	if (file == NULL) {
		perror("Error opening the file");
		return 1;
	}

	int numberToWrite = 997799;

	// Write the number to the file
	fprintf(file, "%d", numberToWrite);

	fclose(file); // Close the file

	return 0;
}

