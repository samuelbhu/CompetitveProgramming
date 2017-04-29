//
//  main.cpp
//  CodeForces102
//
//  Created by Samuel Bhushan on 9/10/15.
//  Copyright (c) 2015 Samuel Bhushan. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int det(int a[2],int b[2],int c[2]);
int main(int argc, const char * argv[]) {
    int a[2] = {-2,1};
    int b[2] = {0,-2};
    int c[2] = {2,1};
    int o[2]={0,-11};
    int abc;
    int obc;
    int aoc;
    int abo;
    int res;
    string line;
    
    fstream fs;
    
    fs.open("p102_triangles.txt");
    getline(fs,line);
    
    
    
    // Determinant ABC
    abc = det(a,b,c);
    obc = det(o,b,c);
    aoc = det(a,o,c);
    abo = det(a,b,o);
    res = 0;
    if(abc < 0)
    {
        if(obc < 0 && aoc < 0 && abo < 0)
            res = 1;
    }
    else
    {
        if(obc > 0 && aoc > 0 && abo > 0)
            res = 1;
    }
    
    cout << "abc" << abc << endl;
    cout << "obc" << obc << endl;
    cout << "aoc" << aoc << endl;
    cout << "abo" << abo << endl;
    cout << "result" << res;
    
    
    
    return 0;
}

int det(int a[2],int b[2],int c[2])
{
    return (a[0] - c[0] ) * (b[1]-a[1]) - (a[0]-b[0]) * (c[1]-a[1]);
}
