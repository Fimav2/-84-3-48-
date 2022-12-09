#include<iostream>
#include<string>
#include"streasy.h"

using namespace std;

string itc_cmp_str(string n, string m, int u) //Number 11
{
    string o;
    int i, l, d;
    d = itc_len(n);
    if (m[0] == '\0')
        return n;
    for (i = 0; i < u; i++)
        o = o + n[i];
    for (l = 0; m[l] != '\0'; l++)
        if (i < d)
        {
           o = o + m[l];
        i++;
        }
    if (i <= d)
        for (i; n[i] !='\0'; i++)
            o = o + n[i];
    return o;
}

//int itc_find_str(string str1, string str2)
