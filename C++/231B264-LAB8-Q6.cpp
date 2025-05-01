 stack<int> s;
    while (llist != nullptr) {
        s.push(llist->data);
        llist = llist->next;
    }
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }