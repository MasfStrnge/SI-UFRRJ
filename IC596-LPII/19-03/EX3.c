// 3) Você consegue repetir a questão anterior para que seu código
// ordene qualquer quantidade de valores passado?


int main() {
    
    int n, i, j, temp;
    int valores[n];
    
    printf("Digite a quantidade de valores que deseja ordenar:");
    scanf("%d",&n);

    for (i=0;i<(n-1); i++) {
       
        printf("Digite o valor: %d",i);  
        
            for (j=0;j<(n-1)-i; j++) {

                temp = valores[j];
                valores[j] = valores[j+1];
                valores[j+1] = temp;
             }
    
         }
       
         printf("Em ordem crescente:\n");
          
          for (i = 0; i < n; i++) {
             
             printf("%d\n", valores[i]);
    
          }
       
    return 0;

}