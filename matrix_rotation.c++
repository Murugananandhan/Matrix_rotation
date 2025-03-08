

///////////////////////////////////////// MATRIX ROTATION /////////////////////////////////////////


#include <bits/stdc++.h>
using namespace std;

class Matrix{
  public:
 
  void degree90(vector<vector<char>>mat){
      
      int t;
      for(int r=0;r<mat.size();r++){
          for(int c=0;c<=r;c++){
              t=mat[r][c];
              mat[r][c]=mat[c][r];
              mat[c][r]=t;
          }
      }
      
      for(int c=0;c<mat[0].size()/2;c++){
          for(int r=0;r<mat.size();r++){
              t=mat[r][c];
              mat[r][c]=mat[r][mat[0].size()-c-1];
              mat[r][mat[0].size()-c-1]=t;
          }
      }
      
      display(mat);
  }
  
  void degree180(vector<vector<char>>mat){
      
      int t;
      for(int r=0;r<mat.size()/2;r++){
          for(int c=0;c<mat[0].size();c++){
              t=mat[r][c];
              mat[r][c]=mat[mat.size()-r-1][c];
              mat[mat.size()-r-1][c]=t;
          }
      }
      
      display(mat);
  }
  
  void degree270(vector<vector<char>>mat){
      
      int t;
      for(int i=0;i<mat.size();i++){
          for(int j=0;j<=i;j++){
              t=mat[i][j];
              mat[i][j]=mat[j][i];
              mat[j][i]=t;
          }
      }
      
      display(mat);
  }
  
  void display(vector<vector<char>>mat){
      
      for (int i = 0; i < mat.size(); i++, cout << endl) {
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
      }
      
  }
  
    
};


int main()
{
     

    
    //vector<vector<int>> mat = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    
    vector<vector<char>> mat = {
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ','+','+',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ','+','+','+','+',' ',' ',' ',' '},
        {' ',' ',' ','+','+',' ',' ','+','+',' ',' ',' '},
        {' ',' ','+','+',' ',' ',' ',' ','+','+',' ',' '},
        {' ',' ','+','+',' ',' ',' ',' ','+','+',' ',' '},
        {' ',' ','+','+',' ',' ',' ',' ','+','+',' ',' '},
        {' ',' ','+','+','+','+','+','+','+','+',' ',' '},
        {' ',' ','+','+','+','+','+','+','+','+',' ',' '},
        {' ',' ','+','+',' ',' ',' ',' ','+','+',' ',' '},
        {' ',' ','+','+',' ',' ',' ',' ','+','+',' ',' '},
        {' ',' ','+','+',' ',' ',' ',' ','+','+',' ',' '}
    };

    cout<<"\n\n///////////////////////////////////////// MATRIX ROTATION /////////////////////////////////////////\n\n";

    
    Matrix matrix;
    int degree;
    char choice;
    

    do {
        cout << "\nEnter rotation degree (0, 90, 180, 270, 360): ";
        cin >> degree;

        switch (degree) {
            case 0:
                cout << "\n0° ROTATION\n";
                matrix.display(mat);
                break;
            case 90:
                cout << "\n90° ROTATION\n";
                matrix.degree90(mat);
                break;
            case 180:
                cout << "\n180° ROTATION\n";
                matrix.degree180(mat);
                break;
            case 270:
                cout << "\n270° ROTATION\n";
                matrix.degree270(mat);
                break;
            case 360:
                cout << "\n360° ROTATION\n";
                matrix.display(mat);
                break;
            default:
                cout << "Invalid degree! Please enter 0, 90, 180, 270, or 360.\n";
                
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "\nProgram exited successfully.\n";

    return 0;
}








/*



///////////////////////////////////////// MATRIX ROTATION /////////////////////////////////////////



Enter rotation degree (0, 90, 180, 270, 360): 0

0° ROTATION
                        
          + +           
        + + + +         
      + +     + +       
    + +         + +     
    + +         + +     
    + +         + +     
    + + + + + + + +     
    + + + + + + + +     
    + +         + +     
    + +         + +     
    + +         + +     

Do you want to continue? (y/n): y

Enter rotation degree (0, 90, 180, 270, 360): 90

90° ROTATION
                        
                        
+ + + + + + + +         
+ + + + + + + + +       
      + +       + +     
      + +         + +   
      + +         + +   
      + +       + +     
+ + + + + + + + +       
+ + + + + + + +         
                        
                        

Do you want to continue? (y/n): y

Enter rotation degree (0, 90, 180, 270, 360): 180

180° ROTATION
    + +         + +     
    + +         + +     
    + +         + +     
    + + + + + + + +     
    + + + + + + + +     
    + +         + +     
    + +         + +     
    + +         + +     
      + +     + +       
        + + + +         
          + +           
                        

Do you want to continue? (y/n): y

Enter rotation degree (0, 90, 180, 270, 360): 270

270° ROTATION
                        
                        
        + + + + + + + + 
      + + + + + + + + + 
    + +       + +       
  + +         + +       
  + +         + +       
    + +       + +       
      + + + + + + + + + 
        + + + + + + + + 
                        
                        

Do you want to continue? (y/n): y

Enter rotation degree (0, 90, 180, 270, 360): 360

360° ROTATION
                        
          + +           
        + + + +         
      + +     + +       
    + +         + +     
    + +         + +     
    + +         + +     
    + + + + + + + +     
    + + + + + + + +     
    + +         + +     
    + +         + +     
    + +         + +     

Do you want to continue? (y/n): n

Program exited successfully.





*/