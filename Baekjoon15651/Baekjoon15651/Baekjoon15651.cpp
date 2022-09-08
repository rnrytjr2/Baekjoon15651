#include <iostream>
#include <string>
using namespace std;
void sequence(int N, int M, string answer);
int main()
{
	int N, M;
	cin >> N >> M;
	sequence(N, M, "");
}
void sequence(int N, int M, string answer)
{
	if (answer.size() == M + M - 1)
	{
		cout << answer << "\n";
	}
	else
	{
		for (int i = 1; i < N + 1; i++)
		{

			string answertemp = answer;
			if (answer.size() != 0)
			{
				answertemp += " ";
			}
			sequence(N, M, answertemp + to_string(i));
		}
	}
}