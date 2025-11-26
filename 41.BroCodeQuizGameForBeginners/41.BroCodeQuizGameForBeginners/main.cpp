#include <iostream>
using namespace std;

int main() {


	string questions[] = { "1. What year was C++ created?: ",
						"2. Who invented C++?: ",
						"3. What is the predecessor of  C++?",
						"4. Is the Earth flat?"
	};

	string options[][4] =
	{{ "A. 1969", "B. 1975", "C. 1985", "D. 1989" },
	{ "A. Guido van Rossm", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg" },
	{ "A. C", "B. C+", "C. C--", "D.B++" },
	{ "A. yes","B. no","C. sometimes","D. What's Earth?" }
};

	char answerKey[] = { 'C','B','A','B' };

	int size = sizeof(questions) / sizeof(questions[0]);
	char guess;
	int score = 0;
	
	for (int i = 0; i < size; i++) {
		cout << "************************************\n";
		cout << questions[i] << '\n';
		cout << "************************************\n";

		for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
			cout << options[i][j] << '\n';
		}

		cin >> guess;
		guess = toupper(guess);

		if (guess == answerKey[i]) {
			cout << "Correct\n";
			score++;
		}
		else {
			cout << "Wrong\n";
			cout << "Answer: " << answerKey[i] << '\n';
		}

	}

	cout << "************************************\n";
	cout << "*              Results              *\n";
	cout << "************************************\n";

	cout << "Correct Guesses: " << score << '\n';
	cout << "# of questions: " << size << '\n';
	cout << "Score: " << (score /(double) size) * 100 << "%";

	return 0;
}