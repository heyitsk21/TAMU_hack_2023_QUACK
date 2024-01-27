#include <iostream>
#include <cstdlib> // for rand() function
#include <ctime>   // for time() function

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Constants
    const int correctAnswer = 49;

    // Display the question and options
    cout << "What is the result of 7 * 7?" << endl;
    cout << "a) " << correctAnswer - 5 << endl;
    cout << "b) " << correctAnswer << endl;
    cout << "c) " << correctAnswer + 5 << endl;
    cout << "d) " << correctAnswer * 2 << endl;

    // Get user's answer
    char userAnswer;
    cout << "Enter your choice (a, b, c, or d): ";
    cin >> userAnswer;

    // Check if the user's answer is correct
    if (userAnswer == 'b' || userAnswer == 'B') {
        cout << "Congratulations! That's the correct answer." << endl;
    } else {
        cout << "Sorry, that's incorrect. The correct answer is " << correctAnswer << "." << endl;
    }

    return 0;
}