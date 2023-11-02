/* Sorting Vectors of Unique Elements by the Elements of Another Vector that are New Index Values */

#include <iostream>
#include <algorithm>
#include <conio.h>
#include <vector>
using namespace std;

typedef pair<array<int,2>, int> pNode;


int main(){

	// This is the "number" Vector with Unique Elements which will Be Sorted by Using the "index" Vector
    vector<string> number;
    number.push_back("four");  // number[0] = "four"
    number.push_back("one");   // number[1] = "one"
    number.push_back("seven"); // number[2] = "seven"
    number.push_back("five");  // number[3] = "five"
    number.push_back("eight"); // number[4] = "eight"
    number.push_back("three"); // number[5] = "three"
    number.push_back("two");   // number[6] = "two"
    number.push_back("nine");  // number[7] = "nine"
    number.push_back("zero");  // number[8] = "zero"
    number.push_back("six");   // number[9] = "six"


	// This is the "index" Vector with Unique Index Values which will Be Used to Sort the "number Vector
    vector<int> index;
    index.push_back(8); // new number[0] will be the old number[8] = "zero"
    index.push_back(1); // new number[1] will be the old number[1] = "one"
    index.push_back(6); // new number[2] will be the old number[6] = "two"
    index.push_back(5); // new number[3] will be the old number[5] = "three"
    index.push_back(0); // new number[4] will be the old number[0] = "four"
    index.push_back(3); // new number[5] will be the old number[3] = "five"
    index.push_back(9); // new number[6] will be the old number[9] = "six"
    index.push_back(2); // new number[7] will be the old number[2] = "seven"
    index.push_back(4); // new number[8] will be the old number[4] = "eight"
    index.push_back(7); // new number[9] will be the old number[7] = "nine"


    cout << "Before Sorting <number> by <index> = {";
    for(int i=0; i<int(index.size()); i++){
        if(i==0)
            cout << index.at(i);
        else
            cout << ", " << index.at(i);
    }cout << "}:" << endl << endl;


    for(int i=0; i<int(number.size()); i++){
        cout << "number[" << i << "] = " << number.at(i) << endl;
    }


    ////////////////////////////////////////////////////////

    auto dist = [](vector<auto> vect, auto elem) {          // Lambda Function to Find Index of Elements in Vectors
        return distance(vect.begin(), find_if(vect.begin(), vect.end(), [&elem](auto item) {return item == elem; }));
    };

    sort(number.begin(),number.end(), [&dist, &index, number](string &a, string &b){
        // number is Used without (&) as It Gradually Changes

        int a1 = dist(number, a);       // a1 = Index of a in "number"
        int b1 = dist(number, b);       // b1 = Index of b in "number"

        int a2 = dist(index, a1);       // a2 = Index of a1 in "index"
        int b2 = dist(index, b1);       // b2 = Index of b1 in "index"

        return  a2 < b2;
    });

    ////////////////////////////////////////////////////////

	/*
	// The Method of Using Additional Temporary Vector to Copy the Elements
	vector<string> number_;
    for(int i=0; i<int(index.size()); i++){
        number_.push_back(number.at(index.at(i)));
    }
    number = number_;
    number_.clear();
	*/

    ////////////////////////////////////////////////////////


    cout << endl << endl << "After Sorting <number> by <index> = {";
    for(int i=0; i<int(index.size()); i++){
        if(i==0)
            cout << index.at(i);
        else
            cout << ", " << index.at(i);
    }cout << "}:" << endl << endl;


    for(int i=0; i<int(number.size());i++){
        cout << "number[" << index.at(i) << "] = " << number.at(i) << endl;
    }


cout << endl << endl << "-------------" << endl;
cout << "Press any key to continue . . . ";
getch();
return 0;
}
