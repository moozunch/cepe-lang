#include <iostream>
#include <vector>
#include <algorithm>
// Stack adalah tumpukan, yang mana data yang terakhir masuk adalah data yang pertama keluar ('Last In First Out'), top yang terakhir
// Queue adalah antrian, yang mana data yang pertama masuk adalah data yang pertama keluar ('First In First Out'), top yang pertama

using namespace std;
// Print the queue
void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}
 



int main() {

    return 0;
}
