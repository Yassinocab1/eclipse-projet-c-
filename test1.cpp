#include <iostream>
using namespace std;
class matrix3x3{
    private :
        int matrix[3][3];
    public  :
    matrix3x3(){
        for (int i=0 ; i<3;i++){
            for (int j=0 ; j<3 ; j++){
                matrix[i][j]=0;
            }
        }
    }
    void remplir_matrix(){
        cout<<"remplir la matrice colonne par colonne \n"<<endl;
        for (int i=0 ; i<3;i++){
            for (int j=0 ; j<3 ; j++){
                cout<<"matrix["<<i<<"]["<<j<<"]= "<<endl;
                cin>>matrix[i][j];
            }
        }
        }
    void afficher_matrix()const{
        for (int i=0 ; i<3;i++){
            for (int j=0 ; j<3 ; j++){
                cout<<matrix[i][j];
            }
                cout<<endl;

        }
        }
    matrix3x3 somme_matrix(const matrix3x3&other)const{
        matrix3x3 somme;
        for (int i=0 ; i<3;i++){
            for (int j=0 ; j<3 ; j++){
                somme.matrix[i][j]=matrix[i][j]+other.matrix[i][j];
            }
        }
        return somme ;
    }
        matrix3x3 produit_matrix( const matrix3x3 &other)const{
        matrix3x3 produit;
        for (int i=0 ; i<3;i++){
            for (int j=0 ; j<3 ; j++){
                produit.matrix[i][j]=0;
                for (int k=0 ; k<3 ; k++){
                    produit.matrix[i][j]=matrix[i][k]*other.matrix[k][j];
            }
        }
    }
        return produit ;
    }


};
int main(){
matrix3x3 m1,m2,sum,prod;
m1.remplir_matrix();
m2.remplir_matrix();
m1.afficher_matrix();
m2.afficher_matrix();
sum=m1.somme_matrix(m2);
prod=m1.produit_matrix(m2);
sum.afficher_matrix();
prod.afficher_matrix();
    return 0;
}
