#include <iostream>
#include "LinkedStack.h"
#include <fstream>
using namespace std;

int main() {
    // Demo code
    LinkedStack<int> myStack;
    cout << myStack.isEmpty() << endl;
    // end of demo code
//--------------------------------------------------------------

    // *** OPEN FILE ***
    fstream myFile;
    myFile.open("input.text");
    cout << "OPENING FILE" << endl;

    //*** CHECK IF FILE IS OPEN ***
    if(!myFile){
      cout << "ERROR: could not open file" << endl;
    }

    LinkedStack<string> myStack;
    string myLine;
    int expressionNum = 1;
    while(!myFile.eof()){
        getline(myFile, myLine);

        //** PUSH AND POP PARENTHESIS
        for(int i=0; i < myLine.length(); i++){
            if(myLine[i] == '(' || myLine[i] == '[' || myLine[i] == '{')
                {myStack.push(myLine[i]);}

            if(myLine[i] == ')' || myLine[i] == ']' || myLine[i] == '}')
                {myStack.pop(myLine[i]);}
        }

        if(myStack.isEmpty() == true)
          {cout << "Expression #" << expressionNum << " is VALID." << endl;}
        if(myStack.isEmpty() == false)
          {cout << "Expression #" << expressionNum << " is NOT VALID." << endl;}
        expressionNum++;
    }

    myStack.~LinkedStack();
    return 0;
}
