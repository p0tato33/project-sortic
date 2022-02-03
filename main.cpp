#include "sortic.h"

int main(){
    system("cls");
    itc_SetColor(11,1);
    vector <int> a, b;
    string m = "";
    getline(cin, m);
    while (m != "!")
    {
        a.push_back(ToInt(m));
        getline(cin, m);
    }
    itc_SetColor(3, 1);
    getline(cin, m);
    while(m != "*")
    {
    if (m == "sa")
        sa(a);
    else if (m == "sb")
        sb(b);
    else if (m == "pa")
        pa(a, b);
    else if (m == "pb")
        pb(a, b);
    else if (m == "ra")
        ra(a);
    else if (m == "rb")
        rb(b);
    else if (m == "rr")
        rr(a, b);
    else if (m == "rra")
        rra(a);
    else if (m == "rrb")
        rrb(b);
    else if (m == "rrr")
        rrr(a, b);
    else
        cout << "unkwown command"<<endl;
    cout<<"a: ";
    vivod(a);
    cout<<endl<<"b: ";
    vivod(b);
    cout<<endl;
    getline(cin, m);
    }
    itc_SetColor(12, 1);
    cout<<verdict(a);
    return 0;
}

