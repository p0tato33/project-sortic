#include "sortic.h"

sa(vector <int> &a)
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
