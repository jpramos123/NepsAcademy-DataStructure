#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	vector<int> queue;
	int n,m;
	cin >> n;
	//int v[n];
	int input;

	for(int i = 0; i < n; i++){
	  cin>>input;
	  queue.push_back(input);
	}
	
	cin >> m;
	
	for(int i = 0; i < m; i++){
	  cin>>input;
	  queue.erase(remove(queue.begin(), queue.end(), input), queue.end());
	}
	
	for(int i = 0; i < (int)queue.size(); i++){
	  cout << queue[i] << " ";
	}

}
