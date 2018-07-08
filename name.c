#include<stdlib.h>
#include<string.h>
int main(){
	char w[8];
	int tmp=0,r=0,c=0,count=0,row[8],col[8][8];
	printf("type the word ");
	scanf("%s",w);
	for(count=0;count<=8;count++){
			row[count]=w[count];
			if(w[count]<1){
			tmp=count;
			break;
		}
	}
	for(r=0;r<tmp;r++){
	for(c=0;c<=8;c++){
	 		col[c][r]=row[r]%2;
	 		row[r]=row[r]/2;
	}	
}
for(r=0;r<tmp;r++){
	for(c=8;c>=0;c--){
		printf("%d",col[c][r]);
	}
	printf(" ");
}
getch();
	return 0;
}
