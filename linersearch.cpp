//Linersearch
#include <iostream>
// ��������� ����� ������� ��������� �������� Value � ������ arr .����� ���������� � ������� begin  (�� ��������� 0)
template <typename T>
int search_index(T arr[], const int length, T value, int begin = 0)
{
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
}
template<typename T>// ��������� ����� ���������� ��������� �������� Value � ������ arr .
int search_last_index(T arr[], const int length, T value )
{
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
//����� ���������� � ������� begin  
template<typename T>
int search_last_index(T arr[], const int length, T value, int begin )
{
for (int i = begin; i >= 0; i--)
if (arr[i] == value)
return i;
}
//����� �������� � ������� ������� 7
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

		std::cout << "������ ������� ����� 7 � ������� = " << search_index(arr, size, 7) << '\n';
		std::cout << "������ ������� ����� � 1 ������� = " << search_index(arr, size, 1) << '\n';
		
		if(search_index(arr,size,100)==-1)
		std::cout << "  ����� � 100 ��� ������� = " << search_index(arr, size, 100) << '\n';
		else
			std::cout << "������ ������� ����� � 100 ������� = " << search_index(arr, size, 100) << '\n';
		std::cout<<"������ ������� ������� ����� 1 ���� ������� � ������� 4 = "<< search_index(arr, size, 1, 4) << '\n';
		
		//search last index

		std::cout << "��������� ������� ����� 7 � ������� = " << search_last_index(arr, size, 7) << '\n';//3
		std::cout << "��������� ������� ����� 1 � ������� = " << search_last_index(arr, size, 1) << '\n';//7
		std::cout << "��������� ������� ����� 1 � ������� ������� � ������� 4 = " << search_last_index(arr, size, 1, 4) << '\n';//2

		//������� "��������"

		std::cout << "����������� �����: \n";
		const int letters = 8;
		char word[letters]{ 'f','u','n','c','t','i','o','n' };
		for (int i = 0; i < letters; i++)
			std::cout << word[i];
		std::cout << "\n��������: \n";
		subword(word, letters, 'a');
		return 0;
}