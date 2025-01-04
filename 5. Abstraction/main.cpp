#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// ABSTRACTION means hiding the implementation of the class and at interface side, we only show the things we want to show. 


int main()
{  
    // Now,to create a vector container, I will simply add the header file <vector> and I will not get to know the implementation of how does the vector container is formed;
    vector<int>v = {4,3,2,1};

    // Now, to sort the vector, I will use inbuilt sort function which I will call by using it's header file <algorithm> but I will not be able to see the implementation like what kind of sorting technique it has used;
    sort(v.begin(),v.end());

    for(int &i:v)
    {
        cout<<i<<" ";
    }

    return 0;
}