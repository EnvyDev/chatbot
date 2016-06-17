#include<iostream>

using namespace std;


const int numStruct = 3;

class FindQuestion
{
	public:
	int QNum(string question)
	{
		std::transform(question.begin(), question.end(), question.begin(), to_lower());

		for (int x = 0; x<=totalQuest -1; x++)
		{
			if (question == checks[x].question)
			{
				return x;
			}
		}
		for(int x = 0; x<=totalQuest-1; x++)
		{
			for (int y = 0; y<=10; y++)
			{
				if (question == checks[x].simularQuestions[y])
				{
					return x;
				}
			}
			
		}
		return -1;
	}
	void addQuestion(string question, string answer)
	{
		checks[totalQuest].question = question;
		checks[totalQuest].answer = answer;
		totalQuest++;
	}
};