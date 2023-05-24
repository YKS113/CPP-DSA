//pattern 1 
/* #include<iostream>
using namespace std;

int main(){

int n,i=1;
cin>>n;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<"* ";         
        j++;                
    }                       
    cout<<endl;             
    i++;
}

} */

/* o/p= for n=3
    * * *
    * * *
    * * * */

//pattern 2
/* #include<iostream>
using namespace std;

int main(){

int n, i, j;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=n){
        cout<<i<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

} */

/* o/p= for n=3
    1 1 1 
    2 2 2 
    3 3 3 */

//pattern 3
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=n){
        cout<<j<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

} */

/* o/p= for n=3
    1 2 3 
    1 2 3 
    1 2 3 */

//pattern 4
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
cin>>n;
i=1;
while(i<=n){
    j=0;
    while(j<n){
        cout<<n-j<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

} */

/* o/p= for n=3
    3 2 1 
    3 2 1 
    3 2 1 */

//pattern 5
/* #include<iostream>
using namespace std;

int main(){

int n,i,j,x;
cin>>n;
i=1;x=1;
while(i<=n){
    j=1;
    while(j<=n){
        cout<<x<<" ";
        j++;x++;
    }
    cout<<endl;
    i++;
}

} */

/* o/p= for n=3
    1 2 3 
    4 5 6 
    7 8 9 */

//pattern 6
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=i){
        cout<<'*'<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

}  */

/* o/p= for n=4
    * 
    * * 
    * * *
    * * * *
     */

//pattern 7
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=i){
        cout<<i<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

}  */

/* o/p= for n=4
    1
    1 2 
    1 2 3 
    1 2 3 4 
     */

//pattern 8
/* #include<iostream>
using namespace std;

int main(){

int n,i,j,x;
cin>>n;
i=1;x=1;
while(i<=n){
    j=1;
    while(j<=i){
        cout<<x<<" ";
        j++;x++;
    }
    cout<<endl;
    i++;
}

}  */

/* o/p= for n=4
    1
    2 3 
    4 5 6  
    7 8 9 10 
     */

//pattern 9
/* #include<iostream>
using namespace std;

int main(){

int n,i,j,x;
cin>>n;
i=1;
while(i<=n){
    j=1;x=i;
    while(j<=i){
        cout<<x<<" ";
        j++;x++;
    }
    cout<<endl;
    i++;
}

}  */

/* o/p= for n=4
    1
    2 3 
    3 4 5  
    4 5 6 7 
     */

//pattern 9 method 2
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=i){
        cout<<i+j-1<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

}  */

//pattern 10
/* #include<iostream>
using namespace std;

int main(){

int n,i,j,x;
cin>>n;
i=1;
while(i<=n){
    j=1;x=i;
    while(j<=i){
        cout<<x<<" ";
        j++;x--;
    }
    cout<<endl;
    i++;
}

}  */

/* o/p= for n=4
    1
    2 1
    3 2 1   
    4 3 2 1  
     */

//pattern 10 M-2
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=i){
        cout<<i-j+1<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

}  */

//pattern 11
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
char k;
cin>>n;
i=0;
while(i<n){
    j=1;
    while(j<=n){
        k= 'A'+i;
        cout<<k<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

} */

/* o/p= for n=3
    A A A
    B B B
    C C C   
        */

//pattern 11 M2
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
char k;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=n){
        k= 'A'+i-1;
        cout<<k<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

}  */

//pattern 12
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
char k;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=n){
        k= 'A'+j-1;
        cout<<k<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

}  */

/* o/p= for n=3
    A B C 
    A B C 
    A B C   
        */

//pattern 13

/* #include<iostream>
using namespace std;

int main(){

int n,i,j,x;
char k;
cin>>n;
i=1;x=1;
while(i<=n){
    j=1;
    while(j<=n){
        k= 'A'+x-1;
        cout<<k<<" ";
        j++;x++;
    }
    cout<<endl;
    i++;
}

}  */

/* o/p= for n=3
    A B C 
    D E F 
    G H I  
        */

//pattern 14
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
char k;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=n){
        k= 'A'+i+j-2;
        cout<<k<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

} */

/* o/p= for n=3
    A B C 
    B C D
    C D E   
        */

//pattern 15
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
char k;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=i){
        k= 'A'+i-1;
        cout<<k<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

}  */

/* o/p= for n=3
    A 
    B B 
    C C C    
        */

