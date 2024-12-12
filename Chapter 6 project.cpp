// Thomas Cubstead
// 12/11/24
// chapter_6_Project
// 4_Star_Search
// this program takes an average of judge scores after dropping highest and lowest to determine the final score


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double finalScoreCalc(vector<double>& scores) {
	sort(scores.begin(), scores.end());

	scores.erase(scores.begin());
	scores.pop_back();

	double sum = 0;
	for (double score : scores) {
		sum += score;
	}
	return sum / scores.size();
}

int main() {
	vector<double> scores(5);

	cout << "Enter the scores of the 5 judges (0 to 10): " << endl;

	for (int i = 0; i < 5; i++) {
		bool validScore = false;
		cout << "judge " << i + 1 << ": ";
		cin >> scores[i];
		if (scores[i] >= 0 && scores[i] <= 10) {
			validScore = true;
		}else{
			cout << "score is invalid make sure the score is between 0 and 10" << endl;
			i--;
		}
	}
	double scoreTotal = finalScoreCalc(scores);

	cout << "The score's final total is: " << scoreTotal << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
