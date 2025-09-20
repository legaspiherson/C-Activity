#include <iostream>

using namespace std;
int main()
{
    bool question;

   cout << "Thank you for listening." << endl;

    cout << "Any Questions? (Choose 1 for Yes or 0 for No): ";
    
   cin >> question;

    if (question) {
    cout << "Raise hand; Ask question." << endl;
    }
	else {
        cout << "Prepare for Module Exercise." << endl;
    }

    return 0;
}
