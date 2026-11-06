#include<stdlib.h>
#include<iostream>

typedef struct{
	char hoten[30];
	int masv;
	float d1,d2,d3;
}SV;

typedef struct tagNode{
    SV a1;
	struct tagNode *link;	
}Node;

typedef struct{
	Node *pHead , *pTail;
	int spt;
}List;

void taods(List *L){
	L->pHead = NULL;
	L->pTail = NULL;
	L->spt = NULL;
}

bool emptylist(List *L){
	return (L->spt == 0);
}

void chenhead(List *l , SV a){
	Node *p;
	p = (Node*)malloc(sizeof(Node));
	p->a1 = a;
	p->link = NULL;
	if(emptylist(l)){
		l->pHead = p;
		l->pTail =p;
	}
	else{
		p->link = l->pHead;
		l->pHead = p;
	}
	l->spt++;
}



void nhap(float * p , int n){
	for(int i = 0 ; i < n ; ++i){
		scanf("%f" , &p[i]);
	}
}

void in(float * p , int n){
	for(int i = 0 ; i < n ; ++i){
		printf("%.2f " , p[i]);
	}
	printf("\n");
}

void nhap2chieu(float **p , int n , int m){
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < m ; ++j){
			scanf("%f" , &p[i][j]);
		}
	}
}

void in2chieu(float **p , int n , int m){
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < m ; ++j){
			printf("%.2f " , p[i][j]);
		}
		printf("\n");
	}
}

void nhapsv(SV p){
	scanf("%s %d %f %f %f" , p.hoten , &p.masv , &p.d1 , &p.d2 , &p.d3);
}

void insv(SV p){
		printf("%s %d %.2f %.2f %.2f" , p.hoten , p.masv , p.d1 , p.d2 , p.d3);
}


int main(){
	/*int n , m;
	scanf("%d%d" , &n , &m);
	float **p;
	p = (float**)calloc(n , sizeof(float));
	for(int i = 0 ; i < n ; ++i){
		p[i] = (float*)calloc(m , sizeof(float));
	}
	nhap2chieu(p , n , m);
	in2chieu(p , n , m);
	for(int i = 0 ; i < n; ++i){
		free(p[i]);
    }
    free(p);*/
	
	
	/*int n;
	scanf("%d" , &n);
	SV* p;
	p = (SV*)calloc(n , sizeof(SV));
	nhapsv(p , n);
	insv(p , n);*/
	
	SV a;
	nhapsv(a);
	SV b;
	nhapsv(b);
	List *l;
	taods(l);
	chenhead(l , a);
	chenhead(l , b);
	
	
	
}
