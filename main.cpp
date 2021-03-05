#include <fstream>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class file
{
        ifstream inFile;
       
        public:

                void loop(); //pêtla wczytuj¹ca z pliku

};




void file::loop()
{
	
	        inFile.open("dane_obrazki.txt");

        string liczba;
        int ile=0,ile1=0,ktora=0,pom=0,iler=0,obr=0;
        					  int rek=0;

        string tab[21][21];

	           while (!inFile.eof()) 
       {
	    
                    inFile >> liczba;
  					for(int i=0; i<liczba.size()-1;i++)
  					{
  						//cout<<liczba[i]<<" "; 
  						if(liczba[i]=='1')
  						{
  							ile++;
						  }
						else
						{
							ile1++;
						}
					  }
					  cout<<endl;
						pom++;
						
						ktora++;
						
					  for(int i=0;i<20;i++)
					  {
					  	
						tab[pom][i]=liczba[i];
					  	cout<<tab[pom][i]<<" ";
						
					  }
					  
					  for(int i=0;i<5;i++)
					  {


							if(tab[pom][i]!=tab[pom][i+10])
							{
							cout<<tab[pom][i+10];
							cout<<tab[pom][i+10];
							obr++;
							//cout<<obr;
								//cout<<"ZAJEBISCIE"<<endl;
							rek++;
							}
							
							

							if(tab[pom][i]!=tab[pom][i])
							{
							cout<<tab[pom][i];
							cout<<tab[pom][i];
							obr++;
							//cout<<obr;
								//cout<<"ZAJEBISCIE"<<endl;
								rek++;
							}
						
								  
							  
					  
				}

					  
				
			     	//cout<<endl;
				

	//				if(pom==21)
	//				{		
//
//
//						      if(ile>=ile1)
//					      {
//					      	int obrazek=ktora/21;
//					      	//cout<<"obrazek " <<obrazek<<" jest rewersem";
//					      	iler++;
//						  }
//	  
//						ile=0;
//						ile1=0;
//						pom=0;
//					}

   	   }

    		if(rek==0)
		  {
		  	cout<<"obrazek jest rekurencyjny";
		  }
          inFile.close();
                   
       
}



 
int main()
{
        file f;
        f.loop();
        return 0;
}
