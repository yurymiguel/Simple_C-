#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 int main() { 
 

float totalsalario=0, salario,salariomaior=0,salariomenor=9999;
int funcionario, cont ;

do {
printf("Quantos funcionarios tem na sua empresa?");
scanf("%d",&funcionario);
  
   }while (funcionario < 0);
  
   for(cont = 1; cont <= funcionario; cont++) {
   	printf(" %d salario :" , cont);
   	scanf("%f" , &salario);
   	
   	
   	totalsalario += salario;
   	if(salariomenor > salario) 
   		salariomenor = salario;
	if(salariomaior < salario) 
   		salariomaior = salario;
	        	
   }
    
   	    printf("A media salarial da empresa e de R$%.2f\n",+ totalsalario/funcionario);
		printf("Maior salario R$%.2f\n",+ salariomaior);  
		printf("Menor salario R$%.2f\n",+ salariomenor);    
       
	   

   
}


