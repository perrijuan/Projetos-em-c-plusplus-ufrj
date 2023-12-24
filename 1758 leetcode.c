class Solution {
public:
    int minOperations(string s) {
        int contador = 0;
        int contador1= 0;

     
        //pecorrimento da string
        for (int i = 0; i < s.length(); i++) {
            //alterna a posição da string comparando com o caracter atual se for a encrementa na posicão 0 e se não na posição 1 incrementando tambem
            if (s[i] != (i % 2 == 0 ? '0' : '1')) {
                contador++;
            } else {
                contador1++;
            }
        }
        //o valor minimo que é feito com a diferença dos dois contadores 
        return min(contador,contador1);
    }
};