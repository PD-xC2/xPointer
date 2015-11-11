#include<stdio.h>
#include<string.h>    
#include<sys/socket.h>
#include<arpa/inet.h> 
#include<unistd.h>    
 
int main(int argc , char *argv[])
{
    int socket_desc , client_sock , c , read_size;
    struct sockaddr_in server , client;
    char client_message[2000];
     
    //Crear socket
    socket_desc = socket(AF_INET , SOCK_STREAM , 0);
    if (socket_desc == -1)
    {
        printf("No se pudo crear socket");
    }
    puts("Socket creado");
     
    //Preparar socket
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons( 8888 );//puerto
     
   
    if( bind(socket_desc,(struct sockaddr *)&server , sizeof(server)) < 0)
    {
        //mensaje de error
        perror("No se pudo crear bind");
        return 1;
    }
    puts("Bind creado");
     
    //Recibir
    listen(socket_desc , 3);
     
    //Aceptar conexión
    puts("Esperando conexión..............");
    c = sizeof(struct sockaddr_in);
     
    //Aceptar connection de un cliente
    client_sock = accept(socket_desc, (struct sockaddr *)&client, (socklen_t*)&c);
    if (client_sock < 0)
    {
        perror("Conexión fallida");
        return 1;
    }
    puts("Conexión aceptada");
     
    //Recibe mensaje de cliente
    while( (read_size = recv(client_sock , client_message , 2000 , 0)) > 0 )
    {
        //Envía mensaje al cliente
        write(client_sock , client_message , strlen(client_message));
    }
     
    if(read_size == 0)
    {
        puts("Cliente se desconectó");
        fflush(stdout);
    }
    else if(read_size == -1)
    {
        perror("Recepción fallida");
    }
     
    return 0;
}
