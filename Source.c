#include<stdio.h>
int main()
{
	 int i,j,n;
	 float M[100],P[100],C[100],T[100],temp;
	 int D[100],MO[100],Y[100],RN[100];
	 printf("Enter number of students:");
	 scanf("%d",&n);
	
 for(i=0;i<n;i++)
	 {  
	    printf("Enter the roll number of the student %d:",i+1);
	    scanf("%d",&RN[i]);
	 	printf("Enter total marks of the student %d:",i+1);
	 	scanf("%f",&T[i]);
	 	printf("Enter maths marks of the student %d:",i+1);
	 	scanf("%f",&M[i]);
		printf("Enter physics marks of the student %d:",i+1);
	 	scanf("%f",&P[i]);
	 	printf("Enter chemistry marks of the student %d:",i+1);
	 	scanf("%f",&C[i]);
		printf("Enter date of birth of the student %d:",i+1);
		scanf("%d-%d-%d",&D[i],&MO[i],&Y[i]);	
	 }
	 for(i=0;i<n;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
	 		if(T[i]<T[j])
	 		{
	 		    temp=T[i];
				 T[i]=T[j];
				 T[j]=temp;
				 temp=M[i];
				 M[i]=M[j];
				 M[j]=temp;
				 temp=P[i];
				 P[i]=P[j];
				 P[j]=temp;
				 temp=C[i];
				 C[i]=C[j];
				 C[j]=temp;
				 temp=Y[i];
				 
                                                      Y[i]=Y[j];
				 Y[j]=temp;
				 temp=MO[i];
				 MO[i]=MO[j];
				 MO[j]=temp;
				 temp=D[i];
				 D[i]=D[j];
				 D[j]=temp;
				 temp=RN[i];
				 RN[i]=RN[j];
				 RN[j]=temp;
				 	
			 }
			 else if(T[i]==T[j])
			 {
			
                                              if(M[i]<M[j])
			 	{
			 	temp=T[i];
				 T[i]=T[j];
				 T[j]=temp;
				 temp=M[i];
				 M[i]=M[j];
				 M[j]=temp;
				 temp=P[i];
				 P[i]=P[j];
				 P[j]=temp;
				 temp=C[i];
				 C[i]=C[j];
				 C[j]=temp;
				 temp=Y[i];
				 Y[i]=Y[j];
				 Y[j]=temp;
				 temp=MO[i];
				 MO[i]=MO[j];
				 MO[j]=temp;
				 temp=D[i];
				 D[i]=D[j];
				 D[j]=temp;
				 temp=RN[i];
				 RN[i]=RN[j];
				 RN[j]=temp;
			    }
				 else if(M[i]==M[j])
				 {
				 if(P[i]<P[j])
				 {
				 temp=T[i];
				 T[i]=T[j];
				 
                                                      T[j]=temp;
				 temp=M[i];
				 M[i]=M[j];
				 M[j]=temp;
				 temp=P[i];
				 P[i]=P[j];
				 P[j]=temp;
				 temp=C[i];
				 C[i]=C[j];
				 C[j]=temp;
				 temp=Y[i];
				 Y[i]=Y[j];
				 Y[j]=temp;
				 temp=MO[i];
				 MO[i]=MO[j];
				 MO[j]=temp;
				 
                                                      temp=D[i];
				 D[i]=D[j];
				 D[j]=temp;
				 temp=RN[i];
				 RN[i]=RN[j];
				 RN[j]=temp
				 }
                                                     else if(P[i]==P[j]
                                                      {
				 if(Y[i]>Y[j])
				{
			              temp=T[i];
				 T[i]=T[j];
				 T[j]=temp;
				 temp=M[i];
				 M[i]=M[j];
				 M[j]=temp;
				 temp=P[i];
				 P[i]=P[j];
				 P[j]=temp;
				 temp=C[i];
				 C[i]=C[j];
				 C[j]=temp;
				 temp=Y[i];
				 Y[i]=Y[j];
				 Y[j]=temp;
				 temp=MO[i];
				 MO[i]=MO[j];
				 MO[j]=temp;
				 temp=D[i];
				 D[i]=D[j];
				 D[j]=temp;
				 temp=RN[i];
				 RN[i]=RN[j];
				
                                                       RN[j]=temp;
				 	}
				 else if(Y[i]==Y[j])
				 {
				if(MO[i]>MO[j])
				{
				  temp=T[i];
				 T[i]=T[j];
				 T[j]=temp;
				 temp=M[i];
				 M[i]=M[j];
				 M[j]=temp;
				 temp=P[i];
				 P[i]=P[j];
				 P[j]=temp;
			              temp=C[i];
				 C[i]=C[j];
				 C[j]=temp;
				 temp=Y[i];
				 Y[i]=Y[j];
				 Y[j]=temp;	
				 temp=MO[i];
				 MO[i]=MO[j];
				 MO[j]=temp;
				 temp=D[i];
				 D[i]=D[j];
				 D[j]=temp;
				 temp=RN[i];
				 RN[i]=RN[j];
				 RN[j]=temp;
				  }
				 else if(MO[i]==MO[j])
				 {
				 if(D[i]>D[j])
				
				{		
				  temp=T[i];
				 T[i]=T[j];
				 T[j]=temp;
				 temp=M[i];
				 M[i]=M[j];
				 M[j]=temp;
				 temp=P[i];
				 P[i]=P[j];
				 P[j]=temp;
				 temp=C[i];
				 C[i]=C[j];
				 C[j]=temp;
				 temp=Y[i];
				 Y[i]=Y[j];
				
                                                      Y[j]=temp;
				 temp=MO[i];
				 MO[i]=MO[j];
				 MO[j]=temp;
				 temp=D[i];
				 D[i]=D[j];
				 D[j]=temp;
				 temp=RN[i];
				 RN[i]=RN[j];
				 RN[j]=temp;			  		
									  }
								  }	
                                                                                }
					 }
				 }
			 	
			 }
		 }
	 }
	 printf("RANK   ROLLNO     TOTALMARKS MATHEMATICS     PHYSICS       CHEMISTRY         DOB \n");
	 for(i=0;i<n;i++)
	 {
	 printf("%d\t%d\t%f\t%f\t%f\t%f\t%d-%d-%d\n",i+1,RN[i],T[i],M[i],P[i],C[i],D[i],MO[i],Y[i]);
     }
	 return 0;
}

