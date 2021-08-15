#include <stdio.h>

struct Student {
	char name[100];
	char address[200];
	int year, month, day;
	char admission_num[10];
	
}second_year_class[10];


void insert() {
	for (int i = 0; i < 10; i++) {
		printf("\n");
		printf("Name: ");
		scanf("%s", second_year_class[i].name);
		printf("Address: ");
		scanf("%s", second_year_class[i].address);
		printf("Year of birth: ");
		scanf("%d", &second_year_class[i].year);
		printf("Month of birth: ");
		scanf("%d", &second_year_class[i].month);
		printf("Day of birth: ");
		scanf("%d", &second_year_class[i].day);
		printf("Admission number: ");
		scanf("%s", second_year_class[i].admission_num);
		printf("\n");
	}
	printf("Array is full! Inserting new data will overwrite previous records.\n");
	printf("\n");
}


void modify() {
	int num;
	printf("\n");
	printf("Enter student's index number: ");
	scanf("%d", &num);
	
	printf("New name: ");
	scanf("%s", second_year_class[num].name);
	printf("New address: ");
	scanf("%s", second_year_class[num].address);
	printf("New year of birth: ");
	scanf("%d", &second_year_class[num].year);
	printf("New month of birth: ");
	scanf("%d", &second_year_class[num].month);
	printf("New day of birth: ");
	scanf("%d", &second_year_class[num].day);
	printf("New admission number: ");
	scanf("%s", second_year_class[num].admission_num);
	printf("\n");
}

void display() {
	for (int i = 0; i < 10; i++) {
		printf("\n");
		printf("Name: %s \n", second_year_class[i].name);
		printf("Address: %s \n", second_year_class[i].address);
		printf("DOB: %d/%d/%d \n", second_year_class[i].day, second_year_class[i].month, second_year_class[i].year);
		printf("Admission number: %s \n", second_year_class[i].admission_num);
		printf("\n");
	}
}

void main() {
	int choice; 
	
	do {
		printf("Press '1' to INSERT \n");
		printf("Press '2' to MODIFY \n");
		printf("Press '3' to DISPLAY \n");
		printf("Press '4' to EXIT \n");
		printf("\nPress a key: ");
		scanf("%d", &choice);
		
		switch (choice) {
			case 1:
				insert();
				break;
			case 2:
				modify();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
				
		}	    
	} while (choice != 4);
}



