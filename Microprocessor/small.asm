              .model small
              .data
              .code
              main proc
                mov ah,1
                int 21h
                mov dl,al
                sub dl,32
                mov ah,2
                int 21h
                main endp
              end