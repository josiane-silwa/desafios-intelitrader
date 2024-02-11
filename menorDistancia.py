#// declaracao dos variaveis e vetores
a = [];
b = [];
ni = 0;

print("Digite 20 numeros: \n");
#// reacebendo os numeros digitados e armazenando nos vetores
while(ni <= 20):
    a.append(int(input([ni])));
    b.append(int(input([ni])));
    ni = ni+1;

print(a);
print(b);

print("Calcula distancia entre os arrays...");

m = [];
for n in range(0, len(a)):
    # sempre subtraindo o menor do maior evitando numero negativo
    if(a[n] > b[n]):
        a1 = a[n] - b[n];
        m.append(a1);
    else:
        a1 = b[n] - a[n];
        m.append(a1);

print(m);

print("Separa a menor distancia entre os arrays");
#// aqui é assumido que o menor valor é o primeiro elemento de m[0], armazenado em min
#// todos os elementos sao comparados com min e max,
#// se o valor for menor que o anterior, ele passa a ser o atual
#// da mesma forma com o menor valor, é comparado e substituido
#// até chegar no menor 
min = m[0];
max = 0;

for i in range(0, len(m)):
    if(m[i] > max):
        max = m[i];
    elif(m[i] < min):
        min = m[i];

print(f'min: {min}');
print(f'max: {max}');

