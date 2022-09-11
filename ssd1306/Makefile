upload:
	avr-gcc -Os -mmcu=atmega328p -c main.c
	avr-gcc -mmcu=atmega328p -o main.elf main.o
	avr-objcopy -O ihex main.elf main.hex
	sudo avrdude -p m328p -c arduino -P /dev/ttyUSB0 -U flash:w:main.hex
	rm main.elf main.hex main.o
