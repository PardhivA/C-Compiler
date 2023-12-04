%option noyywrap	
%{
#include <stdbool.h>
    void formatNormal( char* str);
    void formatMailTo(char* str);
    //[A-Za-z.]
// {printf("%s", yytext);formatNormal(yytext); }
%}

%%
(("http")|("https")|("ftp")|("file"))("://")(([A-Za-z])+":"([A-Za-z])+"@")?(.*)(":"[0-9]*)?(("/".*)+("?"(.*"=".*"&")*)(.*"=".*)?)? {
	printf("given: %s \n",yytext); 
	formatNormal(yytext);
	
}

"mailto:"[a-zA-z]+"@"[a-zA-Z]+"."([a-z]+) {printf("given: %s \n",yytext);formatMailTo(yytext);}
[A-Za-z]+ {printf("invalid URL");} 

%%


int main(){
    yylex();
     if(argc > 1){
    FILE *file = fopen(argv[1],"r");
    if(file){
    yyin = file;
    }
    }
    return 0;
}

void formatNormal(char *str){
int i = 0;
printf("\nscheme: ");
for(i =0;str[i]!=':';i++){   // notes "scheme" value
    printf("%c",str[i]);
    }
int j;
i+=3;
 j = i;

bool status =false;
while(str[j]!='\0'){
    if(str[j]=='@') status = true;
j++;
}

if(status){
    printf("\nusername: "); // notes "username" value
    while(str[i]!=':'){
        printf("%c", str[i]);
        i++;
    }
    i++;
    printf("\n");
    printf("password: "); 
    while(str[i]!='@'){  // notes "password" value
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    i++;
}

printf("host: "); 
while(str[i]!= '/' && str[i]!='\0' && str[i]!=':'){ // notes "host" value
printf("%c", str[i]); 
i++;
}
printf("\n");
if(str[i]==':'){
    printf("port: ");
    for(i = i;str[i]!= '/' && str[i]!='\0';i++){ // notes "port" value
        printf("%c", str[i]);
    }
    printf("\n");
}

if(str[i]=='/'){
printf("path: ");
while(str[i]!='?' && str[i]!= '\0' && str[i]!='#'){ // notes "path" value
printf("%c", str[i]);
i++;
}

if(str[i]=='?'){ // checks for key-value pair
i++;
while( str[i]!='\0'){  // notes "key" value
printf("\nkey: ");
while(str[i]!='='){
printf("%c", str[i]);
i++;
}
i++;
printf("\nvalue: ");
while(str[i]!='\0' && str[i]!='&'){ // notes "value" value
printf("%c", str[i]);
i++;
}
if(str[i]=='&') i++;
}

}
}

}

void formatMailTo(char *str){
  int i = 0;
  for(i = 0;str[i]!=':';i++){
  }
  printf("scheme: mailto \n");
  i++;
  printf("username: ");
  for(i = i;str[i]!='\0';i++){
    printf("%c",str[i]);
  }
}

