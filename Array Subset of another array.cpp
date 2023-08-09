string isSubset(int a1[], int a2[], int n, int m){

  unordered_map<int,int> m1;

  for(int i=0; i<n; i++){
    m1[a1[i]]++; 
  }
  
  int count = 0;

  for(int i=0; i<m; i++){
    if(m1.find(a2[i]) != m1.end() && m1[a2[i]] > 0){
      count++; 
      m1[a2[i]]--; // Decrement the count for the element in m1 to avoid duplicates
    }
  }

  if(count == m){
    return "Yes";
  }
  else {
    return "No";
  }
}
