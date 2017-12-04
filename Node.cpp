#include "Node.h"
#include <sstream>

Node::Node()
{

}

Node::Node(int key){
    std::stringstream s;
    this->key = key;
    s << "Knoten_" << key/10;
    value = s.str();
    left = NULL;
    right = NULL;
}

Node::~Node()
{
    //dtor
}

std::string Node::toString(){
    std::stringstream s;
    s << "Key: " << this->key << " Value: " << this->value;
    return s.str();
}
