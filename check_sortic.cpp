#include "sortic.h"

void check_func(string str, vector <int> &a, vector <int> &b){
    if (str == "sa")
        sa(a);
    else if (str == "sb")
        sb(b);
    else if (str == "pa")
        pa(a, b);
    else if (str == "pb")
        pb(a, b);
    else if (str == "ra")
        ra(a);
    else if (str == "rb")
        rb(b);
    else if (str == "rr")
        rr(a, b);
    else if (str == "rra")
        rra(a);
    else if (str == "rrb")
        rrb(b);
    else if (str == "rrr")
        rrr(a, b);
}

string verdict(vector <int> &a){
    string message = "OK";
    for(int i = 1; i < a.size(); i++){
        if(a[i] < a[i - 1])
            message = "KO";
    }
    return message;
}
