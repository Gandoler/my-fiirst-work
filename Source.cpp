#include <iostream>







int main() {


	system("chcp 1251");
	system("color f4");
	int a, b;
	scanf_s("%i%i", &a, &b);

	int c = a + b;
	printf("%i", c);


	system("pause");
	return 0;
	///��� ����������� git config --global --edit
}//1)����� � ������� �������� � ����� ������� cd +����(���� ���� ������� ��������� �������
//2)����� git init-������� ����������� 
// git status -���������� ��������� ������ ������� 
// untraked-�� ��� �� ��������-�� �������������� ���� //////delited-���������/////////modified-����������� ����/////unchanged-�� ������� � ���������� ������ ����
//git add (�������� �����    course.cpp)(����� �������� * � ��� ����������)
//git commit ��� ������//�����������	���� ��������� 