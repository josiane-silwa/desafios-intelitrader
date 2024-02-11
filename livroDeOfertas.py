#// declaracao dos variaveis e vetores
i = 0;
pos = [];
val = [];
qtd = [];

tam = int(input('Informe total de notificaçoes a serem registradas: '));
#print(tam);

#/// leitura dos dados digitados pelo usuario 
#// e preenchimento dos vetores
#// posicao,  valor e quantidade
while (i < tam):
    pos.append(int(input('\n Informe posicao: ')));
    #print(pos);
    val.append(float(input('Informe valor: ')));
    #print(val);
    qtd.append(int(input('Informe quantidade: ')));
    #print(qtd);
    i=i+1;

print(f'\n\n Total de notificações: {tam}');
print("Posicao   Valor   Quantidade");
for i in range(tam):
    print(f'   {pos[i]},      {val[i]},        {qtd[i]} ');