void vendas (float valor, int parcelas)
{
	int i;
	float total = valor, juros;
	if (parcelas <= 0)
	{
		printf("Erro");
	}
	else if (parcelas == 1)
	{
		total -= ((valor/100) * 10)
		printf("Total: %f", total);
		printf("Comissao: %f", (valor/100) * 7);
	}
	else 
	{
		juros = ((valor/100) * 5)
		for(i=0; i < parcelas ; i++)
		{
			total += juros
			printf("Parcela %d: %f", i,total);
		}
	}
}

