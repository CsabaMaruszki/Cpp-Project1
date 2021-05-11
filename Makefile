OBJS = FileName.o MainBlock.o Menu.o ReadFromFile.o Add.o WriteToFile.o ModifyRecord.o DeleteRecord.o Overwrite.o
SOURCE = FileName.cpp MainBlock.cpp Menu.cpp ReadFromFile.cpp Add.cpp WriteToFile.cpp ModifyRecord.cpp DeleteRecord.cpp Overwrite.cpp
HEADER = FileName.h Menu.h ReadFromFile.h Add.h WriteToFile.h ModifyRecord.h DeleteRecord.h Overwrite.h
OUT = runprogram
CC = g++

exec: $(OBJS)
	$(CC) $(OBJS) -o $(OUT)

MainBlock.o: MainBlock.cpp
	$(CC) -c MainBlock.cpp

FileName.o: FileName.cpp
	$(CC) -c FileName.cpp

Menu.o: Menu.cpp
	$(CC) -c Menu.cpp

ReadFromFile.o: ReadFromFile.cpp
	$(CC) -c ReadFromFile.cpp

Add.o: Add.cpp
	$(CC) -c Add.cpp

WriteToFile.o: WriteToFile.cpp
	$(CC) -c WriteToFile.cpp

ModifyRecord.o: ModifyRecord.cpp
	$(CC) -c ModifyRecord.cpp

DeleteRecord.o: DeleteRecord.cpp
	$(CC) -c DeleteRecord.cpp

Overwrite.o: Overwrite.cpp
	$(CC) -c Overwrite.cpp