#include <iostream>

using namespace std;

class farmacia{
    private:
    int cad, tel, r, quant;
    char nome[15], sobrenome[15];

    public:
    void cadastro(void);
    void remedios(void);
};

int main(){
    int cont;
    farmacia x;

    cout << "________________________________________________________________" << endl
            << "Seja bem vindo a drogaria boa vida." << endl
            << "Eu sou a Aurora, sua assistente virtual." << endl
            << "________________________________________________________________" << endl;
    do{
    x.cadastro();
    x.remedios();
    cout << "________________________________________________________________" << endl;
    cout << "\ngostaria de continuar com as comprar?" << endl
            << "1 - Sim" << endl
            << "2 - Nao" << endl
            << ">> ";
    cin >> cont;
    cout << "________________________________________________________________" << endl;
    } while (cont == 1);

    system("cls");
    cout << "________________________________________________________________" << endl
        << "\nObrigado e volte sempre!" << endl
        << "________________________________________________________________" << endl;
    system("pause");
    return(0);
}

void farmacia::cadastro(void){
    cout << "Para prosseguir com a sua compra, precisa realizar um cadastro!" << endl
            << "Se voce ja se registrou, basta logar." << endl
            << "1 - Cadastrar" << endl
            << "2 - Logar" << endl
            << ">> ";
    cin >> cad;
    cout << "________________________________________________________________" << endl;


    if (cad == 1){
        system("cls");
        cout << "Nome: ";
        cin >> nome;
        cout << "Sobrenome: ";
        cin >> sobrenome;
        cout << "telefone: ";
        cin >> tel;
        system("cls");
        cout << "________________________________________________________________" << endl;
        cout << "Cadastrado como: " << nome << " " << sobrenome << endl
                << "Tel: " << tel << endl;
        cout << "________________________________________________________________" << endl;
    }
    
    if (cad == 2){
        system("cls");
        cout << "________________________________________________________________" << endl;
        cout << "Logado como: " << nome << " " << sobrenome << endl;
        cout << "________________________________________________________________" << endl;
    }

    else if (cad != 1 && 2){
        system("cls");
        cout << "Por favor, escolha uma das opcoes citadas." << endl;
    }

}


void farmacia::remedios(void) {
    cout << "Selecione um remedios de nosso estoque" << endl;
    cout << "________________________________________________________________" << endl
        << "Codigo --- Remedio" << endl
        <<  " 24    --- Dorflex" << endl
        <<  " 12    --- Xarelto" << endl
        <<  " 15    --- Saxenda" << endl
        <<  " 13    --- Neosaldina" << endl
        <<  " 42    --- Addera D3" << endl
        <<  " 52    --- Glifage" << endl
        <<  " 11    --- Torsilax" << endl
        <<  " 71    --- Victoza" << endl
        <<  " 10    --- Puran" << endl;
    cout << "________________________________________________________________" << endl
        << "codigo do produto" << endl;
    cout << ">> ";
    cin >> r;
    cout << "Qual a quantidade? " << endl
        << ">> ";
    cin >> quant;

    if (r == 24)
    {
        cout << "obrigado por comprar, " << quant << " Dorflex." << endl;
    }
    if (r == 12)
    {
        cout << "obrigado por comprar, " << quant << " Xarelto." << endl;
    }
    if (r == 15)
    {
        cout << "obrigado por comprar, " << quant << " Saxenda." << endl;
    }
    if (r == 13)
    {
        cout << "obrigado por comprar, " << quant << " Neosaldina." << endl;
    }
    if (r == 42)
    {
        cout << "obrigado por comprar, " << quant << " Addera D3." << endl;
    }
    if (r == 52)
    {
        cout << "obrigado por comprar, " << quant << " Glifage." << endl;
    }
    if (r == 11)
    {
        cout << "obrigado por comprar, " << quant << " Torsilax." << endl;
    }
    if (r == 71)
    {
        cout << "obrigado por comprar, " << quant << " Victoza." << endl;
    }
    if (r == 10)
    {
        cout << "obrigado por comprar, " << quant << " Puran." << endl;
    }
        else
        {
            system("cls");
            cout << "________________________________________________________________" << endl;
            cout << "O produto nao foi encontra ou" << endl
                << "esta em falta de estoque" << endl;
        } 
}