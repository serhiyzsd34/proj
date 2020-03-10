#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
using namespace std;
string func(int N,string teams[],string towns[],int places[]){
	struct Club{
		string name[20];
		string city[20];
		int place;
	};
	Club *club=(Club*)malloc(sizeof(Club)*N);
	for(int i=0;i<N;i++){
		club[i].name=teams[i];
		club[i].city=towns[i];
		club[i].place=places[i];
		printf("%s %s %i\n",club[i].name,club[i].city,club[i].place);
	}
	
	for (int i = 0; i < N; i++) {
	    for (int j = 0; j < N-1; j++) {
	      if (club[j].place > club[j+1].place ){
	        Club b = club[j]; 
	        club[j] = club[j + 1]; 
	        club[j + 1] = b; 
	      }
	    }
   }
   printf("\nSorted:\n");
   for(int i=0;i<N;i++){
   		teams[i]=club[i].name;
		printf("%s %s %i\n",club[i].name,club[i].city,club[i].place);
	}
	//return teams;
	
}

int main() {
	int N;
	string teams[4]={"qq","ee","oo","cc"};
	string towns[4]={"qq","ee","oo","cc"};
	int places[4]={5,4,3,2};
	func(4,teams,towns,places);
	return 0;
}
