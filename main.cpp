#include <iostream>

using namespace std;

class tudor{
    public:
        bool vorbeste = true;

};

class sorana{
    public:
        void urla(string c) {
            cout<<c;
        }

        void scuipa(int x) {
                if (x < 50 && x >= 0) cout<<"Sorana a ratat scuipatura"<<'\n';
                if (x >= 50 && x < 100) cout<<"Sorana s-a scuipat singura"<<'\n';
                if (x >= 100) cout<<"Sorana s-a scuipat singura in ochi"<<'\n';
        }
};

int x;
string c = "Da ce treaba ai tu ?";
tudor tudor;
sorana sorana;

int main()
{
    while(tudor.vorbeste) {
        cin>>x;
        sorana.scuipa(x);
    }

    return 0;
}
