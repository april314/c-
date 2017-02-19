#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cassert>
using namespace std;

int str_copy(const char **strOut,const char *strIn);

int main()
{
	char source[] = "Hello";
	const char *destin[] = {"Bye"};		//array of pointers to const char: 
										                //you can change the pointers themselves, 
										                //just not the characters pointed to by those pointers
	cout << *destin << endl;
	str_copy(destin, source);
	cout << *destin << endl;
	
	*destin = "hi";
	cout << *destin << endl;
	return 0;
}

int str_copy(const char **strOut, const char *strIn) 
{
	assert(strIn != NULL);
	int n = (strlen(strIn)+1);
	char * stmp = (char*)malloc(n);
	int i;
	for (i = 0; strIn[i] != '\0'; i++) {
		stmp[i] = strIn[i];
	}
	stmp[i] = '\0';
	*strOut = stmp;
	return 0;
}
