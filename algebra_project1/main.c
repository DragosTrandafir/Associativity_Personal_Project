#include <stdio.h>
#include <stdlib.h>


int isAssociative(int n,int b[n][n]) {
    // assuming by contradiction that our matrix is formed by an assoc operation, this function checks if the elements in the table are associative:
    // applying the operation to two elements means looking at the row of the first and the column of the second,
    // but we need to substract 1, because we are starting the table/matrix from index 0

    // going to each possible row and column value for 3 elements
    for(int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            for (int k=0;k<n;k++) {
                    int first_two=b[i][j] - 1; //applying the operation to 2 elements (first 2 of them)
                    int second_two=b[j][k] - 1; //applying the operation to 2 elements (last 2 of them)
                if (b[first_two][k] != b[i][second_two]) {  // comparing the composition of first_two and the third with first composed with the second_two
                    return 0; // the operation is not associative ( by contr)
                }
            }
        }
    }
    return 1; // the operation is associative ( by contr)
}

int main() {
    int n, c= 0;
    int a[4]= {1, 2, 3, 4};

    scanf("%d", &n);

    int b[n][n]; // initializing the table of elements of the needed size (n)
    // we take each n<=4 separately
     if(n==1||n==2){
        // get all the possibilities for each elements of the table
        for(int k1=0;k1<n;k1++) {
                b[0][0]= a[k1];
            for(int k2=0;k2<n;k2++) {
                b[0][1]= a[k2];
                for(int k3=0;k3<n;k3++) {
                    b[1][0]= a[k3];
                    for(int k4=0;k4<n;k4++) {
                        b[1][1] = a[k4];

                        // check if the matrix is assoc for every choice of elements and print it if it is the case + increasing the counter
                        if (isAssociative(n,b)) {
                            for (int i = 0; i < n; i++) {
                                for (int j = 0; j < n; j++) {
                                    printf("%d ", b[i][j]);
                                }
                                printf("\n");
                            }
                            printf("\n");
                            c++;
                        }
                    }
                }
            }
        }
     }

    if(n==3){
        // get all the possibilities for each elements of the table
        for (int k1 = 0; k1 < n; k1++) {
                b[0][0] = a[k1];
            for (int k2 = 0; k2 < n; k2++) {
                b[0][1] = a[k2];
                for (int k3 = 0; k3 < n; k3++) {
                    b[0][2] = a[k3];
                    for (int k4 = 0; k4 < n; k4++) {
                        b[1][0] = a[k4];
                        for (int k5 = 0; k5 < n; k5++) {
                            b[1][1] = a[k5];
                            for (int k6 = 0; k6 < n; k6++) {
                                b[1][2] = a[k6];
                                for (int k7 = 0; k7 < n; k7++) {
                                    b[2][0] = a[k7];
                                    for (int k8 = 0; k8 < n; k8++) {
                                        b[2][1] = a[k8];
                                        for (int k9 = 0; k9 < n; k9++) {
                                          b[2][2] = a[k9];

                        // check if the matrix is asooc for every choice of elements and print it if it is the case + increasing the counter
                        if (isAssociative(n,b)) {
                            for (int i = 0; i < n; i++) {
                                for (int j = 0; j < n; j++) {
                                    printf("%d ", b[i][j]);
                                }
                                printf("\n");
                            }
                            printf("\n");
                            c++;
                        }
                    }
                }
            }
        }
     }
                    }
                }
            }
        }
    }
    if(n==4){
        // get all the possibilities for each elements of the table
        for (int k1 = 0; k1 < n; k1++) {
                b[0][0] = a[k1];
            for (int k2 = 0; k2 < n; k2++) {
                b[0][1] = a[k2];
                for (int k3 = 0; k3 < n; k3++) {
                    b[0][2] = a[k3];
                    for (int k4 = 0; k4 < n; k4++) {
                        b[0][3] = a[k4];
                        for (int k5 = 0; k5 < n; k5++) {
                            b[1][0] = a[k5];
                            for (int k6 = 0; k6 < n; k6++) {
                                b[1][1] = a[k6];
                                for (int k7 = 0; k7 < n; k7++) {
                                    b[1][2] = a[k7];
                                    for (int k8 = 0; k8 < n; k8++) {
                                        b[1][3] = a[k8];
                                        for (int k9 = 0; k9 < n; k9++) {
                                          b[2][0] = a[k9];
                                          for (int k10 = 0; k10 < n; k10++) {
                                           b[2][1] = a[k10];
                                           for (int k11 = 0; k11 < n; k11++) {
                                              b[2][2] = a[k11];
                                              for (int k12 = 0; k12 < n; k12++) {
                                                b[2][3] = a[k12];
                                                for (int k13 = 0; k13 < n; k13++) {
                                                    b[3][0] = a[k13];
                                                    for (int k14 = 0; k14 < n; k14++) {
                                                        b[3][1] = a[k14];
                                                        for (int k15 = 0; k15 < n; k15++) {
                                                            b[3][2] = a[k15];
                                                            for (int k16 = 0; k16 < n; k16++) {
                                                                b[3][3] = a[k16];

                        // check if the matrix is assoc for every choice of elements and print it if it is the case + increasing the counter
                        if (isAssociative(n,b)) {
                            for (int i = 0; i < n; i++) {
                                for (int j = 0; j < n; j++) {
                                    printf("%d ", b[i][j]);
                                }
                                printf("\n");
                            }
                            printf("\n");
                            c++;
                        }
                    }
                }
            }
        }
     }
                    }
                }
            }
        }
    }
                            }
                        }
                    }
                }
            }
        }
    }



    printf("%d\n", c); // printing the final value of the counter

    return 0;
}

