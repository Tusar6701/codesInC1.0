#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>

int main()
{ struct sockaddr_in serv,client;
	serv.sin_family = AF_INET;
	serv.sin_port = htons(6000);
	serv.sin_addr.s_addr = inet_addr("127.0.0.1");
	

	int fd,res;
	fd = socket(AF_INET,SOCK_STREAM,0);
	if(fd == -1)
		printf("socket is not created");
	else
		printf("socket is created");
	
	res = bind(fd,(struct sockaddr*)&serv,sizeof(serv));


	if(res == -1)
		printf("\nbind is not created\n");
	else
		printf("\nbind is created\n");
		
	listen(fd,5);
	int length=sizeof(client);
	int fd1 = accept(fd,(struct sockaddr*)&client,&length);
	char buf[100];
	recv(fd1,buf,100,0);
	/*int n= strlen(buf);
	buf[n]='\0';*/
	printf("%s",buf);
}
