#include<iostream>

using namespace std;

const int numStruct = 3;

class FindQuestion
{
	public:
	int QNumb(string question1)
	{
		std::transform(question1.begin(), question1.end(), question1.begin(), to_lower());

		for (int x = 0; x<=totalQuest-1; x++)
		{
			if (question1 == checks[x].question)
			{
				return x;
			}
		}
		for(int x = 0; x<=totalQuest-1; x++)
		{
			for (int y = 0; y<=checks[x].totalSim-1; y++)
			{
				if (question1 == checks[x].simalarQuestions[y])
				{
					return x;
				}
			}
			
		}
		return -1;
	}
	void addQuestion(string question, string answer1)
	{
		checks[totalQuest].question = question;
		checks[totalQuest].answer = answer1;
		totalQuest++;
	}
};
