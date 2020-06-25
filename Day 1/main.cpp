#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int i1;
    cin >> i1;

    double d1;
    cin >> d1;

    string s1;
    cin.ignore();
    getline(cin, s1);

    int iresult = i + i1;
    double dresult = d + d1;

    cout << iresult << endl;
    cout << fixed << setprecision(1) << dresult << endl;
    cout << s + s1 << endl;

    // Declare second integer, double, and String variables.

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.

    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
