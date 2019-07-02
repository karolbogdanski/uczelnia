global main
extern printf, scanf

section .data

	format: db "%d",0
	n1: db "koopsko",10,0
	n2: db "doopsko",10,0
	n3: db "poopsko",10,0
	n4: db "rzoopsko",10,0
	ndef: db "poka fiut",10,0
	tab: dq c1, c2, c3, c4, def

section .bss

	x: resd 1
	tab2: resd 20
	
section .text
main:

	mov rdx, tab
	mov rbx, tab2
	
	
	mov rcx, 0
	
pobierz:
	
	;cmp rcx, 5
	;je drukuj
	
	;inc rcx
	;push rcx
	
	;mov rdi, format
	;mov rsi, [x]
	;xor eax, eax
	;call scanf
	
	;pop rcx

	;mov eax, [x]
	;mov [tab2 + 4*rcx], eax
	
	;jmp pobierz
	
drukuj:

	cmp rcx, 5
	je koniec
	
	inc rcx
	jmp [rdx]
	
	;mov r12, 1
	
	;cmp [rbx + 4*rcx], r12
	;je [rdx]
	
	;cmp [rbx + 4*rcx], 2*r12d
	;je [rdx + 8]
	
	;cmp [rbx + 4*rcx], 3*r12d
	;je [rdx + 2*8]
	
	;cmp [rbx + 4*rcx], 4*r12d
	;je [rdx + 3*8]
	
	
koniec:
	ret
	
	
c1:
	mov rdi, n1
	xor eax, eax
	call printf
	jmp drukuj
c2:
	mov rdi, n2
	xor eax, eax
	call printf
	jmp drukuj
c3:
	mov rdi, n3
	xor eax, eax
	call printf
	jmp drukuj
c4:
	mov rdi, n4
	xor eax, eax
	call printf
	jmp drukuj
	
def:
	mov rdi, ndef
	xor eax, eax
	call printf
	jmp drukuj
