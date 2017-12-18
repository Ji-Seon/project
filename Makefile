INC_DIR=../include

EXEC := main #name of executable created
SRC := $(wildcard *.cpp) # Finds all .cpp matching files
OBJS := $(patsubst %.cpp,%.o,$(SRC)) # Finds all obj created by .cpp and .o files from SRC

#This line generate by Intel Line Link Advisor
MKL_LINK_LINE= -L$(TACC_MKL_LIB) -Wl,--no-as-needed -lmkl_intel_ilp64 -lmkl_sequential -lmkl_core -lpthread -lm -ldl

LDFLAGS=-L$(TACC_GRVY_LIB) -L$(TACC_GSL_LIB) -lgrvy -lgsl $(MKL_LINK_LINE)
CFLAGS=-Wall -fopenmp #Wall shows all possible warnings
CC := icpc #intel compiler
INC := -I$(INC_DIR) -I$(TACC_GSL_INC) -I$(TACC_GRVY_INC)
#list all OBJS here :) - corresponds to all .cpp files
# OBJS=main.o progopt.o simple.o datatypes.o dumpsolution.o charged.o

CFLAGS := -O3

debug: CFLAGS += -g -O0

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(INC) -I$(INC_DIR) $(LDFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) $(INC) -c $<

main.o class_def.o: class_def.hpp

.PHONY: clobber clean neat echo
clobber: clean
	$(RM) $(EXEC)

# Clean deletes the current executable and any object files attributed
clean: neat
	rm -f $(OBJ)

neat:
	$(RM) *~ .*~

echo:
	@echo $(OBJ)
