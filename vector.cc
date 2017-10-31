#include<vector>
#include<iostream>
using namespace std;
int main(){
  size_t talla=0;
  vector<int>edad(talla);
  int sum=0;
 for(int i=0; i<talla; i++){
  cout<<"¿ Que edad tienes?" <<endl;
  cin>>edad[i];
}
 for(int j=0; j<talla; j++)
   sum+=(edad[j]+3);
 for(int j=0; j<talla; j++)
   cout<<edad[j]<<" , " ;
 cout<<endl;
 cout<<"el promedio de edad a la que se graduara este grupo es " <<sum/talla<<endl;
 return 0;
}
