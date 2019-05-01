# makefile do projeto corrida de sapos
project_name = bin/ex

# Arquivos .o
o_archives = build/main.o build/Funcionario.o build/Animal.o build/Tratador.o build/Veterinario.o build/Mamifero.o build/Anfibio.o build/date.o build/Reptil.o build/Ave.o build/AnfibioNativo.o build/AnfibioExotico.o build/MamiferoNativo.o build/MamiferoExotico.o build/ReptilNativo.o build/ReptilExotico.o build/AveNativa.o build/AveExotica.o build/AnimalSilvestre.o

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

build/Anfibio.o: src/Anfibio.cpp
	$(cc) $(CC_FLAGS) src/Anfibio.cpp -c && mv Anfibio.o build

build/date.o: src/date.cpp
	$(cc) $(CC_FLAGS) src/date.cpp -c && mv date.o build

build/Reptil.o: src/Reptil.cpp
	$(cc) $(CC_FLAGS) src/Reptil.cpp -c && mv Reptil.o build

build/Ave.o: src/Ave.cpp
	$(cc) $(CC_FLAGS) src/Ave.cpp -c && mv Ave.o build

build/AnfibioNativo.o: src/AnfibioNativo.cpp
	$(cc) $(CC_FLAGS) src/AnfibioNativo.cpp -c && mv AnfibioNativo.o build

build/AnfibioExotico.o: src/AnfibioExotico.cpp
	$(cc) $(CC_FLAGS) src/AnfibioExotico.cpp -c && mv AnfibioExotico.o build

build/MamiferoNativo.o: src/MamiferoNativo.cpp
	$(cc) $(CC_FLAGS) src/MamiferoNativo.cpp -c && mv MamiferoNativo.o build

build/MamiferoExotico.o: src/MamiferoExotico.cpp
	$(cc) $(CC_FLAGS) src/MamiferoExotico.cpp -c && mv MamiferoExotico.o build

build/ReptilNativo.o: src/ReptilNativo.cpp
	$(cc) $(CC_FLAGS) src/ReptilNativo.cpp -c && mv ReptilNativo.o build

build/ReptilExotico.o: src/ReptilExotico.cpp
	$(cc) $(CC_FLAGS) src/ReptilExotico.cpp -c && mv ReptilExotico.o build

build/AveNativa.o: src/AveNativa.cpp
	$(cc) $(CC_FLAGS) src/AveNativa.cpp -c && mv AveNativa.o build

build/AveExotica.o: src/AveExotica.cpp
	$(cc) $(CC_FLAGS) src/AveExotica.cpp -c && mv AveExotica.o build

build/AnimalSilvestre.o: src/AnimalSilvestre.cpp
	$(cc) $(CC_FLAGS) src/AnimalSilvestre.cpp -c && mv AnimalSilvestre.o build


ex: $(project_name)
	./bin/ex

#Remove os arquivos .o da pasta
clean:
	rm -rf build/*.o