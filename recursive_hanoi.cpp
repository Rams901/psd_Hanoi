#include <bits/stdc++.h>
using namespace std;

//Initializing our pegs, and number of disks globally.
int n = 3;
vector<int> a(n), b(0), c(0);
void show_peg(vector<int> peg){
    std::vector<int>::iterator i;
    for( i = peg.begin(); i!=peg.end(); i++){
        cout << *i << " ";
        
                                            }
    cout <<endl;
                               }
void towerOfHanoi(int n, vector<int>& from_rod, vector<int>& to_rod, vector<int>& aux_rod) 
{ 
    if (n > 0){
    
    // Move n - 1 disks from source to auxiliary, so they are out of the way
    towerOfHanoi(n - 1, from_rod, aux_rod,to_rod ); 

    to_rod.push_back(from_rod.back());
    from_rod.pop_back();
    
    //Displaying Pegs
    cout << "A ";
    show_peg(a);
    cout << "B ";
    show_peg(b);
    cout << "C ";
    show_peg(c);
    cout << endl;
    
    // Move the n - 1 disks that we left on auxiliary onto target
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);


             }
}


int main() 
{   //filling our Start Peg
       for (int i = 0; i < n; i++){
        a[i] = i+1;
                                  }
    //Displaying current status of Pegs
    cout << "A ";
    show_peg(a);
    cout << "B ";
    show_peg(b);
    cout << "C ";
    show_peg(c);
    cout << endl;
    
    towerOfHanoi(n, a, c, b); // A, B and C are names of pegs

    
    return 0; 
} 
