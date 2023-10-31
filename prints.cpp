#include<iostream>

using namespace std;

int main(int argc, char** argv) 
{
if (argc <= 1) 
{
cout<<"\e[1;31m error:"<<"\e[0m no input text"<<endl;
} else {
for(int i = 1; i < argc; i++) {
cout<<argv[i]<<endl;
}
}
return 0;
}
