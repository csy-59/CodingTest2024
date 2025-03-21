#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    answer.push_back(arr[0]);
    for(int i = 1, size = arr.size(); i < size; ++i)
    {
        if(answer[answer.size() - 1] == arr[i])
            continue;
        
        answer.push_back(arr[i]);
    }

    return answer;
}