#ifndef MAIN_HPP
#define MAIN_HPP

// Find the sub string in the original string

#include <iostream>
#include <cstring>
using namespace std;

int finduserstring(char[], int, char[], int);

int finduserstring(char cstr[], int cstrlen, char userstr[], int userlen)
{
    // TODO: scan cstr for the first occurrence of userstr, return its starting
    //       index or -1 if not found.
    int j, pos = -1;
    for (int i = 0; i < cstrlen - userlen + 1; i++)
    {
        for (j = 0; j < userlen; j++)
        {
            if (cstr[i + j] != userstr[j])
                break;
        }
        if (j == userlen)
        {
            pos = i;
            return pos;
        }
    }
    return pos;
}

#endif
