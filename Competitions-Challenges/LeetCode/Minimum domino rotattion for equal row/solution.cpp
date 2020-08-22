class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        int ans1 = A[0], ans2 = B[0] ;
        int inf = 2e9;
        int cnt1 = 0 , cnt2 = 0 ; 
        for(int i = 0 ; i < int(A.size()) ; ++i){
            if(A[i] == ans1) continue ; 
            else if(A[i] != ans1){
                if(B[i] == ans1){
                    ++cnt1; 
                }
                else if(B[i] != ans1){
                    cnt1 = inf; 
                    break; 
                }
            }
        }
        for(int i = 0; i < int(A.size()) ; ++i){
            if(A[i] == ans2) continue; 
            else if(A[i] != ans2){
                if(B[i] == ans2){
                    ++cnt2; 
                }
                else if(B[i] != ans2){
                    cnt2 = inf ; 
                }
            }
        }
        
        int cnt3 = 0 , cnt4 =0 ;
        for(int i = 0 ; i < int(B.size()) ; ++i){
            if(B[i] == ans1){
                continue; 
            }
            else {
                if(A[i] == ans1) ++cnt3; 
                else {
                    cnt3 = inf ; 
                    break ; 
                }
            }
        }
        for(int i = 0 ; i < int(B.size()) ; ++i){
            if(B[i] == ans2) continue; 
            else {
                if(A[i] == ans2) ++cnt4;
                else{
                    cnt4 = inf; 
                    break ; 
                }
            }
        }
        cnt1 = min({cnt1 , cnt2 , cnt3 , cnt4});
        if(cnt1 == inf) return -1; 
        return cnt1 ;
    }
};