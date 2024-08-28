//Name:prabhat
//PRN:23070123040
//Aim:Implemention of Arrays and Strings to print the Maximum and Minimum Number in Array

#include <iostream>
using namespace std;

int main() {
    int marks[5] = {10, 50, 60, 41, 2};
    int max = marks[0];
    int min = marks[0];

    for (int i = 1; i < 5; i++) 
    {
        if (max < marks[i])
        {
            max = marks[i];
        }
    }

    for (int j = 1; j < 5; j++) 
    {
        if (min > marks[j]) 
        {
            min = marks[j];
        }
    }

    cout << "Maximum is " << max << endl;
    cout << "Minimum is " << min << endl;

    return 0;
}


/*Output:
Maximum is 60
Minimum is 2*/