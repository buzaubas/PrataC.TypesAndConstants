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

	//int - ����������� ����� �����, short � long ����� �� ������ � �� ������
	//long int = long, short int = short

	//������ ����� � ������� float ->
	float fl = 1 / 3.f; //0.333333
	//Without the.f the number gets interpreted as an integer, hence 1 / 3 is(int)1 / (int)3 = > (int)0 instead of the desired(float)0.333333.The.f tells the compiler to interpret the literal as a floating point number of type float.There are other such constructs such as for example 0UL which means a(unsigned long)0, whereas a plain 0 would be an(int)0.

	//������ ����� � ������� long ->
	long a = 212L; 

	//���� ����� ���������� � ����� 0, �� ��� ����������������, ��� "������������"
	int b = 020; // = 16

	//���� ����� ���������� � ����� 0x (0X), �� ��� ����������������, ��� "�����������������"
	int c = 0x20; // = 32

	//������������
	int i = 2147483647; //0111 1111 1111 1111 1111 1111 1111 1111 - 32 bits
	i++; 
	printf("%d", i); //����� ���� ��� �������

	//unsigned - �����������, ��� ���������� ������� ��� ������ �������������
	size_t ribs = 6;

	char beep = CHAR(7);
	printf("%c", beep);

	//char - ������ � ������������ ����
	// /007 = /07 = /7 - ���������
	// /020 = /02 - �����������

	//!���������� ������������������!
	// \n ����� ������
	// \t ��������� (5 ��� 8 �������)
	// \b ��� �����
	// \r ������� �������
	// \f ������ ������
	// \\ �������� ����� �����(\)
	// \' ��������
	// \" �������

	char ch;
	scanf_s("%c", &ch);
	printf("Code symbol -> %c = %d", ch, ch);

	//double = long float - ������� ��������
	//������ ����� float
	// 3.14159
	// .2
	// 4e16 (4e+16)
	// .8E-5
	// 100.

	//some = 4.0 * 2.0; 
	//� ���� ������ ��������� ����������� � ������ ��� ������ ���� double, �.� ��� ������ �� ��� ��������� 64 ���.
	//�� ������������ ����������� � ������� �������� ��������� � ������� ���������
	//� ������ ����� ����� ������������ �������� ����������

	printf("\nData of int type takes %d bait. \n", sizeof(int));
}