CC = g++
CXXFLAGS = -no-pie -Wall
DEPS = global.h

ODIR = obj

BIN = CMDQuest

_OBJ = main.o global.o explore.o computer.o items.o weapons.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CXXFLAGS)

CMDQuest: $(OBJ)
	$(CC) -o $@ $^ $(CXXFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(BIN)
