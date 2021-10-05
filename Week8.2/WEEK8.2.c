#include<stdio.h>
#include<string.h>

int main(){
	char input[100];
	int Upper = 0, Lower = 0;
	printf("Enter string : ");
	gets(input);
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] >= 65 && input[i] <= 90) {
			Upper++;
		}
		else if (input[i] >= 97 && input[i] <= 122) {
			Lower++;
		}
	}
	printf("Upper : %d\nLower : %d", Upper,Lower);
	return 0;
}