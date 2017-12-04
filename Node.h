#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED


class Node
{
    public:
        Node();
        Node(int key);
        virtual ~Node();
        int key;
        std::string value;
        Node* parent;
        Node* left;
        Node* right;

        std::string toString();


    protected:

    private:
};
#endif // NODE_H_INCLUDED
