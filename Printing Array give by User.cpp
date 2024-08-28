//Name:prabhat
//PRN:23070123040
//Aim:Implemention of Arrays and Strings to print the given Array by the User

#include <iostream>
using namespace std;
int main() { 
int n;

cout << "Enter the size of array: ";
cin >> n;
int x[n];
cout << "Enter the numbers:";
int a = 0;

   while (a < n)
   {cin >> x[a];
     a= a+1;
   }
cout <<"The output is:";
cout <<endl;
   for(int i = 0;i<n;i++)
   {cout << x[i];
    cout<< endl;
   }

    return 0;
}


/*Output:
Enter the size of array: 5
Enter the numbers:1
2
3
4
5
The output is:
1
2
3
4
5
*/