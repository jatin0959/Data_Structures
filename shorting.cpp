/*
He has N plates of meatballs, here the ith plate contains Pi meatballs. You need to find the minimal number of plates Andrew needs to take to his trip to Las Vegas, if he wants to eat there at least M meatballs. Note that each plate is already packed, i.e. he cannot change the amount of meatballs on any plate.

Input
The first line of the input contains an integer T, denoting the number of test cases. The description of T test cases follows. The first line of each test case contains two space-separated integers N and M. The second line contains N space-separated integers P1, P2, ..., PN.

Output
For each test case, output an integer, denoting the minimum number of plates. If it's impossible to take at least M meatballs, print -1.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minPlatesToTake(int N, int M, vector<int>& plates) {
    sort(plates.rbegin(), plates.rend()); // Sort plates in non-decreasing order of meatballs
    int totalMeatballs = 0;
    int platesTaken = 0;
    
    for (int i = 0; i < N; i++) {
        totalMeatballs += plates[i];
        platesTaken++;
        
        if (totalMeatballs >= M) {
            return platesTaken;
        }
    }
    
    return -1;
}

int main() {
    int T;
    cin >> T;
    
    for (int t = 0; t < T; t++) {
        int N, M;
        cin >> N >> M;
        vector<int> plates(N);
        
        for (int i = 0; i < N; i++) {
            cin >> plates[i];
        }
        
        int result = minPlatesToTake(N, M, plates);
        cout << result << endl;
    }
    
    return 0;
}

/*
Chef and Roma are playing a game. Rules of the game are quite simple. Initially there are N piles of stones on the table. In each turn, a player can choose one pile and remove it from the table. Each player want to maximize the total number of stones removed by him. Chef takes the first turn.

Please tell Chef the maximum number of stones he can remove assuming that both players play optimally.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.

The first line of each test case contains a single integer N denoting the number of piles.

The second line contains N space separated integers A1, A2, ..., AN denoting the number of stones in each pile.

Output
For each test case, output a single line containg the maximum number of stones that Chef can remove.
*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxpiles(int N, vector<int>& piles) {
    sort(piles.rbegin(), piles.rend()); 
    int totalPiles = 0;
    
    
    for (int i = 0; i < N; i+=2) {
        totalPiles += piles[i];
    }
    
    return totalPiles;
}


int main() {
	int T;
	
	cin>>T;
	for(int t=0; t<T; t++){
	    
        int N;
        cin >> N;
        vector<int> piles(N);
        
        for (int i = 0; i < N; i++) {
            cin >> piles[i];
        }
        std::cout << maxpiles(N,piles) << std::endl;
	
	
	}
	return 0;
}
