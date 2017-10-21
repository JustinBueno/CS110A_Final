// Final Project vendingMAchine.cpp
// Justin Mirabueno
// CS 110A C++
// This vending machine uses functions to print menu options. There is a category menu and for each catergory 
// there is a menu of 3 items per category. The program uses arrays to hold  and print the values of the items.
// Is set up as a do while loop because it is a vending machine the only way to stop buying from it is to walk away.
// But the options are on the healthier side. 
#include <iostream>
#include <iomanip>			// library used so I could print the values in the arrays
using namespace std;

void mainMenu()				// A function that prints out the first user category menu
{
	cout << "\n######################################" << endl;
	cout << "[||| VENDING ||||||||||||| MACHINE|||]" << endl;   
	cout <<	"___|___|___|___|___|___|___|___|___|__" << endl;
	cout << "_|___|___|___|___|___|___|___|___|___|" << endl;
	cout <<	"___|___|___|___|___|___|___|___|___|__" << endl;
	cout <<	"_|___|___|___|___|___|___|___|___|___|" << endl;
	cout << "___|___|___|___|___|___|___|___|___|__" << endl;
	cout << "_|___|___|___|___|___|___|___|___|___|" << endl;
	cout << "|__|___|___| * MENU * _|___|___|___|__" << endl;
	cout << "| ( 1 ) LIQUID REFRESHMENT |___|___|__" << endl;
	cout << "| ( 2 ) CANNED GOODS |___|___|___|___|" << endl;
	cout << "| ( 3 ) CANDY  |___|___|___|___|___|__" << endl;
	cout << "| ( 4 ) FRUITS __|___|___|___|___|___|" << endl;
	cout << "| ( 5 ) Exit |__|__|___|___|___|___|_ " << endl;
	cout << "######################################" << endl;
 
 }

void liquidMenu()								// A function to print the menu for liquids 
{
	cout << "\n\t 1. Water Bottle    \t $1.50\n";
	cout << "\n\t 2. Orange Juice    \t $2.00\n";
	cout << "\n\t 3. Orange Soda     \t $1.10\n";
}

void cannedMenu()								// A function to print the menu for canned goods
{
	cout << "\n\t 1. Canned Corn       \t $3.00\n";
	cout << "\n\t 2. Canned Peaches    \t $3.00\n";
	cout << "\n\t 3. Canned Pineapple  \t $3.00\n";
}

void candyMenu()								// A function to print the menu for candy
{
	cout << "\n\t 1. Dark Chocolate    \t $1.35\n";
	cout << "\n\t 2. Red Liquorice     \t $2.00\n";
	cout << "\n\t 3. Sour Patch Kids   \t $1.50\n";
}

void fruitsMenu()								// A function to print the menu for fruits
{
	cout << "\n\t 1. Nectarine    \t $2.00\n";
	cout << "\n\t 2. Grapes       \t $2.75\n";
	cout << "\n\t 3. Pears        \t $1.50\n";
}

