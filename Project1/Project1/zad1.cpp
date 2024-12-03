#include <stdio.h>
#include <Windows.h>
void print_10();
void print_1();
void print_2();
void print_11();
void print_12();
void main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;

	
	do{
		printf("\n");
		printf("\n");
		printf("1: Ввести число от 1 до 10\n");
		printf("2: Ввывести числа от 1 до 10 \n");
		printf("3: Вывести числа от 10 до 1 \n");
		printf("4: Вывести 5 первых нечетных чисел\n ");
		

		scanf_s("%d введи число", &n);
		
		switch (n) {
			case 1:
				print_10();
				break;
			case 2:
				print_1();
				break;
			case 3:
				print_2();
				break;
			case 11:
				print_11();
				break;
			case 12:
				print_12();
				break;
		}


	} while (n != 0);



}
void print_10() {
	int i = 0;
	while (i < 10) {
		i++; 
		printf("%d   ", i);
	}

}
void print_1() {
	int i = 10;
	while (i > 0) {
		printf("%d   ", i);
			i--;
	}
}
void print_2() {
	int i = 1;
	int count = 0;
	while (count < 5) {		
		if (i % 2 != 0) {
			printf("%d ", i);
			count++;
		}
		i++;
	}
}
void print_11() {
	int i = 100;
	while (i > 0) {
		printf("%d   ", i);
		i -= 10;
	}
}
void print_12() {
	int i = 1000;
	while (i >0) {
		printf("%d    ", i);
		i -= 100;

	}
}


