#include <iostream>
using namespace std;

class CanGoWrong{
public:
    CanGoWrong(){
        char *pMemory1 = new char[99999999999999999];
        char *pMemory2 = new char[99999999999999999];
        char *pMemory3 = new char[99999999999999999];
        char *pMemory4 = new char[99999999999999999];
        delete [] pMemory1;
        delete [] pMemory2;
        delete [] pMemory3;
        delete [] pMemory4; 
    }
};

int main() {
    try{
        CanGoWrong wrong;
    } catch(bad_alloc &e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    cout << "Still running." << endl;

    return 0;
}