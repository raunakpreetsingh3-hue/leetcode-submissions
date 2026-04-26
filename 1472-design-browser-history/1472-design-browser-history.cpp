class node{
    public:
    string data;
    node* next;
    node* back;
    node(string url){
        data=url;
        next=nullptr;
        back=nullptr;
    }
};
class BrowserHistory {
public:
    node* current;
    BrowserHistory(string homepage) {
        current=new node(homepage);
    }
    
    void visit(string url) {
        node* newnode=new node(url);
        current->next=nullptr;
        newnode->back=current;
        current->next=newnode;
        current=newnode;
    }
    
    string back(int steps) {
        while(steps){
            if(current->back) current=current->back;
            else break;
            steps--;
        }
        return current->data;
    }
    
    string forward(int steps) {
        while(steps){
            if(current->next) current=current->next;
            else break;
            steps--;
        }
        return current->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */