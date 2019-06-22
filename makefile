# makefile do projeto corrida de sapos
project_name = bin/ex

# Arquivos .o
o_archives = build/main.o build/Funcionario.o build/Animal.o build/Tratador.o\
			 build/Veterinario.o build/Mamifero.o build/Anfibio.o build/Aracnideo.o build/date.o\
			 build/Reptil.o build/Ave.o build/Inseto.o build/Peixe.o build/AnfibioDomestico.o build/AnfibioNativo.o\
			 build/AnfibioExotico.o build/AracnideoDomestico.o build/AracnideoNativo.o\
			 build/AracnideoExotico.o build/InsetoDomestico.o build/InsetoNativo.o\
			 build/InsetoExotico.o build/MamiferoDomestico.o build/MamiferoNativo.o\
			 build/MamiferoExotico.o build/PeixeDomestico.o build/PeixeNativo.o\
			 build/PeixeExotico.o build/ReptilDomestico.o build/ReptilNativo.o \
			 build/ReptilExotico.o build/AveDomestica.o build/AveNativa.o build/AveExotica.o \
			 build/AnimalDomestico.o build/AnimalSilvestre.o build/AnimalNativo.o build/AnimalExotico.o \
			 build/Controle.o build/Tratamento.o build/TratamentoInput.o

# Compilador
cc=g++

# flags/ etiquetas para o Compilador
CC_FLAGS=-O0         \
         -Wall       \
         -g          \
         -std=c++11  \
         -I include

text = 	"Como executar o programa: ./ex"

#Os objetivos all, main.o e Sapo.o são para a compilação
all: $(project_name)
	@echo $(text)

$(project_name): $(o_archives)
	$(cc) $(CC_FLAGS) $(o_archives) -o $(project_name)

build/main.o: src/main.cpp
	$(cc) $(CC_FLAGS) src/main.cpp -c && mv main.o build

build/Funcionario.o: src/Funcionario.cpp
	$(cc) $(CC_FLAGS) src/Funcionario.cpp -c && mv Funcionario.o build

build/Animal.o: src/Animal.cpp
	$(cc) $(CC_FLAGS) src/Animal.cpp -c && mv Animal.o build

build/Tratador.o: src/Tratador.cpp
	$(cc) $(CC_FLAGS) src/Tratador.cpp -c && mv Tratador.o build
	
build/Veterinario.o: src/Veterinario.cpp
	$(cc) $(CC_FLAGS) src/Veterinario.cpp -c && mv Veterinario.o build

build/Mamifero.o: src/Mamifero.cpp
	$(cc) $(CC_FLAGS) src/Mamifero.cpp -c && mv Mamifero.o build

build/Inseto.o: src/Inseto.cpp
	$(cc) $(CC_FLAGS) src/Inseto.cpp -c && mv Inseto.o build

build/Anfibio.o: src/Anfibio.cpp
	$(cc) $(CC_FLAGS) src/Anfibio.cpp -c && mv Anfibio.o build

build/Aracnideo.o: src/Aracnideo.cpp
	$(cc) $(CC_FLAGS) src/Aracnideo.cpp -c && mv Aracnideo.o build

build/date.o: src/date.cpp
	$(cc) $(CC_FLAGS) src/date.cpp -c && mv date.o build

build/Reptil.o: src/Reptil.cpp
	$(cc) $(CC_FLAGS) src/Reptil.cpp -c && mv Reptil.o build

build/Ave.o: src/Ave.cpp
	$(cc) $(CC_FLAGS) src/Ave.cpp -c && mv Ave.o build

build/Peixe.o: src/Peixe.cpp
	$(cc) $(CC_FLAGS) src/Peixe.cpp -c && mv Peixe.o build

build/AnfibioDomestico.o: src/AnfibioDomestico.cpp
	$(cc) $(CC_FLAGS) src/AnfibioDomestico.cpp -c && mv AnfibioDomestico.o build

build/AnfibioNativo.o: src/AnfibioNativo.cpp
	$(cc) $(CC_FLAGS) src/AnfibioNativo.cpp -c && mv AnfibioNativo.o build

build/AnfibioExotico.o: src/AnfibioExotico.cpp
	$(cc) $(CC_FLAGS) src/AnfibioExotico.cpp -c && mv AnfibioExotico.o build

build/AracnideoDomestico.o: src/AracnideoDomestico.cpp
	$(cc) $(CC_FLAGS) src/AracnideoDomestico.cpp -c && mv AracnideoDomestico.o build

