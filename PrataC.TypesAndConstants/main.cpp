#include <stdio.h>
#include<Windows.h>

void main() {
	//seven important types in C
	//long, short, unsigned, char, float, double - key words

	//modern computers are 64 and 32 bit sytems, it means that in one word they contain
	//64 bits = 8 bait (1 bait = 8 bits)

	float ax = 3.16E7, bx = 7.00, cx = 2e-8; //e = 10^

	float d, f; //float type can be changed only on 6 or 7 digits (16 bit only)
	d = 2.0e20 + 1.0;
	f = d - 2.0e20;
	printf("%f\n", f);

	//int - стандартная длина слова, short и long будут не больше и не меньше
	//long int = long, short int = short

	//Запись числа в формате float ->
	float fl = 1 / 3.f; //0.333333
	//Without the.f the number gets interpreted as an integer, hence 1 / 3 is(int)1 / (int)3 = > (int)0 instead of the desired(float)0.333333.The.f tells the compiler to interpret the literal as a floating point number of type float.There are other such constructs such as for example 0UL which means a(unsigned long)0, whereas a plain 0 would be an(int)0.

	//Запись числа в формате long ->
	long a = 212L; 

	//Если число начинается с цифры 0, то оно интерпритируется, как "восьмиричное"
	int b = 020; // = 16

	//Если число начинается с цифры 0x (0X), то оно интерпритируется, как "шестнадцатеричное"
	int c = 0x20; // = 32

	//Переполнение
	int i = 2147483647; //0111 1111 1111 1111 1111 1111 1111 1111 - 32 bits
	i++; 
	printf("%d", i); //ведет себя как одометр

	//unsigned - гарантирует, что переменная никогда нес станет отрицательной
	size_t ribs = 6;

	char beep = CHAR(7);
	printf("%c", beep);

	//char - запись в восьмиричном виде
	// /007 = /07 = /7 - ПРАВИЛЬНО
	// /020 = /02 - НЕПРАВИЛЬНО

	//!управлющие последовательности!
	// \n новая строка
	// \t табуляция (5 или 8 позиции)
	// \b шаг назад
	// \r возврат каретки
	// \f подача бланка
	// \\ обратная косая черта(\)
	// \' апостраф
	// \" кавычки

	char ch;
	scanf_s("%c", &ch);
	printf("Code symbol -> %c = %d", ch, ch);

	//double = long float - двойная точность
	//запись чисел float
	// 3.14159
	// .2
	// 4e16 (4e+16)
	// .8E-5
	// 100.

	//some = 4.0 * 2.0; 
	//В этом случае константы размещаются в памяти как данные типа double, т.е для каждой из инх отводится 64 бит.
	//Их произведение вычисляется с помощью операции умножение с двойной точностью
	//и только после этого производится усечение результата

	printf("\nData of int type takes %d bait. \n", sizeof(int));
}