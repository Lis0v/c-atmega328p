cmp-upl:
	avr-gcc -Os -DF_CPU=8000000 -mmcu=atmega328p -c main.c
	avr-gcc -DF_CPU=8000000 -mmcu=atmega328p -o main.elf main.o
	avr-objcopy -O ihex main.elf main.hex
	sudo avrdude -p atmega328p -c arduino -P /dev/ttyUSB0 -U flash:w:main.hex
	rm main.elf main.hex main.o
