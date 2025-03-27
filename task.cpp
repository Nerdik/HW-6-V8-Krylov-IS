// Variant 8

#include <iostream>
#include <fstream>


// Functions for exercise 1
void ex1Task1()
{
    std::ifstream input("exercise1Task1.txt");
    std::ofstream output("result1Task1.txt");

    if (!input.is_open())
    {
        std::cerr << "Input file is not found!" << std::endl;
    }
    else if (!output.is_open())
    {
        std::cerr << "Output file is not opened!" << std::endl;
    }
    else
    {   
        int n = 0;
        int array[10];
        while(!input.eof())
        {
            input >> array[n];
            ++n;
        }

        int oddCount;
        for (int i = 0; i < n; ++i)
        {
            if (array[i] % 2 != 0)
            {
                oddCount++;
            }
        }
        output << oddCount << std::endl;
    }
}


void ex1Task2()
{
    std::ifstream input("exercise1Task2.txt");
    std::ofstream output("result1Task2.txt");

    if (!input.is_open())
    {
        std::cerr << "Input file is not found!" << std::endl;
    }
    else if (!output.is_open())
    {
        std::cerr << "Output file is not opened!" << std::endl;
    }
    else
    {
        int n, m;
        if (input >> n >> m)
        {
            int array[10][10];
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    input >> array[i][j];
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
            output << oddCount << std::endl;
        }
    }
}

// Function for exercise 2
void ex2()
{
    std::ifstream input("exercise2.txt");
    std::ofstream output("result2.txt");

    if (!input.is_open())
    {
        std::cerr << "Input file is not found!" << std::endl;
    }
    else if (!output.is_open())
    {
        std::cerr << "Output file is not opened!" << std::endl;
    }
    else
    {
        int n = 0;
        int array[10];
        while(!input.eof())
        {
            input >> array[n];
            ++n;
        }

        int index = 0;
        for (int i = 1; i < n; ++i)
        {
            if (array[i] >= array[index])
            {
                index = i;
            }
        }

        output << index << std::endl;
    }
}

// Function for exercise 3
void ex3()
{
    std::ifstream input("exercise3.txt");
    std::ofstream output("result3.txt");

    if (!input.is_open())
    {
        std::cerr << "Input file is not found!" << std::endl;
    }
    else if (!output.is_open())
    {
        std::cerr << "Output file is not opened!" << std::endl;
    }
    else
    {

        int n;
        if (input >> n)
        {
            int array[10][10];
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    input >> array[i][j];
                }
            }
        
            if (n % 2 == 0)
            {
                for (int i = 0; i < n; ++i)
                {
                    int temp = array[i][n/2 - 1];
                    array[i][n/2 - 1] = array[i][n/2];
                    array[i][n/2] = temp;
                }
            }
            else
            {
                for (int i = 0; i < n; ++i)
                {
                    int temp = array[i][0];
                    array[i][0] = array[i][n/2];
                    array[i][n/2] = temp;
                }
            }
            
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    output << array[i][j] << "\t";
                }
                output << std::endl;
            }
        }
    }
}

// Function for exercise 4
void ex4()
{
    std::ifstream input("exercise4.txt");
    std::ofstream output("result4.txt");

    if (!input.is_open())
    {
        std::cerr << "Input file is not found!" << std::endl;
    }
    else if (!output.is_open())
    {
        std::cerr << "Output file is not opened!" << std::endl;
    }
    else
    {

        int n;
        if (input >> n)
        {
            int array[10][10];
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    input >> array[i][j];
                }
            }


            int sumArray[10] = {0};
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    if (array[i][j] % 2 == 0 && array[i][j] > 0)
                    {
                        sumArray[j] += array[i][j];
                    }
                }
            }
        
            for (int i = 0; i < n; ++i)
            {
                output << sumArray[i] << "\t";
            }
        }
    }
}

// Functions for exercise 5
void ex5NewElementSpace(int array[100], int k, int n)
{
    for (int i = n; i > k; --i)
    {
        array[i] = array[i - 1];
    }
}

void ex5()
{
    std::ifstream input("exercise5.txt");
    std::ofstream output("result5.txt");

    if (!input.is_open())
    {
        std::cerr << "Input file is not found!" << std::endl;
    }
    else if (!output.is_open())
    {
        std::cerr << "Output file is not opened!" << std::endl;
    }
    else
    {
        int newElement;
        if (input >> newElement)
        {

            int n = 0;
            int array[10];
            while(!input.eof())
            {
                input >> array[n];
                ++n;
            }

            for (int i = 0; i < n; ++i)
            {
                if (array[i] % 2 == 0)
                {
                    ex5NewElementSpace(array, i, n);
                    array[i] = newElement;
                    ++n;
                    ++i;
                }
            }

            for (int i = 0; i < n; ++i)
            {
                output << array[i] << "\t";
            }
        }
    }
}

// Functions for exercise 6
void ex6ReduceMatrix(int array[10][10], int i, int n, int m)
{
    for (int k = i; k < n - 1; ++k)
    {
        for (int l = 0; l < m; ++l)
        {
            array[k][l] = array[k + 1][l];
        }
    }
}

void ex6()
{   
    std::ifstream input("exercise6.txt");
    std::ofstream output("result6.txt");

    if (!input.is_open())
    {
        std::cerr << "Input file is not found!" << std::endl;
    }
    else if (!output.is_open())
    {
        std::cerr << "Output file is not opened!" << std::endl;
    }
    else
    {

        int n, m, target;
        if (input >> n >> m >> target)
        {
            int array[10][10];
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    input >> array[i][j];
                }
            }

            for (int i = n - 1; i >= 0; --i)
            {
                int sum = 0;
                for (int j = 0; j < m; ++j)
                {
                    sum += array[i][j];
                }
                if (sum <= target)
                {
                    ex6ReduceMatrix(array, i, n, m);
                    --n;
                }
            }

            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    output << array[i][j] << "\t";
                }
                output << std::endl;
            }
        }
    }
}

int main()
{
    // Exercise 1.
    ex1Task1();
    ex1Task2();

    // Exercise 2.
    ex2();

    // Exercise 3.
    ex3();

    // Exercise 4.
    ex4();

    // Exercise 5.
    ex5();

    // Exercise 6.
    ex6();

    return 0;
}