//pattern 16
/* #include<iostream>
using namespace std;

int main(){

int n,i,j,x;
char k;
cin>>n;
i=1;x=1;
while(i<=n){
    j=1;
    while(j<=i){
        k= 'A'+x-1;
        cout<<k<<" ";
        j++;x++;
    }
    cout<<endl;
    i++;
}

} 
 */
/* o/p= for n=3
    A 
    B C
    D E F     
        */

//pattern 17
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
char k;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=i){
        k= 'A'+i+j-2;
        cout<<k<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

}  */

/* o/p= for n=3
    A  
    B C 
    C D E   
        */

//pattern 18
 /* #include<iostream>
using namespace std;

int main(){

int n,i,j;
char k;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=i){
        k= 'A'+n-i+j-1;
        cout<<k<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

}   */

/* o/p= for n=4
    D  
    C D  
    B C D   
    A B C D
        */

//pattern 19
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=n-i){
        cout<<" "<<" ";
        j++;
    }
    j=1;
    while(j<=i){
        cout<<'*'<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

}
 */

/* o/p= for n=4
            *
          * *
        * * *
      * * * * 
        */

//pattern 20
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=n-i+1){
        cout<<'*'<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

} */

/* o/p= for n=4
    * * * * 
    * * *
    * * 
    *  
        */

//pattern 21

/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=i-1){
        cout<<" "<<" ";
        j++;
    }
    j=1;
    while(j<=n-i+1){
        cout<<'*'<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

} */

/* o/p= for n=4
    * * * * 
      * * * 
        * * 
          * 
        */

//pattern 22

/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=i-1){
        cout<<" "<<" ";
        j++;
    }
    j=1;
    while(j<=n-i+1){
        cout<<i+j-1<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
} */

/* o/p= for n=4
    1 2 3 4 
      2 3 4  
        3 4 
          4
        */

//pattern 23
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=n-i){
        cout<<" "<<" ";
        j++;
    }
    j=1;
    while(j<=i){
        cout<<j<<" ";
        j++;
    }
    j=1;
    while(j<=i-1){
        cout<<i-j<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
}  */
/* o/p= for n=4
       1
     1 2 1
   1 2 3 2 1
 1 2 3 4 3 2 1
        */

//pattern 24
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=n-i+1){
        cout<<j<<" ";
        j++;
    }
    j=1;
    while(j<=i-1){
        cout<<'*'<<" ";
        j++;
    }
    j=1;
    while(j<=i-1){
        cout<<'*'<<" ";
        j++;
    }   
    j=1;
    while(j<=n-i+1){
        cout<<n-i-j+2<<" ";
        j++;
    }
    i++;
    cout<<endl;
}
} */

/* o/p= for n=4
    1 2 3 4 5 5 4 3 2 1 
    1 2 3 4 * * 4 3 2 1 
    1 2 3 * * * * 3 2 1 
    1 2 * * * * * * 2 1 
    1 * * * * * * * * 1
        */
//pattern 24 M-2
/* #include<iostream>
using namespace std;

int main(){

int n,i,j;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=n-i+1){
        cout<<j<<" ";
        j++;
    }
    j=1;
    while(j<=2*(i-1)){
        cout<<'*'<<" ";
        j++;
    }
      
    j=1;
    while(j<=n-i+1){
        cout<<n-i-j+2<<" ";
        j++;
    }
    i++;
    cout<<endl;
}
} */

//pattern 25
/*
#include<iostream>
using namespace std;

int main(){

int n,i,j,x;
cin>>n;
i=1;
while(i<=2*n-1){
    j=1;
    i<=n ? x=i : x=2*n-i;
    while(j<=x){
        cout<<"*"<<" ";
        j++;
    }
    
    i++;
    cout<<endl;
}
} 
*/
// line 818 - x= n- (i-n) => 2n-i
/* o/p= for n=5
    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * * 
    * 
        */

//pattern 26
/*
#include<iostream>
using namespace std;

int main(){

int n,i,j,x;
cin>>n;
i=1;
while(i<=2*n-1){
    j=1;
    i<=n ? x=i-1 : x=2*n-i-1;
    while(j<=x){
        cout<<" ";
        j++;
    }
    j=1;
    while(j<=n-x){
        cout<<"*"<<" ";
        j++;
    }
    
    i++;
    cout<<endl;
};
} 
*/
// line 818 - x= n- (i-n) => 2n-i
/* o/p= for n=5
          * * * * *
           * * * *
            * * *
             * * 
              *
             * *
            * * *
           * * * *
          * * * * *
        */