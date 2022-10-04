#include <stdio.h>
int main(){
	int i,m[2],n[2],x,y,k,j;
    float mat1[99][99],mat2[99][99],result[99][99];
			for(i=0;i<2;i++){
		printf("\n qual o numero de linhas da matriz%d \n",i+1);
		scanf("%d",&n[i]);
		printf("\n qual o numero de colunas da matriz%d \n",i+1);
		scanf("%d",&m[i]);
		}
		if(m[0]==n[1]){
			for(x=0;x<n[0];x++){
				for(y=0;y<m[0];y++){
					printf("\n qual o elemento da matriz 1 linha %d coluna %d \n",x+1,y+1);
					scanf("%f",&mat1[x][y]);
				}
			}
			for(x=0;x<n[1];x++){
				for(y=0;y<m[1];y++){
					printf("\nqual o elemento da matriz 2 linha %d coluna %d\n",x+1,y+1);
					scanf("%f",&mat2[x][y]);
				}
			}
			for(i=0;i<n[0];i++){
				for(j=0;j<m[1];j++){
					result[i][j]=0;
					for(k=0;k<m[0];k++){
						result[i][j]+=mat1[i][k]*mat2[k][j];
					
				}
			}
				
				
			}
		for(x=0;x<n[0];x++){
			puts("\n");
				for(y=0;y<m[1];y++){
					printf("%2.f ",result[x][y]);
				}
			
		}
	}		
}

			
	

