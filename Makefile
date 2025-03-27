
CC := gcc
CFLAGS := -Wall -Wextra -Werror

FOOTBALL_EXE := football.exe
TEMPERATURE_EXE := temperature.exe

FOOTBALL_SRC := football_main.c football.c
TEMPERATURE_SRC := temperature_main.c temperature.c

FOOTBALL_HEADERS := football.h
TEMPERATURE_HEADERS := temperature.h

all: $(FOOTBALL_EXE) $(TEMPERATURE_EXE)

$(FOOTBALL_EXE): $(FOOTBALL_SRC) $(FOOTBALL_HEADERS)
	$(CC) $(CFLAGS) -o $(FOOTBALL_EXE) $(FOOTBALL_SRC)

$(TEMPERATURE_EXE): $(TEMPERATURE_SRC) $(TEMPERATURE_HEADERS)
	$(CC) $(CFLAGS) -o $(TEMPERATURE_EXE) $(TEMPERATURE_SRC)

clean:
	rm -f $(FOOTBALL_EXE) $(TEMPERATURE_EXE)