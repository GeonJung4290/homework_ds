#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void stuctureQuiz_1();
void stuctureQuiz_2();

void main(void) {
	stuctureQuiz_2();
}

void stuctureQuiz_1() {
	char inputName[20];
	int inputAge;
	char tempName[20];
	int tempAge;

	typedef struct {
		char name[20];
		int age;
	}student;

	student mStudent[5];

	for (int i = 0; i < 5; i++) {
		printf("\n%d ��° ����� �̸� : ", i + 1);
		scanf("%s", inputName);
		strcpy(mStudent[i].name, inputName);

		printf("%d ��° ����� ���� : ", i + 1);
		scanf("%d", &inputAge);
		mStudent[i].age = inputAge;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (mStudent[i].age > mStudent[j].age) {
				strcpy(tempName, mStudent[i].name);
				strcpy(mStudent[i].name, mStudent[j].name);
				strcpy(mStudent[j].name, tempName);

				tempAge = mStudent[i].age;
				mStudent[i].age = mStudent[j].age;
				mStudent[j].age = tempAge;
			}
		}
	}

	printf("\n");
	printf("\n================ �������� ================\n");

	for (int i = 0; i < sizeof(mStudent) / sizeof(student); i++) {
		printf("\n%d ��° ����� �̸� : %s", i + 1, mStudent[i].name);
		printf("\n%d ��° ����� ���� : %d", i + 1, mStudent[i].age);
		printf("\n");
	}

	printf("\n================ �� �� ================\n");

	printf("\n���� �̸� : %s", mStudent[0].name);
	printf("\n���� ���� : %d", mStudent[0].age);
}


void stuctureQuiz_2() {
	int index;
	float avg=0.0, sum=0.0;

	printf("�迭�� ũ�� : ");
	scanf("%d", &index);
	float *array = malloc(sizeof(float)*index);

	printf("���ڵ� : ");
	for (int i=0; i < index; i++) {
		scanf("%f", &array[i]);
	}

	for (int i = 0; i < index; i++) {
		sum += array[i];
	}

	avg = sum / (float)index;
	for (int i = 0; i < index; i++) {
		printf("%.2f  ", array[i]);
	}
	
	printf("\nhap : %.2f", sum);
	printf("\navg : %.2f", avg);

}