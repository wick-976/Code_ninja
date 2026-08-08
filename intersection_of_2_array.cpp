//optimal solution
//brute force for the intersection of two array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr1={1,1,3,3,7,8,8};
    vector<int>arr2={1,3,4,7,8};
    map<int,int>answer;
    vector<int>answer_push;
    for(int i=0;i<arr1.size();i++)
    {
        answer[arr1[i]]++;
    }
    
    for(int i=0;i<arr2.size();i++)
    {
        if(answer[arr2[i]]>=1)
        {
            answer_push.push_back(arr2[i]);
            answer[arr2[i]]--;
        }
    }
    
    for(int x:answer_push)
    {
        cout<<x<<" ";
    }
}


//optimal two pointer solution
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int size1, vector<int> &arr2, int size2)

{
	vector<int>answer;

	int i=0;
	int z=0;

	while(i<size1 && z<size2)
	{
		if(arr1[i]==arr2[z])
		{
			answer.push_back(arr1[i]);
			i++;
			z++;
		}
		else if(arr1[i]<arr2[z])
		{
			i++;
		}
		else{
			z++;
		}
	}

	return answer;
}