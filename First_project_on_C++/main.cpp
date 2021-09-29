#include<iostream>
using namespace std;

int  main()
{
	//cout << "Hello world!"<<" My name Nick!"<<endl;
	//cout << "I love DUT! \n"<<"And DUT loves me!"<<endl;
	//cout << "C\n+\n+";//Вывод через строку

	//int a = 10;
	//int b = 20;
	//int sum = 10 + 20;
	//cout << sum <<endl;  //Sum of a + b

	/*int a;
	int b;
	int sum;
	cout << "Please enter number of 'a' " << endl;
	cin >> a;
	cout << "Please enter number of 'b' " << endl;
	cin >> b;
	sum = a + b;
	cout << "Sum: \n" << sum;
	return 0;*/

	/*auto x = 11;
	auto str = "Money";
	auto chr = 'c';
	auto bln = true;
	auto flt = 10.50;
	
	int div = 50 % 26;
	cout << div;*/
	
	/*int mark;
	cin >> mark;
	if (mark < 50) {
		cout << "You failed" << endl;
	}
	else
	{
		cout << "You passed" << endl;
	}*/


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