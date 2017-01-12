//way to include libraries
#include <iostream>
#include <string>

//you cand use namespace std to not have to use std:: every time
//using namespace std
//this is considered bad practice if there are many libaries with the same command

/*basic setup
#include <iostream>
#include <string>

int main()
{
	
	return 0;
}
*/
int main() //all of the program happens in main
{
    std::cout << "Hello, World!" << std::endl; //use std::endl; to end a line
	std::cout << "Hello, World!\n"; //also gives a new line
	
	//declaring variables
	int i;
	i=10;
	//or
	int i = 10;
	
	//input number
	std::cin >> i;
	std::cout << "number is " << i << std::endl;
	
	//inputting strings is a bit more complicated unfortunately
	std::string name;
	geline(std::cin, name);
	std::cout << name;
	
	//changing datatypes - you don't!!!! it's really bad in C++
	//example of changing a string input into int using a library:
	//#include <sstream>
	string mystr ("1204");
	int myint;
	stringstream(mystr) >> myint
	//pain is real
	
	
	//maths
	
	
	
	
	
	
	
	
	
	
	
	//arrays
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//conditionals
	int i = 1;
	int j = 2;
	
	if (i==1) && (i==2)
	{
		std::cout << "Nice!" << std::endl;
	} else if (i>10) || (j<10)
	{
		std::cout << "Kinda" << std::endl;
	} else
	{
		std::cout << "Fail" << std::endl;
	}
	
	
	//loops
	
	//while loop - same as C#
	int i=1;
	while(i<=10) //can use a bool set to True or not increment in order to get an infinite loop
	{
		std::cout << i << std::endl;
		i++;
	}
	
	
	//do while - runs the code at least once, until while condition is met, then does other stuff
	int i;
	do 
	{
		std::cout << "Guess a number between 1 and 10: ";
		std:cin >> i
	} while (i==5)
	{
		std::cout << "You guessed it!" << std::endl;
	}
	
	//for loop - for(initialization; condition to keep going; increase);
	for(int i=1; i<10; i++);
	{
		std::cout << i << std::endl;
	}
	
	//for loop for running through a set of data - like for each loop in C# or for loop in Python
	string str {"Hello!"};
	for (char c : str) //runs the code once for every char in that string, works with arrays as well
	{
		std::cout << "[" << c << "]";
	}

	//switch statements - equivalent of an if statement but takes less space - needs breaks!
	int x = 1;
	switch (x) {
	case 1:
		std::cout << "x is 1";
		break;
	case 2:
		std::cout << "x is 2";
		break;
	case 3:
	case 4:
		std::cout << "x is 3 or 4";
	default:
		std::cout << "value of x unknown";
	}
	
	//functions

	//you put them OUTSIDE of main!
	//put it before main or you will have to declare it before main - can still keep it under it, but need a declaration before
	
	//example of int function:
	int addition (int a, int b)
	{
		int r;
		r=a+b;
		return r;
	}
	//then in main call it like:
	z = addition(5,3);
	std::cout << z << std::endl;
	
	//function of no specific type uses type void
	void printmessage ()
	{
		cout << "I'm a function!";
	}
	//then call it in main
	printmessage();
	
	
	
	
	//classes
	
	
	
	
	
	
	
	
	

	
	
	return 0;
}

