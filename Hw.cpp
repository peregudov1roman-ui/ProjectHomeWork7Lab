#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RUS");
	int num;

	printf("Введите число от 1 до 13: ");
	scanf("%d", &num);

	switch (num) {
	case 1:
		printf("Один\n");
		break;
	case 2:
		printf("Два\n");
		break;
	case 3:
		printf("Три\n");
		break;
	case 4:
		printf("Четыре\n");
		break;
	case 5:
		printf("Пять\n");
		break;
	case 6:
		printf("Шесть\n");
		break;
	case 7:
		printf("Семь\n");
		break;
	case 8:
		printf("Восемь\n");
		break;
	case 9:
		printf("Девять\n");
		break;
	case 10:
		printf("Десять\n");
		break;
	case 11:
		printf("Одиннадцать\n");
		break;
	case 12:
		printf("Двенадцать\n");
		break;
	case 13:
		printf("Тринадцать\n");
		break;
	default:
		printf("Число вне диапазона 1–13.\n");
	}

	return 0;
}