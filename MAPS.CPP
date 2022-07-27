//learnimg map......
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> first;

    // initializing
    first['a'] = 10;
    first['b'] = 20;
    first['c'] = 30;
    first['d'] = 40;

    for (auto &pr : first)
    {
        cout << pr.first << " " << pr.second << endl;
    }
    
//     imp points
     map<int ,string>mp;
    mp[3]="lokesh pandey";
    mp[1]="missssss";
    mp[2]="chris gayle";
    mp[4]="kushagra";
    mp[0]="siii";
    mp[0]="ishu";
    
    for(auto p:mp){
        cout<<p.first<<"    "<<p.second<<endl;
    }
    auto it=mp.find(3);
    if(it==mp.end()){
        cout<<"lokesh";
    // auto ans=mp[it]<<endl;
    // cout<<ans.second<<endl;
    }
    //important note
    //if you find a thing which is not present in the map then simply its iterator will point to end of present element in an map
    else{
        cout<<"pandey";
    }

    
//     unordered map is just as same as th map but it stored value in an order u insert in an map it doesnt sort the map or soething like that..
    unordered_map<int ,int>pm;
    for(int i=0;i<10;i++){
        pm[i]=10+i;
    }
    for(auto it:pm){
        cout<<it.first<<"  "<<it.second<<endl;
    }
    return 0;
}
