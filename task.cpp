// Variant 8

#include <iostream>


// Functions for exercise 1
void ex1Task1()
{
    int n;
    std::cout << "Input n: " << std::endl;
    std::cin >> n;

    int array[100];
    std::cout << "Input array elements: " << std::endl;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> array[i];
    }

    int oddCount;
    for (int i = 0; i < n; ++i)
    {
        if (array[i] % 2 != 0)
        {
            oddCount++;
        }
    }
    std::cout << "Odd elements: " << oddCount << std::endl;
}

void ex1Task2()
{
    int n;
    std::cout << "Input n (raws): " << std::endl;
    std::cin >> n;

    int m;
    std::cout << "Input m (columns): " << std::endl;
    std::cin >> m;

    int array[100][100];
    for (int i = 0; i < n; ++i)
    {
        std::cout << "Input elements of " << i + 1 << " raw" << std::endl;
        for (int j = 0; j < m; ++j)
        {
            std::cin >> array[i][j];
        }
    }

    int oddCount;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (array[i][j] % 2 != 0)
            {
                oddCount++;
            }
        }
    }
    std::cout << "Odd elements: " << oddCount << std::endl;
}

// Function for exercise 2
void ex2()
{
    int n;
    std::cout << "Input n: " << std::endl;
    std::cin >> n;

    int array[100];
    std::cout << "Input array elements: " << std::endl;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> array[i];
    }
    
    int index = 0;
    for (int i = 1; i < n; ++i)
    {
        if (array[i] >= array[index])
        {
            index = i;
        }
    }
    std::cout << "Index: " << index <<std::endl;
}

// Function for exercise 3


// Function for exercise 4


// Function for exercise 5


// Function for exercise 6


int main()
{
    // Exercise 1.
    // ex1Task1();
    // ex1Task2();

    // Exercise 2.
    ex2();

    // Exercise 3.
    // ex3();

    // Exercise 4.
    // ex4();

    // Exercise 5.
    // ex5();

    // Exercise 6.
    // ex6();

    return 0;
}
