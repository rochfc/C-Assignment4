#include <queue>
#include <iostream>
#include <vector>
#include <string>
#include <memory>

class Tree
{		private:
	        //std::shared_ptr<Node> root;
	        Tree(const Tree &); //copy constructor
	        const Tree & operator=(const Tree &); //assignment oper. overload
	  	public:
        Tree(void); //constructor
        ~Tree(void); //destructor

        unsigned int get_freq(void) const;
        unsigned char get_char(void) const;
        void set_freq(unsigned int);
        void set_char(unsigned char);






        /*
        Node* get_left(void) const;
        Node* get_right(void) const;
        void set_left(Node *);
        void set_right(Node *);
        Node* get_root(void) const;
        //comparison operator overloads to compare
        //2 objects of the class
        bool operator==(const Tree &) const;
        bool operator!=(const Tree &) const;
        bool operator<(const Tree &) const;
        bool operator>(const Tree &) const;
        bool operator<=(const Tree &) const;
        bool operator>=(const Tree &) const;

        //to get H. string of a given char
        void huf(Node *, unsigned char, string, string &) const; 
        //outputs the H. char-string pairs list
        void huf_list(Node *, string) const; 
        //to get char equivalent of a H. string (if exists)
        bool get_huf_char(string, unsigned char &) const;
        string print_char(Node *) const; //prints chars 

        */
 };
 

class Node
{
    public:
           unsigned int freq;
           unsigned char ch;
           std::shared_ptr<Node> right;
           std::shared_ptr<Node> left;
           std::shared_ptr<Node> root;
           //constructor 1
            Node(void); 
           //constructor 2
           Node(unsigned int freq,unsigned char ch); 

           
           std::shared_ptr<Node> getLeft(void);
           std::shared_ptr<Node> getRight(void);
           void setLeft(std::shared_ptr<Node> left);
           void setRight(std::shared_ptr<Node> right);
           std::shared_ptr<Node> getRoot(void);

           
};





