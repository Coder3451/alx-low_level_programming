section .data
	hello db "Hello, Holberton", 0
	format db "%s", 10, 0

section .text
	extern printf

	global main
	section .text
main:
	sub rsp, 8	;Align stack
	mov rdi, format
	mov rsi, hello
	xor rax, rax	;Clear rax register
	call printf

	add rsp, 8	;Restore stack

	mov rax, 60	;syscall: exit
	xor rdi, rdi	;status: 0
	syscall
