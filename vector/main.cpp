#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    for(int i=0; i<3; i++){
        vec.push_back(i);
    }
    vector<int>::iterator it;
    for(it=vec.begin(); it<vec.end(); it++){
        printf("%d\n", *it);
    }

    vec.erase(vec.begin());
    for(it=vec.begin(); it<vec.end(); it++){
        printf("%d\n", *it);
    }
    printf("%d\n", vec.size());
    return 0;
}
