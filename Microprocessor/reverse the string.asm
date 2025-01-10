
.model small
.stack
.data
.code
main proc
    mov ax,@data
    mov ds,ax
    mov cx,0h 
    
   
    
    read_char:
    mov ah,01h
    int 21h
    cmp al,0dh
    
    je end:
    push ax
    inc cx
    jmp read_char
   
   end:
   pop dx
   mov ah,02h
   int 21h
   loop end
   mov ax,4c00h
   int 21h
   main endp
end main