#include "header.h"
#include <string>
#include <memory>
#include <queue>
using namespace std;

priority_queue<string,vector<string>,greater<string> > p_queue;

//METHOD FOR NODE class
//deafult Node constructor
Node:: Node(void)
{
	Node::freq=0;
	Node::ch='\0';
	Node::left=nullptr;
	Node::right=nullptr;

}

Node:: Node(unsigned int freq,unsigned char ch)
{
	Node::freq=freq;
	Node::ch=ch;
}

void Node::setLeft(std::shared_ptr<Node> left)
{	Node::left=left;

}

void Node::setRight(std::shared_ptr<Node> right)
{
	Node::right=right;
}

shared_ptr<Node> Node::getLeft(void)
{
	return Node::left;
}
shared_ptr<Node> Node::getRight(void)
{
	return Node::right;
}

shared_ptr<Node> Node::getRoot(void)
{
	return Node::root;
}



 





