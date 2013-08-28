// I quit making it because I got bored. lol I lost interest quick. 

#include <iostream>
#include <time.h>
using namespace std;

void wait();

int main()
{
    string input;
        
    cout << "~~Grown Up~~" << endl;
    cout << "|| Grown up is a game where you have pets and they grow up over time. The pets when they're grown up they have special 'powers'. ||" << endl;
    cout << "Available Pets:" << endl;
    cout << "1. Dragon 2. Cat 3. Dog 4. Cookie Monster 5. superoverlordswag" << endl;
    cout << "Please enter the number of the pet you would like." << endl;
    cin >> input;
        if(input == "1"){
            // dragon
            cout << "Ahh, you choose the dragon I see?" << endl;
            
        }
         if(input == "2"){
            // cat
            
            
        }
         if(input == "3"){
            //dog
            
            
        }
        if(input == "4"){
            //cookie monster
            
            
        }
        if(input == "5"){
            //superoverlordswag
            
            
        }
        
        
        
        
        
    return 0;
}

void wait(unsigned timeout){
  timeout += std::clock();
  while(std::clock() < timeout) continue;
}
