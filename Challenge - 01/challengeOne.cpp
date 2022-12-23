#include <iostream>
#include <vector>

using namespace std;

// inputAndVal function get the user input as an int and validate the number to be greater than 0
int inputAndVal(){
    int userIn;

    cout << "Enter a positive number :";

    while (true){
        cin >> userIn;  // Getting user input

        if (userIn <=0)  // If user input is less than or equal to 0
        {
            cout << "Please enter a positive Number :";
            continue;
        }
        else{
            break;
        }
    }
    return userIn;
}


// This facsVec vector returning function check all the positive factors of the number user entered
vector<int> facsVec(int num){
    vector<int> facs;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0){
            facs.push_back(i);  // pushing factors to the vector
        }
    }
    return facs;
}

int main() {
    vector<int> factors;

    int number = inputAndVal();

    //functionOne(number);
    factors = facsVec(number);

    for (int i: factors)  // Displaying gathered factors of the user given number
    {
        cout << i << " ";
    }
    return 0;
}
