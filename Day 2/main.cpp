#include <bits/stdc++.h>

using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
    int result;
    double tip = double(meal_cost * tip_percent * .01);
    double tax = double(meal_cost * tax_percent * .01);

    result = round(meal_cost + tip + tax);
    cout << result << endl;

}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
