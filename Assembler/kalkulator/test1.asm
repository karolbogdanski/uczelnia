extern scanf
extern printf
global main

section .data
	
	format: db "%d",0
	napis_div: db "Pierwsza liczba: %d Druga liczba: %d Dzielenie: %d Reszta: %d",10,0
	napis: db "Pierwsza liczba: %d Druga liczba: %d Wynik: %d",10,0
	pytanie1: db "Podaj dwie liczby",10,0
	pytanie2: db "Co chcesz z nimi zrobić? Wybierz liczbę: 1-dodać, 2-odjąć, 3-pomnożyć, 4-podzielić, 5 tryb rumble",10,0
	blad: db "An error has occured.",10,0
	
section .bss
	
	x: resd 1
	y: resd 1
	z: resd 1

section .text

main:

	xor rax, rax ;istotne, 

	mov rdi, pytanie1
	call printf

	mov rdi, format
	mov rsi, x
	mov rax, 0
	call scanf
	
	cmp rax, 0
	jz error
	
	mov rdi, format
	mov rsi, y
	mov rax, 0
	call scanf
	
	cmp rax, 0
	jz error
	
	;xor rdi, rdi nieistotne
	mov rdi, pytanie2
	xor rax, rax
	call printf
	
error:
	mov rdi, blad
	xor rax, rax
	call printf
	
koniec:

	ret
