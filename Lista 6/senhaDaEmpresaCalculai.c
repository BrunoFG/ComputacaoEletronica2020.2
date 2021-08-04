#include <stdio.h>
#include<string.h>

struct cadastro
{
    char name[50];
    char data[11];
    char city[50];
    int idade;
};

typedef struct cadastro cadastro;

int main() {
    cadastro func[5];
    int j;
    char senha[5][20];
    for(j = 0;j < 5;++j){
        scanf(" %49[^\n]s",func[j].name);
        if(!strcmp(func[j].name,"SAIR")) break;
        scanf(" %s",func[j].data);
        scanf(" %49[^\n]s",func[j].city);
        scanf("%d",&func[j].idade);
        senha[j][0] = func[j].name[0];

        for(int i = 1,g = 0,h = 0,k = 0; i <= 12; i += 3,++g,++h,++k){
            if(func[j].data[g] == '/') g+=1;
            if(func[j].city[h] == ' ') h+=1;
            senha[j][i] = func[j].data[g];
            senha[j][i+1] = func[j].city[h];
            senha[j][i+2] = func[j].name[k+1];
        }
        senha[j][13] = '\0';
    }
    
    for(int i = 0; i < j; ++i) printf("Nome: %s\nData de Nascimento: %s\nCidade Natal: %s\nIdade: %d anos\nSenha: %s%d\n\n",func[i].name,func[i].data,func[i].city,func[i].idade,senha[i],func[i].idade);
    
    return 0;
}