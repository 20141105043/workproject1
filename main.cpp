//
//  main.cpp
//  workproject1
//
//  Created by 20141105043dj on 15/11/18.
//  Copyright (c) 2015年 20141105043dj. All rights reserved.
//

#include <iostream>
using namespace std;
class max
{
public:
    void input();
    void compare();
    int display();
private:
    int max_temp;
    int a[5];
};
void max::input()
{
    for(int i=0;i<5;i++)
        cin>>a[i];
}
void max::compare()
{
    int max_temp;
    max_temp=a[0];
    for(int i=1;i<5;i++)
    {
        if(a[i]>max_temp)
        max_temp=a[i];
    }
}
int max::display()
{
    cout<<"max="<<max_temp<<endl;
    return 0;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    input();
    compare();
    display();
    return 0;
}
