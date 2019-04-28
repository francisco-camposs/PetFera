# makefile do projeto corrida de sapos
project_name = bin/ex

# Arquivos .o
o_archives = build/main.o build/Funcionario.o build/Animal.o build/Tratador.o build/Veterinario.o build/Mamifero.o

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

ex: $(project_name)
	./bin/ex

#Remove os arquivos .o da pasta
clean:
	rm -rf build/*.o