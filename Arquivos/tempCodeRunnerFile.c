void maior_numero(Aluno aluno[]){
    int indice_maior = 0;

    for(int i = 0; i < MAX; i++){
        if (aluno[i].nota > aluno[indice_maior].nota){
            indice_maior = i;
        }
    }