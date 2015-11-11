#include<stdio.h> 
#include<string.h>    
#include<sys/socket.h>    
#include<arpa/inet.h> 
 
int main(int argc , char *argv[])
{
    int sock;
    struct sockaddr_in server;
    char message[1000] , server_reply[2000];
     
    //Crear socket
    sock = socket(AF_INET , SOCK_STREAM , 0);
    if (sock == -1)
    {
        printf("No se pudo crear el socket");
    }
    puts("Socket creado");
     
    server.sin_addr.s_addr = inet_addr("127.0.0.1");//direccion ip
    server.sin_family = AF_INET;
    server.sin_port = htons( 8888 );//puerto
 
    //conectar con server remoto
    if (connect(sock , (struct sockaddr *)&server , sizeof(server)) < 0)
    {
        perror("Conexión fallida");
        return 1;
    }
     
    puts("Conectado\n");
     
    //mantener comunicación con server
    while(1)
    {
        printf("Mensaje : ");
        scanf("%s" , message);
         
        //enviar datos
        if( send(sock , message , strlen(message) , 0) < 0)
        {
            puts("Envío fallido");
            return 1;
        }
         
        //recepción de respuesta
        if( recv(sock , server_reply , 2000 , 0) < 0)
        {
            puts("Recepción fallida");
            break;
        }
         
        puts("Respueste del server:");
        puts(server_reply);
    }
     
    //close(sock); Si se agrega este comando no compila (no se porqué)
    return 0;
}

