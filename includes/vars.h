#include<iostream>

using namespace std;



//Data Structs
struct Check
{
	//questions
	string question; //Primary question
	string simalarQuestions[10]; //Secondary
	//answer
	int totalSim;
	string answer;
	//ratings
	float primaryAnswerS;
	float secondaryAnswerS[10];
};

//Const vars
const int listSize = 2; //The size of the list below

//Static vars
static string wordX = "false"; // Single word to check
static string WordList[listSize] = { "Swear" }; //Words that arent allowed

//classes and structs defined
static int totalQuest = 2;
static Check checks[60];

//Functional Sturcts
struct to_lower {
  int operator() ( int ch )
  {
    return std::tolower ( ch );
  }
};
