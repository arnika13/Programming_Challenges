#include<iostream>
#include<string>
using namespace std;

string rockpaperscissor(string play1,string play2)
{
	if (play1 == play2)
	{
		return "tie";
	}
	// if player 1 played rock and player 2 played paper or scissor 
	if (play1 == "rock")
	{
		if (play2 == "paper")
		{
			return "paper";
		}
		else if (play2 == "scissor")
		{
			return "rock";
		}
	}
	//player 1 played paper and player 2 played rock or scissor
	if (play1 == "paper")
	{
		if (play2 == "rock")
		{
			return "paper";
		}
		else if (play2 == "scissor")
		{
			return "scissor";
		}
	}
	// player 1 played scissor and player 2 played rock or paper
	if (play1 == "scissor")
	{
		if (play2 == "rock")
		{
			return "rock";
		}
		else if (play2 == "paper")
		{
			return "scissor";
		}
	}

}

int main()
{

	string result=rockpaperscissor("paper", "scissor");
	cout << result<<endl;

}