#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cassert>
using namespace std;

int str_copy(const char **strOut,const char *strIn);

int main()
{
	char source[] = "Worst";
	const char *destin = /*????*/;// = {"World"};		//array of pointers to const char: 
										                //you can change the pointers themselves,
										                //just not the characters pointed to by those pointers
	cout << *destin << endl;
	if(0 != str_copy(destin, source)){

	}
	cout << *destin << endl;

	*destin = "hi";
	cout << *destin << endl;
	return 0;
}

// W o r l d
// o r 0 0 0
// r d 0 0 0
// s e 0 0 0
// t r 0 0 0

int str_copy(const char **strOut, const char *strIn)
{
	if(strIn != NULL){
	    return -1;
	}
	int n = (strlen(strIn)+1);
	char * stmp = (char*)malloc(n);
	int i;
	for (i = 0; strIn[i] != '\0'; i++) {
		stmp[i] = strIn[i];
	}
	stmp[i] = '\0';
	*strOut = stmp;
	// while(strmo != 0){
	//   **strOut = *stmp;
	// }
	return 0;
}
