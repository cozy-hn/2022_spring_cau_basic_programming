#include <stdio.h>
#include <stdlib.h>
#define NUMSTUDENT 20

typedef struct student {
	int id;
	int prob_1;
	int prob_2;
	int prob_3;
	int total_score;
	char grade;
}Student;

void cal_total_score(Student* s);
void student_bb_sort(Student* s);

int main() {
	Student s[NUMSTUDENT];
	int i;

	for (i = 0; i < NUMSTUDENT; i++) {
		s[i].id = i;
		s[i].prob_1 = rand() % 30 + 1;
		s[i].prob_2 = rand() % 30 + 1;
		s[i].prob_3 = rand() % 40 + 1;
		printf("Student %d\nP1: %d\tP2: %d\tP3: %d\n", s[i].id, s[i].prob_1, s[i].prob_2, s[i].prob_3);
	}

	for (i = 0; i < NUMSTUDENT; i++) {
		cal_total_score(&s[i]);
		printf("Student %d\tScore: %d\n", s[i].id, s[i].total_score);
	}

	student_bb_sort(s);
	printf("\nAfter Bubble Sort\n");

	for (i = 0; i < NUMSTUDENT; i++) {
		if ((float)i < (float)NUMSTUDENT / 3) {
			s[i].grade = 'C';
		}
		else if ((float)i < (float)NUMSTUDENT / 3 * 2 && (float)i >= (float)NUMSTUDENT / 3) {
			s[i].grade = 'B';
		}
		else {
			s[i].grade = 'A';
		}
		printf("Student %d\tScore: %d\tGrade: %c\n", s[i].id, s[i].total_score, s[i].grade);
	}
}

void cal_total_score(Student* s) {
	/*
	Problem (A):
	Implement the function "cal_total_score".
	- In each student, total_score must be the sum of prob_1, prob_2, and prob_3.
	- The codes outside the function must not be changed.
	*/
	int i;
	for (i = 0; i < NUMSTUDENT; i++) {
		s[i].total_score = s[i].prob_1 + s[i].prob_2 + s[i].prob_3;
	}
}

void student_bb_sort(Student* s) {
	/*
	Problem (B):
	Implement the function "student_bb_sort".
	- The student array "s" must be sorted according to total_score.
	- Bubble sort algorithm should be used for the sorting.
	- The codes outside the function must not be changed.
	*/
	Student tmp;
	int i, j;

	for (i = 0; i < NUMSTUDENT - 1; i++) {
		for (j = 0; j < NUMSTUDENT - 1 - i; j++) {
			if (s[j].total_score > s[j + 1].total_score) {
				tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
			}
		}
	}
}