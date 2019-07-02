global main
extern printf
extern atoi

section .data

	str1: db "jeden",10,0 
	str5: db "piec",10,0 
	str8: db "osiem",10,0 
	str11: db "jedenascie",10,0 
	strdef: db "sekcja domyslna",10,0 
	table_jmp: dq c1, def, def, def, c5, def, def, c8, def, def, c11

section .text

main:

	cmp edi, 2   ;int main(int argc, char** argv) gdzie arc= edi argv = rsi
	jne koniec
	mov rdi, [rsi+8] ;adres drugiego elementu *argv
	call atoi ;zwraca wart typu int w eax
	
	cmp eax, 11
	ja def
	
	cmp eax, 1
	jb def
	
	sub eax, 1 ;pierwszy wariant to te dwie linijki 
	jmp [table_jmp+8*eax]
	
	; drugi wariant to: bez sub,  zas druga linijka to "jmo[table_jmp=8*eax-8]"
	
c1:
	mov rdi, str1
	jmp brk
	
c5:
	mov rdi, str5
	jmp brk	
	
c8:
	mov rdi, str8
	jmp brk	
c11:
	mov rdi, str11
	jmp brk
	
def:
	mov rdi, strdef
	
brk:
	xor eax, eax 
	call printf
	
koniec:

	mov eax, 1
	mov rbx, 0
	int 80h
