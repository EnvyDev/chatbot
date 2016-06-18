//Premade includes
#include <iostream>
#include <stdlib.h>
#include <string>
//Includes that I made
#include "includes/vars.h"
#include "includes/input.h"
#include "includes/interact.h"
using namespace std;
static Input checker;
static FindQuestion FQ;
const bool debug = true;
int main()
{
	checks[0].question = "hello";
	checks[0].answer = "Correct 1";
	checks[0].totalSim = 1;
	checks[0].simularQuestions[0] = "Correct 2";
	checks[1].question = "where_is_the_united_states";
	checks[1].totalSim = 1;
	checks[1].simularQuestions[0] = "where_is_the_us";
	checks[1].answer = "In North America";
	while (true) //Because I dont want it to end
	{
		cout << "\n\n\nINPUT: ";
		string x = " "; //Just to make sure
		cin >> x; // Take user input
		if (checker.valid(x) == true) //Checks if valid
		{
			//int questionNum = FQ.QNum(x);
			cout << "\n\nOUTPUT:\n";
			if (FQ.QNum(x) != -1)
			{
				if (debug == true)
				{
					cout << "-Valid Input-\n";
					cout << "Qustion number " << FQ.QNum(x) << ": ";
				}
				cout << checks[FQ.QNum(x)].answer << endl;
			} else
			{
				cout << "No answer for this question\n";
				cout << "\nWould you like to answer the question (Y/n)? ";
				char ans = 'n';
				if (ans == 'Y')
				{
					string answer, question;
					cout << "\nQuestion: ";
					cin >> question;
					cout << "\nAnswer: ";
					cin >> answer;
					FQ.addQuestion(question, answer);
				}
				
			}
		}
		else
		{
			cout << "\n\nOUTPUT:\n";
			cout << "-Invalid Input-\n";
		}
		system("PAUSE"); //So you can see output
		system("CLS"); //Clears the screen
	}
}
