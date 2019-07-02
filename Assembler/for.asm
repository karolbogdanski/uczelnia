extern printf, scanf
global main

section .data

znak: db "x",0
format: db "%d",0
endl: db 10

section .bss

licznik: resd 1

section .text
main:

	xor eax, eax

	mov rdi, format
	mov rsi, licznik
	xor eax, eax
	call scanf
	
	mov ebx, [licznik]
	mov r12d, [licznik]
	jmp for2

for1:
	dec r12d
	mov ebx, r12d
	cmp r12d, 0
	jnz nline
	je koniec
	
for2:
	
	mov ecx, 0
	cmp ecx, ebx
	jz for1
	
	mov rdi, znak
	xor eax, eax
	call printf

	dec ebx
	jmp for2
	
nline:
	mov rdi, endl
	xor eax, eax
	call printf
	jmp for2
	
koniec:
	ret
