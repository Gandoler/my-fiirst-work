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
	///для регистрации git config --global --edit
}//1)нужно в консоли перейсти к папке проекта cd +путь(если есть пробелы поставить кавычки
//2)пишем git init-создаем репазиторий 
// git status -показывает состояние файлов проекта 
// untraked-мы еще не кометили-не отслеживаеммый файл //////delited-удаленный/////////modified-обновленный файл/////unchanged-не изменен с предыдущей версии кода
//git add (название файла    course.cpp)(можем поставит * и все закамитить)
//git commit для комита//СОХРАНЕННИЕ	всех изменений 