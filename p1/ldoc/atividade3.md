# Envio de Respostas - Capítulo 4 - Respostas às questões (1 a 10)

1. Quantos bytes podem ser armazenados nessa memória?
> Pela resposta do colega, pude ver que o barramento de endereços tem 12 bits. Logo, para obtermos a quantidade de células, calculamos 2^12 = 4096. Cada uma delas armazena 16 bits (2 bytes = 2 * 8). Assim, calculamos as células vezes o número de bytes: 4096*2 = 8192 bytes, o equivalente a 8 KB.

2. O que é acesso à memória? Caracterize o tempo de acesso.
> O acesso à memória consiste na leitura ou escrita de informações na memória de um computador. Esse processo tem um tempo específico necessário para acontecer, e esse é chamado de "tempo de acesso"; para efeito de comparação: SSDs tendem a ser ultra-rápidos, enquanto a RAM é mais lenta.

3. Quais operações podem ser realizadas em uma memória?
> Leitura (busca de dados e/ou informações já armazenados) e escrita (gravação de dados e/ou informações na memória).

4. Qual a diferença entre SRAM e DRAM?
> Comparando-as, a:
> SRAM (Static Random Access Memory/Memória de Acesso Aleatório Estática): usa os circuitos eletrônicos flip flops para guardar cada bit de dado; não precisa de atualização constante enquanto estiver ligada à energia; é mais rápida mas também mais cara e com menor capacidade de armazenamento; é utilizada em memórias cache de processadores;
> DRAM (Dynamic Random Access Memory): usa um conjunto de um transistor e um capacitor para cada bit; precisa ser recarregada milhares de vezes por segundo para não perder os dados; é mais lenta que a SRAM mas é mais barata e permite alta densidade de memória; é utilizada como a memória RAM principal de computadores, notebooks e celulares.

5) Qual a diferença entre as organizações de memória?

A diferença entre as organizações de memória é calculada pelo número de endereços (células), o tamanho do conteúdo de cada célula (em bits) e o total de bits de armazenamento de cada uma.

a) Memória A - 32K células de 8 bits:

São 32.768 células, cada uma armazenando 8 bits. Precisa de 15 bits para os endereços e possui um total de 262.144 bits.

b) Memória B - 16K células de 16 bits:

São 16.384 células, cada uma armazenando 16 bits. Precisa de 14 bits para os endereços e possui um total de 262.144 bits.

c) Memória C - 16K células de 8 bits:

Também são 16.384 células, cada uma armazenando 8 bits. Precisa de 14 bits para os endereços e possui um total de 131.072 bits.

Assim, a memória C possui metade da capacidade das outras duas, ao passo que as memórias A e B têm capacidades iguais.

6) Qual a função do REM e do RDM?
O REM (Registrador de Endereços de Memória) especifica a posição física que será acessada enquanto o RDM (Registrador de Dados de Memória) guarda o conteúdo que será lido ou gravado naquela posição.

Ou seja, a função do REM é armazenar temporariamente o endereço de memória onde a CPU deseja ler ou gravar uma informação; e a do RDM é armazenar temporariamente o conteúdo (dado ou instrução) que acabou de ser lido da memória ou que está pronto para ser gravado nela.

7) Descreva os barramentos que interligam o processador e a memória principal.
I. Address Bus / Barramento de Endereços: é unidirecional e transporta o endereço da célula de memória que a CPU deseja acessar (seja para ler ou para gravar); 
II. Data Bus / Barramento de dados: é bidirecional e transporta a informação propriamente dita (os dados ou as instruções do programa) entre o processador e a memória; 
III. Control Bus / Barramento de controle: é misto/bidirecional em termos globais (pois engloba várias linhas com funções específicas de ida e volta) e transporta os sinais de sincronização e comando que coordenam a operação, garantindo que os componentes saibam exatamente o que fazer e quando fazer.

8) Descreva passo-a-passo uma operação de leitura.
I. CPU define o local: o endereço da memória é colocado no REM;
II. Envio do endereço: esse endereço viaja pelo Barramento de Endereços até a memória;
III. Ordem de leitura: a CPU envia o sinal de leitura (READ) pelo Barramento de Controle;
IV. Busca e envio: a memória localiza a célula, lê o conteúdo e o envia pelo Barramento de Dados;
V. Recebimento: a CPU captura a informação e a guarda no RDM.

9) Descreva passo-a-passo uma operação de escrita.
I. A CPU define o local e o dado: o endereço de destino é colocado no REM e o dado a ser gravado é colocado no RDM;
II. Envio das informações: o endereço viaja pelo Barramento de Endereços e o dado viaja pelo Barramento de Dados até a memória;
III. Ordem de escrita: a CPU envia o sinal de escrita (WRITE) pelo Barramento de Controle;
IV. Armazenamento: a memória recebe o sinal, localiza a célula indicada e grava nela o dado que estava no barramento;
V. Finalização: a CPU desativa o sinal de escrita, concluindo o ciclo de gravação.

10) Um computador possui RDM de 16 bits, REM de 20 bits e células de 8 bits.

a) Qual é o tamanho do barramento de endereços? O tamanho do barramento de endereços é de 20 bits, porque equivale à largura do REM.

b) Quantas células são lidas em uma única operação? São lidas 2 células em uma única operação. O RDM busca 16 bits por vez, e como cada célula tem 8 bits, 16/8 = 2 células.

c) Quantos bits tem a memória principal? Já que o REM de 20 bits permite endereçar 2^{20} = 1.048.576 células, se multiplicarmos pelo tamanho de cada célula, teremos 1.048.576 células * 8 bits = 8.388.608 bits totais (= 1024 KB = 1 MB).

