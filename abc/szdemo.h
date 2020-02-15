#ifndef SZDEMO_H_INCLUDED
#define SZDEMO_H_INCLUDED

using namespace std;

void input(int [], int);
void print(int [], int );

void input(int values[], int len){
    for(int i=0;i<len;i++){
        cout << "please input the " << i +1<<" number:";
        cin>> values[i];
    }
}
void print(int values[], int len){
    for(int i=0;i<len;i++){
        cout << values[i] <<endl;
    }
}

#endif // SZDEMO_H_INCLUDED
