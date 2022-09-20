//Linersearch
#include <iostream>
// Линенйный поиск первого вхождения элемента Value в массив arr .Поиск начинается с позиции begin  (по умолчанию 0)
template <typename T>
int search_index(T arr[], const int length, T value, int begin = 0)
{
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
}
template<typename T>// Линенйный поиск последнего вхождения элемента Value в массив arr .
int search_last_index(T arr[], const int length, T value )
{
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
//Поиск начинается с позиции begin  
template<typename T>
int search_last_index(T arr[], const int length, T value, int begin )
{
for (int i = begin; i >= 0; i--)
if (arr[i] == value)
return i;
}
//Вывод подслова с позиции символа 7
void subword( char arr[], const int length, char sym )
{
	int index = search_index(arr, length, sym);
	if (index == -1)
		std::cout << "error";
	else
	for (int i = index; i < length; i++)
		std::cout << arr[i];
	std::cout << '\n';
}


int main() 
{

	setlocale(LC_ALL, "Russian");
		int n, m;

		const int size = 10;
					// 0  1  2  3   4  5  6  7   8  9 
		int  arr[size]{6, 4, 1, 7, -6, 1, 0, 1, 11, 8};
		
		//Search index

		std::cout << "первая Позиция числа 7 в массиве = " << search_index(arr, size, 7) << '\n';
		std::cout << "первая Позиция числа в 1 массиве = " << search_index(arr, size, 1) << '\n';
		
		if(search_index(arr,size,100)==-1)
		std::cout << "  числа в 100 нет массиве = " << search_index(arr, size, 100) << '\n';
		else
			std::cout << "первая Позиция числа в 100 массиве = " << search_index(arr, size, 100) << '\n';
		std::cout<<"первая Перваяя позиция числа 1 один начиная с позиции 4 = "<< search_index(arr, size, 1, 4) << '\n';
		
		//search last index

		std::cout << "Последняя позиция числа 7 в массиве = " << search_last_index(arr, size, 7) << '\n';//3
		std::cout << "Последняя позиция числа 1 в массиве = " << search_last_index(arr, size, 1) << '\n';//7
		std::cout << "Последняя позиция числа 1 в массиве начиная с позиции 4 = " << search_last_index(arr, size, 1, 4) << '\n';//2

		//Задание "подслово"

		std::cout << "Изначальное слово: \n";
		const int letters = 8;
		char word[letters]{ 'f','u','n','c','t','i','o','n' };
		for (int i = 0; i < letters; i++)
			std::cout << word[i];
		std::cout << "\nПодслово: \n";
		subword(word, letters, 'a');
		return 0;
}