build/AracnideoNativo.o: src/AracnideoNativo.cpp
	$(cc) $(CC_FLAGS) src/AracnideoNativo.cpp -c && mv AracnideoNativo.o build

build/AracnideoExotico.o: src/AracnideoExotico.cpp
	$(cc) $(CC_FLAGS) src/AracnideoExotico.cpp -c && mv AracnideoExotico.o build

build/InsetoDomestico.o: src/InsetoDomestico.cpp
	$(cc) $(CC_FLAGS) src/InsetoDomestico.cpp -c && mv InsetoDomestico.o build

build/InsetoNativo.o: src/InsetoNativo.cpp
	$(cc) $(CC_FLAGS) src/InsetoNativo.cpp -c && mv InsetoNativo.o build

build/InsetoExotico.o: src/InsetoExotico.cpp
	$(cc) $(CC_FLAGS) src/InsetoExotico.cpp -c && mv InsetoExotico.o build

build/MamiferoDomestico.o: src/MamiferoDomestico.cpp
	$(cc) $(CC_FLAGS) src/MamiferoDomestico.cpp -c && mv MamiferoDomestico.o build

build/MamiferoNativo.o: src/MamiferoNativo.cpp
	$(cc) $(CC_FLAGS) src/MamiferoNativo.cpp -c && mv MamiferoNativo.o build

build/MamiferoExotico.o: src/MamiferoExotico.cpp
	$(cc) $(CC_FLAGS) src/MamiferoExotico.cpp -c && mv MamiferoExotico.o build

build/PeixeDomestico.o: src/PeixeDomestico.cpp
	$(cc) $(CC_FLAGS) src/PeixeDomestico.cpp -c && mv PeixeDomestico.o build

build/PeixeNativo.o: src/PeixeNativo.cpp
	$(cc) $(CC_FLAGS) src/PeixeNativo.cpp -c && mv PeixeNativo.o build

build/PeixeExotico.o: src/PeixeExotico.cpp
	$(cc) $(CC_FLAGS) src/PeixeExotico.cpp -c && mv PeixeExotico.o build

build/ReptilDomestico.o: src/ReptilDomestico.cpp
	$(cc) $(CC_FLAGS) src/ReptilDomestico.cpp -c && mv ReptilDomestico.o build

build/ReptilNativo.o: src/ReptilNativo.cpp
	$(cc) $(CC_FLAGS) src/ReptilNativo.cpp -c && mv ReptilNativo.o build

build/ReptilExotico.o: src/ReptilExotico.cpp
	$(cc) $(CC_FLAGS) src/ReptilExotico.cpp -c && mv ReptilExotico.o build

build/AveDomestica.o: src/AveDomestica.cpp
	$(cc) $(CC_FLAGS) src/AveDomestica.cpp -c && mv AveDomestica.o build

build/AveNativa.o: src/AveNativa.cpp
	$(cc) $(CC_FLAGS) src/AveNativa.cpp -c && mv AveNativa.o build

build/AveExotica.o: src/AveExotica.cpp
	$(cc) $(CC_FLAGS) src/AveExotica.cpp -c && mv AveExotica.o build

build/AnimalDomestico.o: src/AnimalDomestico.cpp
	$(cc) $(CC_FLAGS) src/AnimalDomestico.cpp -c && mv AnimalDomestico.o build

build/AnimalSilvestre.o: src/AnimalSilvestre.cpp
	$(cc) $(CC_FLAGS) src/AnimalSilvestre.cpp -c && mv AnimalSilvestre.o build

build/AnimalNativo.o: src/AnimalNativo.cpp
	$(cc) $(CC_FLAGS) src/AnimalNativo.cpp -c && mv AnimalNativo.o build

build/AnimalExotico.o: src/AnimalExotico.cpp
	$(cc) $(CC_FLAGS) src/AnimalExotico.cpp -c && mv AnimalExotico.o build

build/Controle.o: src/Controle.cpp
	$(cc) $(CC_FLAGS) src/Controle.cpp -c && mv Controle.o build

build/Tratamento.o: src/Tratamento.cpp
	$(cc) $(CC_FLAGS) src/Tratamento.cpp -c && mv Tratamento.o build

build/TratamentoInput.o: src/TratamentoInput.cpp
	$(cc) $(CC_FLAGS) src/TratamentoInput.cpp -c && mv TratamentoInput.o build


ex: $(project_name)
	./bin/ex

#Remove os arquivos .o da pasta
clean:
	rm -rf build/*.o

teste:
	rm -rf build/main.o