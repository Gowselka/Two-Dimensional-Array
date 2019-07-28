//Sinclair Community College
//Functions Coding Assignment
//Kevin Gowsell
//April 21st, 2019

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <cctype>
using namespace std;

const int Months_Size = 12;
const int Visitor_Size = 9;
int visitors[Visitor_Size][Months_Size];

//display all the data from both text files
void DisplayData()
{
	/*for (int i = 0; i < Months_Size; i++)
	{
		for (int j = 0; j < Visitor_Size; j++)
		{
			std::cout << visitors[i][j] << ' ';
		}
		std::cout << std::endl;
	}*/
	cout << setw(5);
	cout << "Month       " << "   T Rec       " << "T Non-Rec   " << "  Con Lodge  " << "     Tent        " << "   RV          "
		<< "Con Camp    " << "Back County  " << "Misc Camp   " << "T Overnight  " << endl;
	cout << "January     ";
	for (int j = 0; j < Visitor_Size; j++)
	{
		cout << setw(6) << visitors[0][j] << "        ";
	}
	cout << endl;
	cout << "February    ";
	for (int j = 0; j < Visitor_Size; j++)
	{
		cout << setw(6) << visitors[1][j] << "        ";
	}
	cout << endl;
	cout << "March       ";
	for (int j = 0; j < Visitor_Size; j++)
	{
		cout << setw(6) << visitors[2][j] << "        ";
	}
	cout << endl;
	cout << "April       ";
	for (int j = 0; j < Visitor_Size; j++)
	{
		cout << setw(6) << visitors[3][j] << "        ";
	}
	cout << endl;
	cout << "May         ";
	for (int j = 0; j < Visitor_Size; j++)
	{
		cout << setw(6) << visitors[4][j] << "        ";
	}
	cout << endl;
	cout << "June        ";
	for (int j = 0; j < Visitor_Size; j++)
	{
		cout << setw(6) << visitors[5][j] << "        ";
	}
	cout << endl;
	cout << "July        ";
	for (int j = 0; j < Visitor_Size; j++)
	{
		cout << setw(6) << visitors[6][j] << "        ";
	}
	cout << endl;
	cout << "August      ";
	for (int j = 0; j < Visitor_Size; j++)
	{
		cout << setw(6) << visitors[7][j] << "        ";
	}
	cout << endl;
	cout << "September   ";
	for (int j = 0; j < Visitor_Size; j++)
	{
		cout << setw(6) << visitors[8][j] << "        ";
	}
	cout << endl;
	cout << "October     ";
	for (int j = 0; j < Visitor_Size; j++)
	{
		cout << setw(6) << visitors[9][j] << "        ";
	}
	cout << endl;
	cout << "November    ";
	for (int j = 0; j < Visitor_Size; j++)
	{
		cout << setw(6) << visitors[10][j] << "        ";
	}
	cout << endl;
	cout << "December    ";
	for (int j = 0; j < Visitor_Size; j++)
	{
		cout << setw(6) << visitors[11][j] << "        ";
	}
	cout << endl;
}

//Total and display the sum of recreation and non-recreation visitors
void DisplayRec_NonRec()
{
	int total = 0;
	int grandTotal = 0;
	int firstTwoCol = 2;

	// Sum the array elements.

	for (int col = 0; col < firstTwoCol; col++)
	{
		//reset accumulator
		for (int row = 0; row < Months_Size; row++)
			total += visitors[row][col];
	}
	// Display the sum.
	cout << endl;
	cout << "The total recreational and non-recreational is: " << total << endl;
	cout << endl;
	return;
}

