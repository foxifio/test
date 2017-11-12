
#include <iostream>
#include <math.h>




using namespace std;
void Input(int** mas, int size);
void Output(int** mas, int size);
void Sort(int** mas, int size);
void function(int** mas, int size, double d);
int main()
{
	const int size = 5;
	int** mas = new int*[size];    
	for (int i = 0;i < size;i++)
	{
		mas[i] = new int[size];
	
	}
	int i =0, j=0 , current, previous;
	double sum = 0, d = 1;
	
	
	cout << "                                                      OKEY,LETS GO! \n";

	
	cout << "-We need numbers..\n";

	
	Input(mas, size);
	system("cls");
	
	cout << "Here is the matrix\n";
    Output( mas,size);
	

	cout << "We are sorting it out...\n";
    Sort(mas, size);
	cout << "______________________________________________________________________________________________________________________";


    	cout << "Here is a sorted matrix\n";
     Output(mas,size);
	  
	
	  
	  
	  function(mas, size, d);
	
	}  








void Input(int** mas, int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0;j < size;++j)
		{
			cout << "Enter a [" << i+1 << "]" << "[" << j+1 << "]"<< ":";
			cin >> mas[i][j];

		}
	}
}
	void Output(int** mas, int size)
	{
		for (int i = 0;i < size;++i)
		{
			for (int j = 0; j < size; ++j)
			{
				cout << mas[i][j] << " ";

			}
			cout << "\t" << "\n";
		}
		cout << "______________________________________________________________________________________________________________________";
		cout << "\n";
	}
void Sort(int** mas, int size)
{
	for (int i = 0;i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			int current = j;
			int  previous = mas[i][j];
			for (int h = j + 1; h < size; ++h)
			{
				if (mas[i][h] > previous)
				{
					current = h;
					previous = mas[i][h];
				}


			}
			mas[i][current] = mas[i][j];
			mas[i][j] = previous;
		}


	}



}