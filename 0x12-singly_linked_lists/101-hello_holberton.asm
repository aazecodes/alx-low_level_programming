	extern printf

	section .data
	msg db "Hello, Holberton", 10, 0
	section .text
	global main

	main:
	sub rsp, 8
	mov edi, msg
	xor eax, eax
	call printf
	add rsp, 8
	xor eax, eax
	ret
