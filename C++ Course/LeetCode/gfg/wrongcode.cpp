// code here
        map <int,int> ind;
        vector <int> temp;
        map <int,int> ind2;
        
        for(int i =0; i<txt.size(); i++){
            if(txt[i]==pat[0]){
                temp.push_back(i);
            }
        }
        for(int i: temp){
            for(int j =0, k = i; j<pat.size(); j++, k++){
                if(pat[j]!=txt[k]){
                    ind[i]++;
                }
            }
        }
        for(auto i: temp){
            ind2[i]++;
        }
        
        for(auto i: ind){
            if(ind2[i.first]>0){
                ind2[i.first]=0;
            }
        }
        
        temp.clear();
    
        for(auto i: ind2){
            if(i.second>0){
                temp.push_back(i.first);
            }
        }
        
        return temp;