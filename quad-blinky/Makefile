upload:
	avr-gcc -Os -mmcu=atmega329p -df_CPU=2000000UL -c main.c
	avr-gcc -mmcu=atmega328p -df_CPU=2000000UL -o main.elf main.o
	avr-objcopy -O ihex main.elf main.hex
	sudo avrdude -p m328p -c arduino -P /dev/ttyUSB0 -U flash:w:main.hex:i
	rm main.elf main.hex main.o
