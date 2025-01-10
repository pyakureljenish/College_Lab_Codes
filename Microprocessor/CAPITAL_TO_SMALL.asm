 .model small
.stack 100h
.data
msg db 20 dup(?)
.code
main proc
    mov ax,@data
    mov ds,ax
    mov cx,10
    
    inp:
    
       mov ah,1 
   int 21h
   mov [si] ,al
   inc si
   loop inp
   
   
   mov bx,offset msg
   mov cx,10
   l1:
   cmp [bx],20h
   je e
   add [bx],32
   
   e: mov dx,[bx]
   mov ah,02
   int 21h
   inc bx
   loop l1
endp
end main