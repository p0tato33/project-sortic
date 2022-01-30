#include "sortic.h"

void ra(vector<int>& a)
{
    int swap, lenght = a.size(), first = a[0];
    if (lenght != 0 && lenght != 1)
    {
        for (int i = 0;i < a.size() - 1;i++)
        {
            a[i] = a[i + 1];
        }
        a[lenght - 1] = first;
    }
}
void rb(vector<int>& b)
{
    int swap, lenght = a.size(), first = b[0];
    if (lenght != 0 && lenght != 1)
    {
        for (int i = 0;i < b.size() - 1;i++)
        {
            b[i] = b[i + 1];
        }
        b[lenght - 1] = first;
    }
}
void rr(vector<int>& a, vector<int>& b)
{
    ra(a);
    rb(b);
}
