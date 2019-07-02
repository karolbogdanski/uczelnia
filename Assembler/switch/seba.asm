global main 
extern printf
extern atoi 

section .data

str_1: db "jeden",10,0
str_5: db "piec",10,0
str_8: db "osiem",10,0
str_11: db "jedenascie",10,0
str_def: db "reszta",10,0


table_jmp: dq c1,def,def,def,c5,def,def,c8,def,def,c11 ; 8 bajtow a potem 0 1 2 3 4 etc

section .bss

section .text

main:

cmp edi,2 ; int main(int argc, char** argv), gdzie argc=edi, zas argv to rsi
jne koniec
mov rdi,[rsi+8] ;rdi=dlugi adres, adres drugiego elementu argv
call atoi ;zwraca wartosc typu int w eax

cmp eax,11
ja def

cmp eax,1
jb def

sub eax,1 ;piewrszy wariant to te dwie linijki
jmp [table_jmp+8*eax]

; drugi wariant to: bez sub, zas druga linijka to "jmp[table_jmp+8*eax-8]"

c1:
mov rdi,str_1
jmp brk

c5:
mov rdi,str_5
jmp brk

c8:
mov rdi,str_8
jmp brk

c11:
mov rdi,str_11
jmp brk

def:
mov rdi,str_def

brk:
xor eax,eax
call printf

koniec:

mov	rax,1			;SYS_EXIT
mov	rbx,0
int	80h
