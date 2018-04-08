#include <queue>
#include <iostream>
#include <vector>
#include <string>
#include <memory>




class Node
{
    public:
           int freq;
           char ch;
           std::shared_ptr<Node> right;
           std::shared_ptr<Node> left;
           //constructor 1
            Node(void); 
           //constructor 2
           Node(char ch,int freq); 

           std::shared_ptr<Node> getLeft(void);
           std::shared_ptr<Node> getRight(void);
           void setLeft(std::shared_ptr<Node> left);
           void setRight(std::shared_ptr<Node> right);

	        int get_freq(void) const;
	        char get_char(void) const;
	        void set_freq(int f);
	        void set_char(char c);
	         bool compare(Node other);

           
};


class Tree
{		private:
	        const Tree & operator=(const Tree &); //assignment oper. overload
	        std::shared_ptr<Node> root;

		 public:
	      	Tree(void); //constructor
	        ~Tree(void); //destructor
	        Tree(const Tree &); //copy constructor

	        void loadMap(void);

 };
 











