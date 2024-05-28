#include <iostream>
using namespace std;

class seseorang
{
public:
    // pure virtual function
    virtual void pesan() = 0;

    /*virtual void pesan()
     {
     cout << "pesan dari seseorang" << endl;
     }*/

};

class joko : public seseorang
{
public:
    // deklarasi
    void pesan()
    {
        //implementasi
        cout << "Pesan dari joko " << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}


