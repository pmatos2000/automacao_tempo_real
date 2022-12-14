#include <vector>

using namespace std;

struct DadosMensagem
{
    int id_motor;
    double velocidade_maxima;
};

class CaixaMensagem
{
    private:
        vector<DadosMensagem> lista_mensagem;
    public:
        void adicionar_mensagem(int id_motor, double velocidade_maxima);
        bool ler_mensagem_topo(DadosMensagem &dados);
        void remover_mensagem_topo();
};