int main ()									// main function returns an int
{	
	int input;				
	int choice;
	bool exit;
	
	double liquid[3] = { 1.50, 2.00, 1.10 };			// arrays hold the values for each item category
	
	double canned[3] = { 3.00, 3.00, 3.00 };			// only 3 items per category
	
	double candy[3] = { 1.35, 2.00, 1.50 };
	
	double fruits[3] = { 2.00, 2.75, 1.50 };

        
		
			mainMenu();					// calling the function for the first menu 

		     cout << "\nChoose a category: ";

		      cin >> input;

		      while (1)					//while loop lets program only accept integers
			{
				if(cin.fail())
					{
						cin.clear();
						cin.ignore();
						cout << "Invalid input. Choose again: ";
						cin >> input;
					}
					if(!cin.fail())				// If valid input loop will break and continue on
						break;
			}

		   
		

	switch(input)								// switch statement to handle the first menu of categories
	{
		case 1 : liquidMenu();						// first case calls the function that prints out the values of the liquid refreshments
                    
						cout << "\nEnter Item # ";	// prompts user to select an item from the above function that prints the liquid menu

						cin >> choice;
		     
					switch (choice)				// nested switch statement in case 1 to handle the item choices 
					{
						case 1: cout << fixed << setprecision(2);	// allows it to print 2 places after the decimal for the value of the array  
						        cout << "You just bought a Water Bottle for $" << liquid[0] << endl;
						        cout << "Thanks for stopping by. Exit." << endl;
						        exit = true;

						break;

						case 2: cout << fixed << setprecision(2);
								cout << "You just bought an Orange Juice for $" << liquid[1] << endl;
								cout << "Thanks for stopping by. Exit." << endl;
								exit = true;

						break;

						case 3: cout << fixed << setprecision(2);
								cout << "You just bought an Orange Soda $" << liquid[2] << endl;
								cout << "Thanks for stopping by. Exit." << endl;
								exit = true;

						break;

						default: "Invalid choice. Good Bye.";   // this error only prints if the user inputs a double digit value 
								exit = true;
					}					// otherwise it it's invalid the program jumps back to the choose a category prompt
		
		break;

		case 2 : cannedMenu();						// case 2 function called to print the canned goods menu

					
						cout << "\nEnter item # ";

						cin >> choice;
					
				

					switch (choice)				// another nested switch statement for the canned goood items 
					{
						case 1: cout << fixed << setprecision(2);
								cout << "You just bought Canned Corn for $" << canned[0] << endl;
								cout << "Thanks for stopping by. Exit." << endl;
								exit = true;

						break;

						case 2: cout << fixed << setprecision(2);
								cout << "You just bought Canned Peaches for $" << canned[1] << endl;
								cout << "Thanks for stopping by. Exit." << endl;
								exit = true;

						break;

						case 3: cout << fixed << setprecision(2);
								cout << "You just bought Canned Pineapple for $" << canned[2] << endl;
								cout << "Thanks for stopping by. Exit." << endl;
								exit = true;

						break;

						default: cout << "Invalid choice. Good Bye." << endl;
						exit = true;
					}

		
		break;

		case 3 : candyMenu();						// functoin that prints the candy menu

						cout << "\nEnter item # ";

						cin >> choice;
					
					switch(choice)				// nested switch statement to handle cases for candy items 
					{
						case 1: cout << fixed << setprecision(2);
								cout << "You just bought Dark Chocolate for $" << candy[0] << endl;
								cout << "Thanks for stopping by. Exit." << endl;
								exit = true;

						break;

						case 2: cout << fixed << setprecision(2);
								cout << "You just bought Red Liqourice for $" << candy[1] << endl;
								cout << "Thanks for stopping by. Exit." << endl;
								exit = true;

						break;

						case 3: cout << fixed << setprecision(2);
								cout << "You just bought Sour Patch Kids for $" << candy[2] << endl;
								cout << "Thanks for stopping by. Exit." << endl;
								exit = true;

						break;

						default: cout << "Invalid choice. Good Bye." << endl;
						exit = true;
					}
		
		break;

		case 4 : fruitsMenu();						// called function that prints fruits menu
		
						cout << "\nEnter item #";

						cin >> choice;

					switch(choice)				// nested switch statement to hold 
					{
						case 1:	cout << fixed << setprecision(2);
								cout << "You just bought a Nectarine for $" << fruits[0] << endl;
								cout << "Thanks for stopping by. Exit." << endl;
								exit = true;
						
						break;

						case 2: cout << fixed << setprecision(2);
								cout << "You just bought some Grapes for $" << fruits[1] << endl;
								cout << "Thanks for stopping by. Exit." << endl;
								exit = true;

						break;

						case 3: cout << fixed << setprecision(2);
								cout << "You just bought a Pear for $" << fruits[2] << endl;
								cout << "Thanks for stopping by. Exit." << endl;
								exit = true;

						break;

						default: cout << "Invalid Input. Good Bye." << endl;
						exit = true;
					}
		
		break;

		default: cout << "Thanks for stopping by. Exit." << endl;
		exit = true;
		
	}


return 0;

}


// I had trouble deciding if I should use if else statements decided on switch because it's much cleaner and easeir to handle the cases
// Decided to use a while loop for input validation and used arrays to hold the values of each category. 
// Added input validation for initial menu so if a char is entered the program will prompt the user to choose again. Instead of just exiting the program
// Functions beside main were made for the purpose of printing menus 
