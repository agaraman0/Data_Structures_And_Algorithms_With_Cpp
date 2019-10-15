void sumMatrix(int n1, int m1, int n2, int m2, int arr1[SIZE][SIZE], int arr2[SIZE][SIZE]){
    
    // Your code here
    if (n1 != n2 || m1 != m2){
        cout<<-1;
        return;
    }
    int temp[SIZE][SIZE];
    
    for(int i =0;i<n1;i++){
        for(int j=0;j<m1;j++){

            temp[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    for(int i =0;i<n1;i++){
        for(int j=0;j<m1;j++){

            cout<<temp[i][j]<<" ";
        }
    }
