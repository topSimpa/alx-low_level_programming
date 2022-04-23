segment .data

fmt:   db    "Hello, Holberton",0x0a,0

segment .text
global main
extern printf

main:
	push	rbp
	mov	rbp,	rsp
	lea	rdi,	[fmt]
	xor	eax, 	eax
	call	printf
	xor	eax,	eax
	pop	rbp
	ret
