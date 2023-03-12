#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
    Даны две строки строчных латинских символов: строка J и строка S. 
    Символы, входящие в строку J, — «драгоценности», входящие в строку S — «камни». 
    Нужно определить, какое количество символов из S одновременно 
    являются «драгоценностями». 
    Проще говоря, нужно проверить, какое количество символов из S входит в J.
    */
    
    string j,s;
    cin >> j >> s;
    int res=0;
       
    for(int i=0; i<s.length(); i++)
    {
    	for(int ii=0; ii<j.length(); ii++)
    	    if(s[i] == j[ii]) res++;
    }
    cout << res;
    
    return 0;

}