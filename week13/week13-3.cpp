///WEEK13-3.CPP,解ADVENT OF CODE 2024 Day1 題目
///Leetcode 右上角圖示，My Ployground

int main() {
    vector<int> A,B ;
    int a,b;
    while(cin>>a>>b){
        A.push_back(a);
        B.push_back(b);
    }
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
}