CC=clang
CFLAGS=-Wall -O2
SRC=src
OBJ=obj

# Tüm nesne dosyaları
OBJS=$(OBJ)/topla.o $(OBJ)/cikar.o $(OBJ)/carp.o $(OBJ)/bol.o $(OBJ)/mod.o \
     $(OBJ)/mod_math.o $(OBJ)/power.o $(OBJ)/factorial.o $(OBJ)/fibonacci.o \
     $(OBJ)/gcd.o $(OBJ)/prime.o $(OBJ)/abs.o $(OBJ)/sqrt.o $(OBJ)/cbrt.o

all: hesap benchmark

# Hesap makinesi
hesap: $(OBJ)/main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ -lm

# Benchmark
benchmark: $(OBJ)/benchmark.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ -lm

# C kaynakları
$(OBJ)/main.o: $(SRC)/main.c | $(OBJ)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ)/benchmark.o: $(SRC)/benchmark.c | $(OBJ)
	$(CC) $(CFLAGS) -c $< -o $@

# Assembly kaynakları
$(OBJ)/%.o: $(SRC)/%.S | $(OBJ)
	$(CC) $(CFLAGS) -c $< -o $@

# obj klasörünü oluştur
$(OBJ):
	mkdir -p $(OBJ)

# Temizlik
clean:
	rm -rf $(OBJ) hesap benchmark
