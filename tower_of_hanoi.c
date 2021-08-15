#include <stdio.h>

void hanoi(int n, char start, char aux, char end) {
	if (n > 0) {
		if (n == 1) {
			printf("Move disk 1 from rod %c to rod %c \n", start, end);
		}
		else {
			hanoi(n - 1, start, end, aux);
			printf("Move disk %d from rod %c to rod %c \n", n, start, end);
			hanoi(n - 1, aux, start, end);
		}
	}
}

void main() {
	int disks; 
	
	printf("How many disks? ");
	scanf("%d", &disks);
	
	hanoi(disks, 'A', 'B', 'C');
}
