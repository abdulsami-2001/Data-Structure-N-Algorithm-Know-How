#include <iostream>
#include <conio.h>
using namespace std;

class StackDS{
    private:
        int top = -1;
        int arr[5];
    public:
        StackDS(){
            top =  -1;
            for (int i = 0; i < 5; i++){
                arr[i]=0;
            }
            
        }

        bool isEmpty(){
            if (top==-1)
                return true;
            else
                return false;
        }
        bool isFull(){
            if (top==4)
                return true;
            else
                return false;
        }

        void push(int valueToPush){
            if (isFull()) {
                cout<<"Stack Is Full :(("<<endl;
            }
            else{
                top++;
                arr[top]=valueToPush;
            }
            
        }

        int pop(){
            if (isEmpty()){
                cout<<"Stack Is Underflow";
                return 0;
            }else{
                int removedValue = arr[top];
                arr[top] = 0;
                top--;
                return removedValue;
            }
        }
         
        int count(){
            return top+1;
        }
         
        int peek(int position){
           if(isEmpty()){
                cout<<"Stack Is Underflow";
                return 0;
            }else{
                return arr[position];
            }
        }

        void change(int updatedVal,int postion){
            if (isEmpty()){
                cout<<"Stack Is Underflow";
            }else{
                arr[postion] = updatedVal;
                cout<<"Value changed at location: "<<postion<<endl;
            }
            
        }

        void diplay(){
            cout<<"Stack Values are: "<<endl;
            for (int i = 4 ;i >= 0; i--){
                cout<<arr[i]<<endl;
            }
            
        }
};



int main(){

    StackDS s1;
    int option,positon,value;

    do{
        cout<<"What operation do you need to perform? Select Option Number. Enter 0 to exit."<<endl;
        cout<<"1. Push()"<<endl;
        cout<<"2. Pop()"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. Peek()"<<endl;
        cout<<"6. Count()"<<endl;
        cout<<"7. Change()"<<endl;
        cout<<"8. Display()"<<endl;
        cout<<"9. Clear Screen"<<endl<<endl;

        cin>>option;

        switch (option){
        case 0:
            break;
        case 1:
            cout<<"Push Function Called"<<endl;
            cout<<"Enter A Value To Push"<<endl;
            cin>>value;
            s1.push(value);
            break;
        case 2:
            cout<<"Pop Function Called"<<endl;
            cout<<"Poped Value Is: "<<s1.pop();
            break;
        case 3:
            cout<<"IsEmpty Function Called"<<endl;
            cout<<"Empty Status: "<<s1.isEmpty();
            break;
        case 4:
            cout<<"IsFull Function Called"<<endl;
            cout<<"Full Status: "<<s1.isFull();
            break;
        case 5:
            cout<<"IsPeek Function Called"<<endl;
            cout<<"Enter the position to check";
            cin>>positon;
            cout<<"Value At the position"<<positon<<" is: "<<s1.peek(positon);
            break;
        case 6:
            cout<<"Count Function Called"<<endl;
            cout<<"Stack Count Is: "<<s1.count();
            break;
        case 7:
            cout<<"Change Function Called"<<endl;
            cout<<"Enter the position where you want to change: ";
            cin>>positon;
            cout<<"Enter the Updated Value: ";
            cin>>value;
            s1.change(value,positon);
            break;
        case 8:
            s1.diplay();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout<<"Choose A Valid Option";
            break;
        }

    }while (option!=0);



    

}