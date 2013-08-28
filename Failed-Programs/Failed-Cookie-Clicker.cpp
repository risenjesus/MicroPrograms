#include <iostream>

using namespace std;

    int points;
    bool start;
    string input;
    int clickercounter;
    bool startclickercounter;
int main()
{
    start = true;
    cout << "-------------------------------------" << endl;
    cout << "| Hello! Welcome to Cookie Clicker! |" << endl;
    cout << "-------------------------------------" << endl;
    // -- Controls
    cout << "|------------------------------------|" << endl;
    cout << "|-        Available Options:        -|" << endl;
    cout << "|------------------------------------|" << endl;
    cout << "| Type 'P' to see your points.       |" << endl;
    cout << "| Type 'buy Clicker' to buy the clicker|" << endl;
    cout << "|------------------------------------|" << endl;
    while (start == true){
        cin >> input;
        if(input == "P"){
            cout << "Your points are: " << points << endl;
        }
        if(input == "buy Clicker"){
            clickercounter = true;
            startclickercounter = true;
            if (clickercounter == true){
               while(clickercounter != 5){
               points = points +1;
                clickercounter = 0;

               }
            while(startclickercounter == true){
                clickercounter = clickercounter + 1;
            }
            }

        }
        if(input == ""){

        }
        if(input == ""){

        }
    }
    return 0;
}
