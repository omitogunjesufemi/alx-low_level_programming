	global main
	extern printf

	section .text
main:
	xor rax, rax
	mov rdi, message
	call printf

	section .data
message: 	db	"Hello, Hoberton", 10
