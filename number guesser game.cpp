#include <iostream>
#include <random>
#include <cstdlib>
using namespace std;

int main()
{
    random_device rd;
    mt19937 generator(rd());

    uniform_int_distribution<int> distribution(1, 10);

    int rannum = distribution(generator);

    while (true){

        int number;
        cout << "Guess a number mate: ";
        cin >> number;

        if (number == rannum) {
            system("cls");
            cout << "You did it." << endl;
            rannum = distribution(generator);
        } else {
            system("cls");
            cout << "try again lol." << endl;
        }
    }

    return 0;
}