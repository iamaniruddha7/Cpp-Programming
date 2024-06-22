#include <iostream>
#include <string>

using namespace std;

int main()
{
    string questions[] = {"1. What does the sizeof operator return in C++?",
                          "2. Which of the following is not a valid C++ identifier",
                          "3. Which operator is used to allocate memory dynamically in C++?",
                          "4. Which of the following is not a primitive data type in C++",
                          "5. What does the cin object do in C++?"};

    string options[][5] = {{"A) Size of the variable in bytes", "B) Size of the variable in bits", "C) Size of the variable in characters", "D) Size of the variable in kilobytes"},
                           {"A) my_variable", "B) _myVariable", "C) 2myVariable", "D) MyVariable2"},
                           {"A) new", "B) malloc", "C) alloc", "D) create"},
                           {"A) int", "B) float", "C) string", "D) char"},
                           {"A) Prints output to the console", "B) Reads input from the console", "C) Allocates memory dynamically", "D) Performs arithmetic operations"}};

    char answerkey[] = {'A', 'C', 'A', 'C', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        cout << '\n';
        cout <<"****************************************************************\n";
        cout << questions[i] << '\n';
        cout <<"****************************************************************\n";

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            cout << options[i][j] << '\n';
        }
        std::cout << "Enter your answer (A, B, C, or D): ";
        cin >> guess;
        guess = toupper(guess);

        if (guess == answerkey[i])
        {
            cout << "CORRECT\n";
            score++;
        }
        else
        {
            cout << "WRONG!\n";
            cout << "Correct Answer: " << answerkey[i] << '\n';
        }
        
    }
    cout << "****************************************************************\n";
    cout << "*                            RESULTS                           *\n";
    cout << "****************************************************************\n";
    cout << "Correct Guesses: " << score << '\n';
    cout << "Number of Questions: " << size << '\n';
    cout << "Score: " << (score/(double)size)*100 << "%";

    return 0;
}