//Total and display the number of tent and RV campers
void DisplayTent_RV()
{
	int total = 0;
	int grandTotal = 0;
	int col3_4 = 5;

	cout << "Total Tent and RV campers by Month " << endl;
	cout << "January     ";
	for (int j = 3; j < col3_4; j++)
	{
		total += visitors[0][j];
	}
	cout << setw(6) << total;
	cout << endl; total = 0;
	cout << "February    ";
	for (int j = 3; j < col3_4; j++)
	{
		total += visitors[1][j];
	}
	cout << setw(6) << total;
	cout << endl; total = 0;
	cout << "March       ";
	for (int j = 3; j < col3_4; j++)
	{
		total += visitors[2][j];
	}
	cout << setw(6) << total;
	cout << endl; total = 0;
	cout << "April       ";
	for (int j = 3; j < col3_4; j++)
	{
		total += visitors[3][j];
	}
	cout << setw(6) << total;
	cout << endl; total = 0;
	cout << "May         ";
	for (int j = 3; j < col3_4; j++)
	{
		total += visitors[4][j];
	}
	cout << setw(6) << total;
	cout << endl; total = 0;
	cout << "June        ";
	for (int j = 3; j < col3_4; j++)
	{
		total += visitors[5][j];
	}
	cout << setw(6) << total;
	cout << endl; total = 0;
	cout << "July        ";
	for (int j = 3; j < col3_4; j++)
	{
		total += visitors[6][j];
	}
	cout << setw(6) << total;
	cout << endl; total = 0;
	cout << "August      ";
	for (int j = 3; j < col3_4; j++)
	{
		total += visitors[7][j];	
	}
	cout << setw(6) << total;
	cout << endl; total = 0;
	cout << "September   ";
	for (int j = 3; j < col3_4; j++)
	{
		total += visitors[8][j];
	}
	cout << setw(6) << total;
	cout << endl; total = 0;
	cout << "October     ";
	for (int j = 3; j < col3_4; j++)
	{
		total += visitors[9][j];
	}
	cout << setw(6) << total;
	cout << endl; total = 0;
	cout << "November    ";
	for (int j = 3; j < col3_4; j++)
	{
		total += visitors[10][j];
	}
	cout << setw(6) << total;
	cout << endl; total = 0;
	cout << "December    ";
	for (int j = 3; j < col3_4; j++)
	{
		total += visitors[11][j];
		
	}
	cout << setw(6) << total;
	cout << endl;
	cout << endl; 
	return;
}

//Prompt the user to enter a month and display the number of recreational visitors for that month
void DisplayCertainMonth()
{
	char menuSelect = '0';
	
	cout << "Please enter the month you'd like to see recreational visitors for." << endl;
	cout << "Jan = 1, Feb = 2, etc." << endl;
	cout << "Month Selection: ";
	cin >> menuSelect; 
	switch (menuSelect)
	{
	case '1': //January
		cout << "Recreational visitors for January : " << visitors[0][0] << endl;
		break;
	case '2': //February
		cout << "Recreational visitors for February : " << visitors[1][0] << endl;
		break;
	case '3': //March
		cout << "Recreational visitors for March : " << visitors[2][0] << endl;
		break;
	case '4': //April
		cout << "Recreational visitors for April : " << visitors[3][0] << endl;
		break;
	case '5': //May
		cout << "Recreational visitors for May : " << visitors[4][0] << endl;
		break;
	case '6': //June
		cout << "Recreational visitors for June : " << visitors[5][0] << endl;
		break;
	case '7': //July
		cout << "Recreational visitors for July : " << visitors[6][0] << endl;
		break;
	case '8': //August
		cout << "Recreational visitors for August : " << visitors[7][0] << endl;
		break;
	case '9': //September
		cout << "Recreational visitors for September : " << visitors[8][0] << endl;
		break;
	case '10': //October
		cout << "Recreational visitors for October : " << visitors[9][0] << endl;
		break;
	case '11': //November
		cout << "Recreational visitors for November : " << visitors[10][0] << endl;
		break;
	case '12': //December
		cout << "Recreational visitors for December : " << visitors[11][0] << endl;
		break;
	case '00': //Exit
		break;
	}
	return;

}

//Main - menu
int main()
{
		//Variables
	char menuSelect = '0';
	int count = 0;
		// Title
	cout << "Visitor Information - Acadia National Park" << endl;
	cout << endl;

	//populate visitor data
	ifstream inputFile; // Input file stream object
	inputFile.open("AcadiaVisitors.txt");//open the file
	for (int i = 0; i < Months_Size; i++)
	{
		for (int j = 0; j < Visitor_Size; j++)
		{inputFile >> visitors[i][j];}
	}
	inputFile.close();
	
	//Menu
	while (menuSelect != '4')
	{
		cout << "Enter 1 to Display all of the Vistor Information" << endl;
		cout << "Enter 2 to Display the Total Number of Recreational and Non-Recreational Visitors" << endl;
		cout << "Enter 3 to Display the Total Number of Tent and RV campers by Month" << endl;
		cout << "Enter 4 to Display the Number of Recreational Visitors for a Certain Month" << endl;
		cout << "Enter Any Other Number to Exit" << endl;
		cout << "Menu Selection: ";
		cin >> menuSelect;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		switch (menuSelect)
		{
		case '1':
			DisplayData();
			break;
		case '2':
			DisplayRec_NonRec();
			break;
		case '3':
			DisplayTent_RV();
			break;
		case '4':
			DisplayCertainMonth();
		case '5':
			system("pause");
			return 0;
		}
	}
}




