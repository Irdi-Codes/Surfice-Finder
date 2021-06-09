#include <iostream>
using namespace std;

int katror(int a)
{
    return a * a;
}

int drejtkendesh(int a, int b)
{
    return a * b;
}

int trekendesh(int a, int h)
{
    return (a*h)/2;
}

int rreth(int r)
{
    return 3.14*r*r;
}
int main()
{
	start: 
    cout << "Zdjidni trupin qe dont t'i gjeni siperfaqen':" << endl;
    cout << "1 = Katror ; 2 = Drejtkendesh ; 3 = Trekendesh ; 4 = Rreth " << endl;
    int zgjedhja;
    cin >> zgjedhja;

    if(zgjedhja == 1)
    {
        cout << "Jepni vleren e brinjeve:" << endl;
        int a;
        cin >> a;

        cout << "Siperfaqja e katrorit eshte: " << katror(a) << endl;
    }else if(zgjedhja == 2)
    {
        cout << "Shkruani vleren e brinjeve:" << endl;
        int a;
        	cin >> a;
        int b;
        	cin >> b;

        cout << "Siperfaqja e dejtkendeshit eshte: " << drejtkendesh(a,b) << endl;
    }else if(zgjedhja == 3)
    {
        cout << "Shkruani vleren e brinjeve" << endl;
        int a;
        	cin >> a;
        int b;
        	cin >> b;

        cout << "Siperfaqja e trekendeshit eshte: " << trekendesh(a,b) << endl;
    }else if(zgjedhja == 4)
    {
        cout << "Jepni vleren e rrezes: " << endl;
        int r;
        	cin >> r;

        cout << "Siperfaqja e rrethit eshte: " << rreth(r) << endl;
    }else
    {
        cout << "Ju lutem mos shkruani gje tjeter pervec numrave 1-4." << endl;
        goto start;
    }
}
