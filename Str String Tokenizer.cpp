#include <iostream>
#include <cstring>
#include<algorithm>
#include<cstring>
using namespace std;

char *mystrtok(char str[], char delim){
    //we aasign a static variable jo point karega
    static char*input = NULL;
    if(str!=NULL){
        input = str;
        //input str ko point karega .
        //Dynamic array to store original string.
    }
    if(input==NULL){
        return NULL;
    }
    char *output = new char[strlen(input)+1]; //+1 is for null character
    //We will return a word as dynamically allocated array from my function.
    //To extract the word i have to iterate over my entire input array.
    int i;
    for(i=0;input[i]!='\0';i++){
        //Do some work.copy the character into output array.
        if(input[i]!=delim){
            output[i]=input[i];
        }
        else{
            //You are now at delim.So we dont have to copy anything.
            output[i]='\0'; //output array has null.
            input = input + i + 1; //point input to the next word.
            return output;
        }

    }
    //Ab for loop khatam . so return the last word even if delimeter isnt there.
    output[i] = '\0';
    //Jab input ne rijul padh liya to it will now point to null.
    input = NULL;
    return output;
}

int main() {
    char str[] = "Hi, My name is rijul !.";
    char *ptr;
    ptr = mystrtok(str,' ');//ptr strtok ko point karega.tabhi to read kar payenge.
    
    while(ptr!=NULL){
        cout<<ptr<<endl;
        ptr = mystrtok(NULL,' ');
    }
   
    return 0;

}
