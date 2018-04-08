#include "header.h"
#include <string>
#include <memory>
#include <queue>
#include <iostream> // Needed for console stream objects
#include <sstream>  // Needed for string stream objects
#include <fstream>
#include <unordered_map>


using namespace std;

priority_queue<Node,vector<Node>,greater<string> > p_queue;

unordered_map<char, int> map;
Node:: Node(void)
{
	Node::freq=0;
	Node::ch='\0';
	Node::left=nullptr;
	Node::right=nullptr;

}

Node:: Node(char ch,int freq)
{
	Node::freq=freq;
	Node::ch=ch;
}

void Node::setLeft(std::shared_ptr<int> left)
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

bool Node::compare(Node other)
{
    return freq<other.freq;
}


void Tree::loadMap(void)
{

	ifstream infile;
    infile.open("names.txt");

    if(infile.fail())
    {
    	cout<< "Couldn't open the file"<< endl;
    }


    else{

        //adding data to the map
    	string str;
    	while(getline(infile,str))
    	{
    		
    		for(int i=0;i<str.length();i++)
    		{   
    			if(map.find(str.at(i))==map.end())
    			{
                    map.insert({str.at(i),1});
    			}

    			else{
    			     map.find(str.at(i))->second++;	
    			}
    		}
    	}

        //viewing the map
        for (auto k:map)
        {
            cout<<k.first<<" "<<k.second<<endl;

            Node node=Node(k.first,k.second);
           // p_queue.push(node);



        }
    }


}



 





