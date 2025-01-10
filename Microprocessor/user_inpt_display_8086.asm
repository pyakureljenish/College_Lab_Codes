include 'emu8086.inc' 
.model small
.stack 100h
.data
inpt db 10 dup(?)
.code
main proc
    mov ax,@data
    mov ds,ax
    mov cx,10
    
    print "enter 10 numbers:"
     
     
   input:
   mov ah,01 
   int 21h
   mov [si] ,al
   inc si
   loop input  
   
   mov ah,2
   mov dl,10
   int 21h
   mov dl,13
   int 21h
   
   mov cx,10
   mov si,offset inpt
   print "your number is:"
   output:
   mov dl,[si]
   mov ah,2
   int 21h
   inc si
    loop output 
    
endp
end main
   
                        