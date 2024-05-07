#include <stdio.h>

int months[]={31,28,30,31,30,31,30,31,30,31,30,31};


int oneday(int ad , int am ,int ay , int bd , int bm , int by){
	if (--bd == 0){
		if(--bm == 0){
			--by;
			bm = 12;
		}
		bd=months[bm-1];
	}
	int isleap = (by%4 == 0 && (by%100 != 0 || by%400 ==0));
	if (isleap && bm == 2){
		bd = 29;
	}
	return ad == bd && am == bm && ay == by;
}

int main(){
	int t;

	int ad=0, am=0, ay=0, ac=0;
	int bd, bm, by, bc;
	int sum =0 , count =0;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d %d %d", &bd,&bm,&by,&bc);
				
		if (oneday(ad, am,ay , bd,bm,by)){
			count ++;sum+= bc-ac;
		}
		ad = bd; am = bm; ay = by; ac = bc;
	}
	printf("%d %d\n", count , sum);	
	
	return 0;
}
