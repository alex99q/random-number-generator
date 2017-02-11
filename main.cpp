#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string r = "r";

    srand(time(0));

    while (r == "r"){

    cout<<"Press r for a random number from 1 to 100!"<<endl;

    cin>>r;

    if (r == "r"){
      cout << endl << endl << "THATS YOUR RANDOM NUMBER:" << 1+(rand()%100) <<endl <<endl<<endl;
    }

}


    return 0;
}
