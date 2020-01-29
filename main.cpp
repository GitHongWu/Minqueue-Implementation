#include <iostream>

#include "minqueue.h"

using namespace std;

int main(){
    int n = 9;

    // ***test1
    // vector<int> v;
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(2);
    // minqueue<int, int> q(v, 0);
    // q.outputQueue();
    // cout << "update: " << endl;
    // q.pushinorder(1, 6);
    // q.outputQueue();

    // minqueue<int, char> q1(n);
    // q1.pushinorder(4, 'a');
    // q1.pushinorder(6, 'd');
    // q1.pushinorder(3, 'b');
    // q1.outputQueue();
    // cout << "pop: " << q1.minfront() << endl;
    // q1.minpop();
    // q1.outputQueue();
    // cout << "update: " << endl;
    // q1.pushinorder(6, 'a');
    // q1.outputQueue();

    // minqueue<int, int> q2(n);
    // q2.pushinorder(1, 1);
    // q2.pushinorder(3, 3);
    // q2.pushinorder(2, 2);
    // q2.pushinorder(17, 17);
    // q2.pushinorder(25, 25);
    // q2.pushinorder(36, 36);
    // q2.pushinorder(7, 7);
    // q2.pushinorder(100, 100);
    // q2.pushinorder(19, 19);
    // q2.outputQueue();
    // cout << "after pop: " << q2.minfront() << endl;
    // q2.minpop();
    // q2.outputQueue();
    // cout << "after pop: " << q2.minfront() << endl;
    // q2.minpop();
    // q2.outputQueue();
    // cout << "push: " << endl;
    // q2.pushinorder(100, 1);
    // q2.outputQueue();

    // minqueue<char, int> q3(n);
    // q3.pushinorder('b', 4);
    // q3.pushinorder('a', 4);
    // q3.pushinorder('A', 4);
    // q3.pushinorder('B', 4);
    // q3.outputQueue();


    vector<int> keys = {123, 456, 789, 1234, 5678, 91011};
    char initialValue = '#';

    minqueue<int, char> queue(keys, initialValue);

    queue.outputQueue();
    if(!queue.empty()){
        cout << "pop: " << queue.minfront() << endl;
        queue.minpop();
        queue.outputQueue();
        cout << "pop: " << queue.minfront() << endl;
        queue.minpop();
        queue.outputQueue();
        // cout << "pop: " << queue.minfront() << endl;
        // queue.minpop();
        // queue.outputQueue();
    }
    

    return 0;
}