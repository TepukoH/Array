#include <iostream>

int sumNegativeElements(int *arr, int length)
{
	int sum = 0;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] < 0)
			sum += arr[i];
	}

	return sum;
}

int* createArray(int length)
{
	int *arr = new int[length];

	for (int i = 0; i < length; i++)
	{
		arr[i] = -5 + rand() % 10;		
	}

	std::cout << "Array: ";

	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << std::endl;

	return arr; 
}

int main()
{
	srand(time(0));

	int LENGTH = 6;
	int *ARRAY;
	int SUM;
	
	ARRAY = createArray(LENGTH);
	SUM = sumNegativeElements(ARRAY, LENGTH);

	std::cout << "Sum: " << SUM;
	
	delete [] ARRAY;
	ARRAY = nullptr;
	return 0;
}
