#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc == 2) {
		printf("Checking License: %s\n", argv[1]);
		if(strcmp(argv[1], "pr3ttyg00d") == 0){
			printf("Access Granted.\n");
		}
		else {
			printf("Invalid Key\n");
		}
	}
	else {
		printf("Usage: ./easy_crackme <Key>\n");
	}
	return 0;
}