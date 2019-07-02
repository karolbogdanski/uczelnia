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
	;z: db "%d",0
	
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
	
	
	mov rdi, pytanie2
	xor rax, rax
	call printf
	
	mov rdi, format
	mov rsi, z
	mov rax, 0
	call scanf
	
	cmp eax, 0
	jz error
	
	xor rdi, rdi 
	mov rdi, [z]
	
	cmp rdi, 1
	jz dodawanie
	cmp rdi, 2
	jz odejmowanie 
	cmp rdi, 3
	jz mnozenie
	cmp rdi, 4
	jz dzielenie
	;cmp z, 5
	;jz shuffle
	
dodawanie:
	
	mov eax, [x]
	add eax, [y]
	
	jmp drukuj
	
odejmowanie:

	mov eax, [x]
	sub eax, [y]
	
	jmp drukuj
	
mnozenie:
	
	mov rax, [x]
	mov rbx, [y]
	mul rbx
	
	jmp drukuj
	
dzielenie:
	
	mov rax, [x]
	mov rbx, [y]
	xor rdx, rdx
	div rbx
	
	jmp drukuj_div
	
drukuj:
	
	mov rdi, napis 
	mov esi, [x]
	mov edx, [y]
	mov ecx, eax
	xor eax, eax
	call printf
	;jmp koniec
	jmp main
	
drukuj_div:
	mov rcx, rax
	mov rdi, napis_div
	mov esi, [x]
	mov r8, [y]
	xchg rdx, r8
	
	xor rax, rax
	call printf
	;jmp koniec
	jmp main
	
error:
	
	mov rdi, blad
	xor rax, rax
	call printf
	
koniec:
	ret
