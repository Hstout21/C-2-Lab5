/* Hunter Stout
   2/18/2022
   list.h
   Lab 5 :D */

#include <iostream>
#include <string>

struct Node{
    std::string data;
    Node *next;
};

class Lilist {
    public:
        Lilist(){head = NULL;}
        void add(std::string item);
        void show();
        Node* search(std::string item);
        void move_front_to_back();

    private:
        Node *head;

};

void Lilist::add(std::string item) {
    Node * tmp;
    if(head == NULL) {
        head = new Node;
        head -> data = item;
        head -> next = NULL;
    }
    else {
        for(tmp = head; tmp -> next != NULL; tmp = tmp -> next);
        tmp -> next = new Node;
        tmp = tmp -> next;
        tmp -> data = item;
        tmp -> next = NULL;
    }
}

void Lilist::show() {
    for(Node *tmp = head; tmp != NULL; tmp = tmp -> next) {
        std::cout << tmp -> data << std::endl;
    }
}

Node* Lilist::search(std::string target) {
    //Sets to head & runs till end.
    Node * tmp = head;
    while(tmp != NULL) {
        if(tmp -> data == target) {
            //If found returns tmp.
            return tmp;
        }
        //++ for node.
        tmp = tmp -> next;
    }
    //If not found returns null.
    return NULL;
}

void Lilist::move_front_to_back() {
    //Sets two points to front.
    Node * tmp = head;
    Node * first_node = head;
    //++ to cursor.
    head = head -> next;
    //Runs till end.
    while (tmp -> next != NULL) {
        tmp = tmp -> next;
    }
    //Stores first address & moves to back.
    tmp -> next = first_node;
    first_node -> next = NULL;

}