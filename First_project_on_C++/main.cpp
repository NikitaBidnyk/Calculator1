#include<iostream>
using namespace std;

int  main()
{
	//*Calculator*
	int num = 1;
	int number1;
	int number2;
	int dosmt;
	int result;
	while (num<=5)
	{
		cout << "Enter first number: " << endl;
		cin >> number1;
		cout << "Enter second number: " << endl;
		cin >> number2;
		cout << "Choose what you want to do?: 1)*, 2)/, 3)+, 4)-, 5)%  " << endl;
		cin >> dosmt;

		switch (dosmt)
		{
			/*
			Instruction:
			case 1 - *
			case 2 - /
			case 3 - +
			case 4 - -
			case 5 - %
			*/

		case 1: {
			result = number1 * number2;
			cout << "Result: " << result << endl;
			break;
		}
		case 2: {
			if (number1<number2)
			{
				double a = (double)number1 / (double)number2;
				cout << "Result: " << a << endl;
			}
			if (number1%number2!=0) 
			{
				double a = (double)number1 / (double)number2;
				cout << "Result: " << a << endl;
				break;
			}
			if(number2==0)
			{
				cout << "Error! " << endl;
			}
			else
			{
				result = number1 / number2;
				cout << "Result: " << result << endl;
			}
			break;
		} 
		case 3: {
			result = number1 + number2;
			cout << "Result: " << result << endl;
			break;
		}
		case 4: {
			result = number1 - number2;
			cout << "Result: " << result << endl;
			break;
		}
		case 5: {
			result = number1 % number2;
			cout << "Result: " << result << endl;
			break;
		}
		}
		cout << "=====================================" << endl;
		num++;

	}

}