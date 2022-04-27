

#include <iostream>
using namespace std;
int vertices, edges;
class Queue
{
    public:
        int a[100];
        int front, rear;
        Queue()
        {
            front = -1;
            rear = 0;
        }
        bool isEmpty()
        {
            if (front == rear)
            return true;
            else
            return false;
        }
        void enqueue(int x)
        {
            if (rear == 99)
            cout << "Queue is full";
            else if (rear == 0)
            {
                a[rear++] = x;
                front = 0;
            }
            else
            {
                a[rear++] = x;
            }
        }
        int dequeue()
        {
            if (isEmpty())
                cout << "Queue is Emtpy";
            else
            {
                return (a[front++]);
            }
            return -1;
        }
        void display()
        {
            int i;
            cout << "\nQueue : ";
            for (i = front; i <= rear; i++)
            cout << a[i] << "\t";
        }
};
void BFS(int a[10][10], int source, int &counter, int visited[])
{
    Queue q;

    q.enqueue(source);

    int z;

    while (!q.isEmpty())
    {
        z = q.dequeue();
        if(z%2==0)
            cout << (z) << " ";

        for (int i = 0; i < vertices; i++)
        {

            if (a[z - 1][i] == 1 && visited[i] == 0)
            {

            visited[i] = 1;

            q.enqueue(i + 1);

            }
        }

    visited[z - 1] = 1;
    }

}
int main()
{
    int a[10][10], n, m, x, counter = 0, i, j;
    cout << "Enter Number of Vertices : ";
    cin >> vertices;
    cout << "Enter Number of Edges : ";
    cin >> edges;
    for (i = 0; i < vertices; i++)
    for (int j = 0; j < vertices; j++)
        a[i][j] = 0;
    int p, q;
    for (i = 1; i <= edges; i++)
    {
        cout << "Enter Source : ";
        cin >> p;
        cout << "Enter Destination : ";
        cin >> q;
        a[p - 1][q - 1] = 1;
    }
    cout << "\nThe Adjacency Matrix is : \n\n";
    for (i = 0; i < vertices; i++)
    {
        for (j = 0; j < vertices; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Enter Source : ";
    int source;
    cin >> source;
    int visited[10];
    for (i = 0; i < 10; i++)
    visited[i] = 0;
    visited[source - 1] = 1;
    cout << "\nBFS is : ";
    BFS(a, source, counter, visited);

}
