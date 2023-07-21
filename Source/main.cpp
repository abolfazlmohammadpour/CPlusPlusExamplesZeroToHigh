#include <iostream>
#include <string>

#define Sum (unsigned short int)1
#define Subtraction (unsigned short int)2
#define Multiplication (unsigned short int)3
#define Division (unsigned short int)4

void ClearInputBuffer(void);

int main(int argc, const char *argv[])
{
    long double NumberOne = (long double)0;
    long double NumberTwo = (long double)0;
    unsigned short int Operation = (unsigned short int)0;

    while (true)
    {
        std::cout << "Please Enter Number One : ";

        std::string GettingFromUser = "";
        std::cin >> GettingFromUser;
        try
        {
            NumberOne = std::stold(GettingFromUser);
            break;
        }
        catch (std::invalid_argument)
        {
            std::cout << '\a' << "Error: Please Just Enter A Number." << std::endl;
            continue;
        }
    }

    while (true)
    {
        std::cout << "Please Enter Number Two : ";

        std::string GettingFrromUser = "";
        std::cin >> GettingFrromUser;
        try
        {
            NumberTwo = std::stold(GettingFrromUser);
            break;
        }
        catch (std::invalid_argument)
        {
            std::cout << '\a' << "Error: Please Just Enter A Number." << std::endl;
            continue;
        }
    }

    while (true)
    {
        std::cout << Sum << ") Sum" << '\t';
        std::cout << Subtraction << ") Subtraction" << '\t';
        std::cout << Multiplication << ") Multiplication" << '\t';
        std::cout << Division << ") Division" << std::endl;
        std::cout << "Please Enter Number Of An Operation : ";

        std::string GettingFromUser = "";
        std::cin >> GettingFromUser;
        try
        {
            Operation = (unsigned short int)std::stoi(GettingFromUser);

            if ((Operation >= Sum) && (Operation <= Division))
            {
                break;
            }
            else
            {
                std::cout << '\a' << "Error: Please Enter A Valid Operation" << std::endl;
                continue;
            }
        }
        catch (std::invalid_argument)
        {
            std::cout << '\a' << "Error: Please Just Enter A Number." << std::endl;
            continue;
        }
    }

    switch (Operation)
    {
    case Sum:
    {
        long double SumIs = (NumberOne + NumberTwo);

        std::cout << "Sum Is : " << SumIs << std::endl;

        break;
    }
    case Subtraction:
    {
        long double SubtractionIs = (NumberOne - NumberTwo);

        std::cout << "Subtraction Is : " << SubtractionIs << std::endl;

        break;
    }
    case Multiplication:
    {
        long double MultiplicationIs = (NumberOne * NumberTwo);

        std::cout << "Multiplication Is : " << MultiplicationIs << std::endl;

        break;
    }
    case Division:
    {
        long double DivisionIs = (long double)0;

        if (NumberTwo == (long double)0)
        {
            std::cout << '\a' << "Error: You Can Not Divide To Zero." << std::endl;

            break;
        }
        else
        {
            DivisionIs = (NumberOne / NumberTwo);

            std::cout << "Division Is : " << DivisionIs << std::endl;

            break;
        }
    }
    }

    return (int)0;
}