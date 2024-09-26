      #include <bits/stdc++.h>
      using namespace std;
      int main(){
	  
	  int n, x, a, b, input;
      vector<int> v;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input;
        v.push_back(input);
    }
    
    cin >> x >> a>> b;
    v.erase(v.begin() + x - 1);
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    
    cout << v.size() << "\n";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
        
       