section .data
	format db "Hello, Holberton", 10, 0

section .text
	global main
	extern printf

main:
	sub rsp, 8
	mov rdi, format
	call printf

	add rsp, 8
	ret
