#include<stdio.h>
#include<string.h>
#include<conio.h>
void wellcome()

{


	 	
		   printf("	_____________________________________________________________\n");
		  printf(" |                                                           |  \n");
	     printf("  | *         *  ****  *    ****   *****    *     *  ****   | |  \n");
		  printf(" |  *   *   *   *     *    *      *   *    **   **  *      | |  \n");
	     printf("  |   * * * *    ****  *    *      *   *    * * * *  ****   | |  \n");
		 printf("  |    *   *     *     *    *      *   *    *  *  *  *      | |  \n");
		 printf("  |    *   *     ****  ***  ****   *****    *     *  ****   o |  \n");
		 printf("  |___________________________________________________________|  \n");
		printf("                                                                          \n");
		printf("Name:G.GIRIDHAR DAYANAND\n");
		printf("Roll number:33\n");
		printf("Section:EE026\n");
		printf("Submitted to:Geetika Chatley\n");
		
		
}
void Camera_room()
{	
	char p[10][5],temp[5];
	int i,j,pt[10],bt[10],tot=0,pr[10],temp1,n;
	float avg;
	printf("Enter no of students :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter student %d name:",i+1);
  		scanf("%s",&p[i]);
		printf("Enter arrival time :");
		scanf("%d",&pt[i]);
			printf("Enter burst time:");
		scanf("%d",&bt[i]);
		printf("Enter no of candies:");
		scanf("%d",&pr[i]);
	}
  	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(pr[i]<pr[j])
			{
				temp1=pr[i];
				pr[i]=pr[j];
				pr[j]=temp1;
				temp1=pt[i];
				pt[i]=pt[j];
				pt[j]=temp1;
				strcpy(temp,p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],temp);
			}
		}
	}

	for(i=1;i<n;i++)
	{
	//	bt[i]=wt[i-1]+wt[i-1];
		tot=tot+bt[i];
	}
	avg=(float)tot/n;
	printf("s_name\t\t A_time\t\tNo. of Candi\tB_time\n");
	for(i=0;i<n;i++)
	{

	   printf(" %s\t\t %d\t\t %d\t\t%d\n" ,p[i],pt[i],pr[i],bt[i]);
	}
    printf("Order of student entering in to the Camera room:\n");
    for(i=0;i<n;i++)
    {
    printf("%s\t",p[i]);
	}
	printf("\navg waiting time=%f",avg);
	getch();
}
 void main()
{	wellcome();
	int a;

	printf("Press 1 for main menu:\n");
	printf("Press 2 for exit\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
	Camera_room();
	case 2:
	exit(0);
	}
}

