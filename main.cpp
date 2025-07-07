#include<iostream>
using std::cout;
class AClass{
private:
int n;
int m;
public:
int GetN(){return n;}
int GetM(){return m;}
AClass(int n,int m):n(n),m(m){}
};
int main(){
	AClass a{5,3};
	cout<<"Using class methods: n="<<a.GetN()<<" m="<<a.GetM()<<"\n";
	void *ptrToRawMemory = &a;
	cout<<"Using memory manipulation: n="<<*((int*)ptrToRawMemory)<<" m="<<*((int*)(ptrToRawMemory + sizeof(int)))<<"\n";
	
	return 0;
}