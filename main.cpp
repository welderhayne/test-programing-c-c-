#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
	int cont;
	float n1,n2,n3,n4,resp,result;
	n1 = 11.1;
	n2 = 11.1;
	n3 = 11.1;
	n4 = 11.1;
	for(cont=1;cont<=4;cont++)
	{
		resp = 11;
		while((resp>10.0)||(resp<0.1))
		{
			printf("\n%i semestre: ", cont);
			scanf("%f",&resp);
		}
		switch(cont)
		{
			case 1:
			n1 = resp;
			break;
			
			case 2:
			n2 = resp;
			break;
			
			case 3:
			n3 = resp;
			break;
			
			case 4:
			n4 = resp;
			break;
		}
	}
	result = (n1+n2+n3+n4)/4;
	for(cont=1;cont<10;cont++)
	{
		cout << "" << endl;
	}
	cout << "=========================\n" <<
		"          RESULT         \n" <<
		"=========================\n" << endl;
	printf("\nNota: %f\nSituacao : ", result);
	if(result < 7)
	{
		cout << "REPROVADO\n\n\n" << endl;
	}
	else{
		cout << "APROVADO\n\n\n" << endl;
	}
	system("pause");
	return 0;
}