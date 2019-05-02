# makefile do projeto corrida de sapos
project_name = bin/ex

# Arquivos .o
o_archives = build/main.o build/Funcionario.o build/Animal.o build/Tratador.o build/Veterinario.o build/Peixe.o build/Mamifero.o build/Anfibio.o build/date.o build/Reptil.o build/Ave.o build/Inseto.o build/Aracnideo.o build/PeixeNativo.o build/PeixeExotico.o build/AnfibioNativo.o build/AnfibioExotico.o build/MamiferoNativo.o build/MamiferoExotico.o build/ReptilNativo.o build/ReptilExotico.o build/AveNativa.o build/AveExotica.o build/InsetoNativo.o build/InsetoExotico.o build/AracnideoExotico.o build/AracnideoNativo.o build/AnimalSilvestre.o build/AnimalNativo.o build/AnimalExotico.o

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

build/Funcionario.o: src/Funcionario/Funcionario.cpp
	$(cc) $(CC_FLAGS) src/Funcionario/Funcionario.cpp -c && mv Funcionario.o build

build/Animal.o: src/Animais/Animal.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animal.cpp -c && mv Animal.o build

build/Tratador.o: src/Funcionario/Tratador.cpp
	$(cc) $(CC_FLAGS) src/Funcionario/Tratador.cpp -c && mv Tratador.o build
	
build/Veterinario.o: src/Funcionario/Veterinario.cpp
	$(cc) $(CC_FLAGS) src/Funcionario/Veterinario.cpp -c && mv Veterinario.o build

build/Peixe.o: src/Animais/Animais\ Domesticos/Peixe.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Domesticos/Peixe.cpp -c && mv Peixe.o build

build/Mamifero.o: src/Animais/Animais\ Domesticos/Mamifero.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Domesticos/Mamifero.cpp -c && mv Mamifero.o build

build/Anfibio.o: src/Animais/Animais\ Domesticos/Anfibio.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Domesticos/Anfibio.cpp -c && mv Anfibio.o build

build/date.o: src/Animais/date.cpp
	$(cc) $(CC_FLAGS) src/Animais/date.cpp -c && mv date.o build

build/Reptil.o: src/Animais/Animais\ Domesticos/Reptil.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Domesticos/Reptil.cpp -c && mv Reptil.o build

build/Ave.o: src/Animais/Animais\ Domesticos/Ave.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Domesticos/Ave.cpp -c && mv Ave.o build

build/Inseto.o: src/Animais/Animais\ Domesticos/Inseto.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Domesticos/Inseto.cpp -c && mv Inseto.o build

build/Aracnideo.o: src/Animais/Animais\ Domesticos/Aracnideo.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Domesticos/Aracnideo.cpp -c && mv Aracnideo.o build

build/PeixeNativo.o: src/Animais/Animais\ Silvestres/PeixeNativo.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/PeixeNativo.cpp -c && mv PeixeNativo.o build

build/PeixeExotico.o: src/Animais/Animais\ Silvestres/PeixeExotico.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/PeixeExotico.cpp -c && mv PeixeExotico.o build

build/AnfibioNativo.o: src/Animais/Animais\ Silvestres/AnfibioNativo.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/AnfibioNativo.cpp -c && mv AnfibioNativo.o build

build/AnfibioExotico.o: src/Animais/Animais\ Silvestres/AnfibioExotico.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/AnfibioExotico.cpp -c && mv AnfibioExotico.o build

build/MamiferoNativo.o: src/Animais/Animais\ Silvestres/MamiferoNativo.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/MamiferoNativo.cpp -c && mv MamiferoNativo.o build

build/MamiferoExotico.o: src/Animais/Animais\ Silvestres/MamiferoExotico.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/MamiferoExotico.cpp -c && mv MamiferoExotico.o build

build/ReptilNativo.o: src/Animais/Animais\ Silvestres/ReptilNativo.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/ReptilNativo.cpp -c && mv ReptilNativo.o build

build/ReptilExotico.o: src/Animais/Animais\ Silvestres/ReptilExotico.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/ReptilExotico.cpp -c && mv ReptilExotico.o build

build/AveNativa.o: src/Animais/Animais\ Silvestres/AveNativa.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/AveNativa.cpp -c && mv AveNativa.o build

build/AveExotica.o: src/Animais/Animais\ Silvestres/AveExotica.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/AveExotica.cpp -c && mv AveExotica.o build

build/InsetoNativo.o: src/Animais/Animais\ Silvestres/InsetoNativo.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/InsetoNativo.cpp -c && mv InsetoNativo.o build

build/InsetoExotico.o: src/Animais/Animais\ Silvestres/InsetoExotico.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/InsetoExotico.cpp -c && mv InsetoExotico.o build

build/AracnideoNativo.o: src/Animais/Animais\ Silvestres/AracnideoNativo.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/AracnideoNativo.cpp -c && mv AracnideoNativo.o build

build/AracnideoExotico.o: src/Animais/Animais\ Silvestres/AracnideoExotico.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/AracnideoExotico.cpp -c && mv AracnideoExotico.o build

build/AnimalSilvestre.o: src/Animais/Animais\ Silvestres/AnimalSilvestre.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/AnimalSilvestre.cpp -c && mv AnimalSilvestre.o build

build/AnimalNativo.o: src/Animais/Animais\ Silvestres/AnimalNativo.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/AnimalNativo.cpp -c && mv AnimalNativo.o build

build/AnimalExotico.o: src/Animais/Animais\ Silvestres/AnimalExotico.cpp
	$(cc) $(CC_FLAGS) src/Animais/Animais\ Silvestres/AnimalExotico.cpp -c && mv AnimalExotico.o build

ex: $(project_name)
	./bin/ex

#Remove os arquivos .o da pasta
clean:
	rm -rf build/*.o