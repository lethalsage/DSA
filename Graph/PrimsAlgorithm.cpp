#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node {
public:
    int u;
    int v;
    int distance;
    Node() : u(0), v(0), distance(0) {}
    Node(int u, int v, int d) : u(u), v(v), distance(d) {}
};

struct Compare {
    bool operator()(Node a, Node b) {
        return a.distance < b.distance;
    }
};

vector<int> prims(vector<vector<int>>& nodes) {
    priority_queue<Node, vector<Node>, Compare> pq;
    vector<int> visited(nodes.size(), 0);
    vector<int> result;
    pq.push(Node(0, 0, 0));
    while (!pq.empty()) {
        Node node = pq.top();
        pq.pop();
        if (visited[node.v]) {
            continue;
        }
        visited[node.v] = 1;
        result.push_back(node.distance);
        for (int i = 0; i < nodes.size(); i++) {
            if (nodes[node.v][i] != 0 && !visited[i]) {
                pq.push(Node(node.v, i, nodes[node.v][i]));
            }
        }
    }
    return result;

}

int main() {
    
    vector<vector<int>> nodes = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    vector<int> result = prims(nodes);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    


    return 0;
}