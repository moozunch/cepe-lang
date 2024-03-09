#include <bits/stdc++.h>
using namespace std;

//struct itu record, tipe data buatan, kumpulan banyak tipe data
struct Participant {
    string id;
    int sesi1, sesi2, sesi3;

    bool operator < (const Participant& other) const {
        if (sesi3 != other.sesi3) {
            return sesi3 > other.sesi3;
        } else if (sesi2 != other.sesi2) {
            return sesi2 > other.sesi2;
        } else {
            return sesi1 > other.sesi1;
        }
    }
};

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N, M;
        cin >> N >> M;

        string targetId;
        cin >> targetId;

        vector<Participant> participants(N); // vector mirip record di pascal
        for (int i = 0; i < N; ++i) {
            cin >> participants[i].id >> participants[i].sesi1 >> participants[i].sesi2 >> participants[i].sesi3;
        }

        sort(participants.begin(), participants.end());

        bool lulus = false;
        for (int i = 0; i < M; ++i) {
            if (participants[i].id == targetId) {
                lulus = true;
                break;
            }
        }

        cout << (lulus ? "YA" : "TIDAK") << endl;
    }

    return 0;
}
