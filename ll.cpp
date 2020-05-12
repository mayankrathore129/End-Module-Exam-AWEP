
#include<iostream>
using namespace std;

class Node
{
    private:
        Node* next;
        int age;
        string name;
        
    public:
        Node()
       {
            age = 0;
            name = '0';
            next = NULL;
           
       }
        
        Node(string name, int age)
       {
            this->age = age;
            this->name = name;
            next = NULL;
         
       }
        
        void setNext(Node* next)
       {
            this->next = next;
       }
        
        Node* getNext()
       {
            return next;
       }
        
        int getAge()
       {
            return age;
       }
        
        string getName()
       {
            return name;
       }
};

class Linklist
{
    private:
        Node* head;
        
    public:
        Linklist()
       {
            head = NULL;
       }
        
        void insert(string name, int age)
       {
          
            Node* node = new Node(name, age);
            Node* temp = head;
            if(head == NULL)
           {
            
                head = node;
           }
                
            else if(temp->getAge() <= age)
           {
                    insertA(node);
           }        
            
            else if(temp->getAge() > age)    
           {
                insertB(node);
           }
            
       }
        
        void insertA(Node* node)
       {
            Node* temp = head;
            while(temp->getNext()!=NULL)
           {
                if(temp->getAge()<node->getAge())
               {
                node->setNext(temp->getNext());    
                temp->setNext(node);
                return;
               
               }
                temp = temp->getNext();
           }
            temp->setNext(node);
            node->setNext(NULL);
       }
        
        void insertB(Node* node)
       {
        
            node->setNext(head);
            head = node;
       }
         
        int print(int pos)
       {
            Node* temp;
            temp = head;
            int count = 0;
            while(temp!=NULL)
           {
                count++;
                
                if(count == pos)
               {
                    break;
               }
                temp = temp->getNext();
           }
            
            if(temp == NULL)
           {
                return 0;
           }
            else
            cout<<temp->getName()<<" "<<temp->getAge()<<endl;    
       }
        
        int remove(int pos)
       {
            Node* temp = head;
            Node* prev = NULL;
            int count =0;
            if(pos == 1)
           {
                head = head->getNext();
                return 0;
           }
            else{
            while(temp!=NULL)
           {
                count++;//if(count == temp->getCount())
                if(count == pos)
               {
                    break;
               }else{
                prev = temp;
                temp = temp->getNext();
               }
           }
            if(temp == NULL)
           {
                return 0;
           }
            else
           {
            prev->setNext(temp->getNext());
            delete temp;
           }
           }
       }
  
};

int main()
{
    Linklist ll;
    string cmd;
    while(1)
   {
        cin>>cmd;
        if(cmd == "stop")
         break;
         
        if(cmd == "insert")
       {
            
            string name;
            cin>>name;
            int age;
            cin>>age;
            ll.insert(name, age);
       }
        
        if(cmd == "print")
       {
            int n;
            cin>>n;
            ll.print(n);
       }
        
        if(cmd == "remove")
       {
            int n;
            cin>>n;
            ll.remove(n);
       }
        
   }
    
    return 0;
}

 