//  vector<string> getGroupedAnagrams(vector<string>& words) {
//         unordered_map<string,string> h;
//         for(int i = 0; i < words.size(); i++){
//             string temp = words[i];
//             sort(temp.begin(), temp.end());
//             h[temp].push_back(words[i]);
//         }
//         vector<string> ans;
//         for(auto m: h) ans.push_back(m.second);
//         return ans.size();
    
