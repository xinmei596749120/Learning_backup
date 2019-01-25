#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 4096

void send_header(char *type)
{
	HTTP/1.1 200 OK
	Content-Type:text/plain;charset=iso-8859-1
	Connection:close
	\r\n
}
void send_err(错误号，错误名称，错误描述)
{
  HTTP 协议头
  
  <html>
  <head><title>错误号 错误名称</title></head>
  </body>
  错误描述
  </body>
  </html>
}
//xinetd -->./xhttpd/home/itcast/dir
int main(int argc,char *argv[])
{
	char line[N];
	char method[N],path[N],protocol[N];
	
	char *file;
	struct stat sbuf;
	FILE *fp;
	int ich;
	
	if(argc !=2)			//  ./xhttpd0 /home/itcast/dir
		//send_err();
	if(chdir(argv[1])==-1)
		//send_err();
	if(fgets(line,N,stdin)==NULL)		//GET /hello.c HTTP/1.1       ----strtok() 解析字符串
		//send_err();
	if(sscanf(line,"%[^ ]%[^ ]%[^ ]",method,path,protocol)!=3)  //解析字符串,
	    //send_err();
	while(fgets(line,N,stdin)!=NULL)
	{
		if(strcmp(line,"\r\n"))
			break;
	}
	
	if(strcmp(method,"GET")!=0)
		//send_err();
	if(path[0]!='/')
		//send_err();
	file =path+1;
	if(stat(file,&sbuf)<0)
		//send_err();
	fp = fopen(file,"r");
	if(fp == NULL)
		//send_err();
	//send_headers();
	while((ich = getc(fp))!=EOF)
	{
		putchar(ich);
	}
	fflush(stdout);
	fclose(fp);
	return 0;
	
}