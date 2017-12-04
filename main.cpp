#include <iostream>

using namespace std;

int main()
{


    BinarySearchTree* bts = new BinarySearchTree();
    Node* root = NULL;
    root = bts->insert(root,50);


    bts->insert(root, 30);
    bts->insert(root, 20);
    bts->insert(root, 40);
    bts->insert(root, 70);
    bts->insert(root, 60);
    bts->insert(root, 80);

    std::cout << "#############" << endl;
    std::cout << "Search: " << bts->search(root, 60)->toString()<<endl;
    std::cout << "#############" << endl;

    std::cout << "#############" << endl;
    bts->print(root);
    std::cout << "#############" << endl;

    root = bts->remove(root, 20);

    std::cout << "#############" << endl;
    bts->print(root);
    std::cout << "Height: " << bts->height(root)<<endl;
    std::cout << "#############" << endl;

    root = bts->remove(root, 30);
    root = bts->remove(root, 40);
    root = bts->remove(root, 50);

    std::cout << "#############" << endl;
    bts->print(root);
    std::cout << "Height: " << bts->height(root)<<endl;
    std::cout << "#############" << endl;

    root = bts->remove(root, 60);
    root = bts->remove(root, 70);

    std::cout << "#############" << endl;
    bts->print(root);
    std::cout << "Height: " << bts->height(root)<<endl;
    std::cout << "#############" << endl;





    bts->insert(root, 25);
    bts->insert(root, 35);
    bts->insert(root, 45);
    bts->insert(root, 55);
    bts->insert(root, 65);
    bts->insert(root, 75);

     std::cout << "#############" << endl;
    bts->print(root);
    std::cout << "Height: " << bts->height(root)<<endl;
    std::cout << "#############" << endl;

    return 0;
}


