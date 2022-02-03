#include "sortic.h"

void sa(vector <int> &a)
{
	if (a.size() > 1)
	{
		int m;
		m = a[0];
		a[0] = a[1];
		a[1] = m;
	}
}

void sb(vector <int> &b)
{
	if (b.size() > 1)
	{
		int m;
		m = b[0];
		b[0] = b[1];
		b[1] = m;
	}
}

void ss(vector <int> &a, vector <int> &b)
{
	if (b.size() > 1)
	{
		sa(a);
		sb(b);
	}
}
void pa(vector <int> &a, vector <int> &b)
{
    if (b.size() > 0){
        a.push_back(b[0]);
        int k = 0;
        while (k < a.size() - 1){
            ra(a);
            k++;
        }
        vector <int> m;
        for (int k = 1; k < b.size(); k++)
            m.push_back( b[k]);
        b = m;
    }
}
void pb(vector <int> &a, vector <int> &b)
{
    if (a.size() > 0){
        b.push_back(a[0]);
        int k = 0;
        while (k < b.size() - 1){
            rb(b);
            k++;
        }
        vector <int> m;
        for (int k = 1; k < a.size(); k++)
            m.push_back( a[k]);
        a = m;
    }
}


void ra(vector <int> &a)
{
    int m = a[0], n;
    for (int k = a.size() - 1; k >= 0; k--)
    {
         n = a[k];
         a[k] = m;
         m = n;
    }
}
void rb(vector <int> &b)
{
    int m = b[0], n;
    for (int k = b.size() - 1; k >= 0; k--)
    {
         n = b[k];
         b[k] = m;
         m = n;
    }
}
void rr(vector <int> &a, vector <int> &b)
{
    ra(a);
    rb(b);
}


void vivod(vector <int> &a)
{
    for (int k = 0; k < a.size(); k++)
        cout<<a[k]<<" ";
}

void rra(vector <int>& a) {
    int lenght = a.size();
    vector<int> vc = a;
    if (lenght > 0) {
        for (int i = 1; i < lenght; i += 2) {
            a[i] = vc[i - 1];
            a[i + 1] = vc[i];
        }
        a[0] = vc[lenght - 1];
    }
}

void rrb(vector <int>& b) {
    int lenght = b.size();
    vector<int> vc = b;
    if (lenght > 0) {
        for (int i = 1; i < lenght; i += 2) {
            b[i] = vc[i - 1];
            b[i + 1] = vc[i];
        }
        b[0] = vc[lenght - 1];
    }
}

void rrr(vector <int>& a, vector <int>& b) {
    rra(a);
    rra(b);
}
long long ToInt(string str){
    long long num = 0;
    bool a = false;
    if (str[0] == '-')
        a = true;
    for(int i = 0; i < itc_len(str); i++){
        if(str[i] >= '0' and str[i] <= '9'){
            num = num * 10 + (str[i] - '0');
        }
    }
    if (a == true)
        num *= -1;
    return num;
}
long long itc_len(string str){
    long long i=0;
    while (str[i] != '\0'){
        i++;
    }
    return (i);
}
string verdict(vector <int> &a){

        string message = "OK";
        for(int i = 0; i < a.size(); i++)
            if (i < a.size() - 1)
                if(a[i] > a[i + 1]){
                    message = "KO";
                    return message;
                }
        return message;
}
void itc_SetColor(int text, int background)
{
   HANDLE handlep = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(handlep,  text);
}
