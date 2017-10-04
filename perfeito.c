int perfeito (int numero)
{
    int soma =0,i;

    for (i=1; i < ((n/2)+1);i++)
    {
        if((numero%i) == 0)
               soma = soma+i;        
    }      
    if (soma == numero){      
       return 1;
    return 0;
}

int main ()
{
   int res, num = 28;
   res = perfeito(num);
   if (res == 1)
   {
      printf("%d e um numero perfeito",num);
   }
   else
   {
      printf("%d nao e um numero perfeito",num);
   }
   
   return 0;
}
