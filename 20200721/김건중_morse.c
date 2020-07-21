#include<stdio.h>


void main() {
	char *input = malloc(sizeof(char) * 10);
	printf("A ~ Z 까지의 문자를 입력 : ");
	scanf("%s", input);
	
	printf("\n입력한 문자 : %s \n", input);
	printf("모로스 부호 : ");

	if (strcmp(input ,"A") || strcmp(input ,"a")) {
		printf(".-");
	}
	else if (strcmp(input, "B") || strcmp(input, "b")) {
		printf("-...");
	}
	else if (strcmp(input, "C") || strcmp(input, "c")) {
		printf("-.-.");
	}
	else if (strcmp(input, "D") || strcmp(input, "d")) {
		printf("-..");
	}
	else if (strcmp(input, "E") || strcmp(input, "e")) {
		printf(".");
	}
	else if (strcmp(input, "F") || strcmp(input, "f")) {
		printf("..-.");
	}
	else if (strcmp(input, "G") || strcmp(input, "g")) {
		printf("--.");
	}
	else if (strcmp(input, "H") || strcmp(input, "h")) {
		printf("....");
	}
	else if (strcmp(input, "I") || strcmp(input, "i")) {
		printf("..");
	}
	else if (strcmp(input, "J") || strcmp(input, "j")) {
		printf(".---");
	}
	else if (strcmp(input, "K") || strcmp(input, "k")) {
		printf("-.-");
	}
	else if (strcmp(input, "L") || strcmp(input, "l")) {
		printf(".-..");
	}
	else if (strcmp(input, "M") || strcmp(input, "m")) {
		printf("--");
	}
	else if (strcmp(input, "N") || strcmp(input, "n")) {
		printf("-.");
	}
	else if (strcmp(input, "O") || strcmp(input, "o")) {
		printf("---");
	}
	else if (strcmp(input, "P") || strcmp(input, "p")) {
		printf(".--.");
	}
	else if (strcmp(input, "Q") || strcmp(input, "q")) {
		printf("--.-");
	}
	else if (strcmp(input, "R") || strcmp(input, "r")) {
		printf(".-.");
	}
	else if (strcmp(input, "S") || strcmp(input, "s")) {
		printf("...");
	}
	else if (strcmp(input, "T") || strcmp(input, "t")) {
		printf("-");
	}
	else if (strcmp(input, "U") || strcmp(input, "u")) {
		printf("..-");
	}
	else if (strcmp(input, "V") || strcmp(input, "v")) {
		printf("...-");
	}
	else if (strcmp(input, "W") || strcmp(input, "w")) {
		printf(".--");
	}
	else if (strcmp(input, "X") || strcmp(input, "x")) {
		printf("-..-");
	}
	else if (strcmp(input, "Y") || strcmp(input, "y")) {
		printf("-.--");
	}
	else if (strcmp(input, "Z") || strcmp(input, "z")) {
		printf("--..");
	}
	else {
		printf("\n영어로 입력해주세요. ");
	}
	printf("\n");
}