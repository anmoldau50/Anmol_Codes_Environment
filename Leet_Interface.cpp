#include <bits/stdc++.h>
#include <sstream>
using namespace std;



class ListNode
{
    public:

    int val;
    ListNode* next;
    ListNode(int d)
    {
        this->val=d;
        this->next=NULL;
    }
    ListNode()
    {
        this->val=0;
        this->next=NULL;
    }
};


void List_Traversal(ListNode* head)
{
    ListNode*temp=head;
    while(temp)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}


/*

//COMPARATOR FUNCTION FOR SORTING

bool condition(vector<int>a,vector<int>b)
{
    if(a.[k]>=b.[k])
    {
        return 1;
    }
    else
    {
        return 0;
    }  
}

*/


class Solution {
public:
    
    void my_func(ListNode*head)
    {
        
        vector<int>arr;
        ListNode*temp=head;
        int n=0;
        
        while(temp){
            n++;
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int flag=0;
        int a=1;

        int i=0;
        while(i<n){
            vector<int>kk;

            for(int j=i;j<n && j<i+a;j++){
                kk.push_back(arr[j]);
            }
            if(kk.size()%2==0){
                reverse(kk.begin(),kk.end());
            }
            int p=0;
            for(int j=0;j<kk.size();j++){
                arr[i]=kk[j];
                i++;
            }
            a++;
        }

        temp=head;
        for(auto i:arr){
            temp->val=i;
            temp=temp->next;
        }

        

        List_Traversal(head);
        

        

    }




    void my_func(int n){
        
        vector<int>arr(n,1);

        int k=1;
        while(k<n){
            for(int i=k;i<n;i=i+k+1)
            {
                if(i<n){
                    if(arr[i]==0){
                        arr[i]=1;
                    }
                    else{
                        arr[i]=0;
                    }
                }
            }
            k++;

            for(auto i:arr){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }



    void my_func(string s)
    {
        int n=s.length();
        int flag=1;
        int cc=0;
        while(1){
            flag=1;
            for(int i=0;i<n-1;i++)
            {
                if(s[i]=='0' && s[i+1]=='1'){
                    s[i]='1';
                    s[i+1]='0';
                    i++;
                    flag=0;

                }

            }
            
            if(flag==1){
                break;
            }
            cc++;
        }
        cout<<cc;
        

    }

    void my_func( vector<int>nums)
    {
        
        int n=nums.size();
        int cc=0;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=1;i--){
            int a=0;
            int b=i-1;
            while(a<b){
                int flag=0;
                cout<<nums[a]<<" "<<nums[b]<<" "<<nums[i]<<endl;
                if((nums[a]+nums[b])<=nums[i]){
                    a++;
                }
                else{
                    cc=cc+b-a;
                    b--;
                }
            }

        }
        cout<<cc;


    }



    void my_func(string s, string t)
    {
        
        int n=s.length();
        int arr1[26]={0};
        int arr2[26]={0};
        for(int i=0;i<n;i++){
            arr1[s[i]-'a']++;  
            arr2[t[i]-'a']++;  
        }
        n=0;
        for(int i=0;i<26;i++){
            if(arr2[i]<arr1[i]){
                n=n+arr1[i]-arr2[i];
            }
        }
        cout<<n;
        

    }

    void my_func(vector<int>& nums, vector<vector<int>>& operations)
    {
        unordered_map<int,int>arr;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            arr.insert({nums[i],i});
        }

        n=operations.size();

        for(int i=0;i<n;i++){
            int k=arr[operations[i][0]];
            nums[k]=operations[i][1]; 
        }

    }
};


// { Driver Code Starts.

int main()
{



    string string_s = "bab";
    string string_t = "aba";
    int k=2;



//////////////////////////////////////////////////

    ListNode*n1=new ListNode(5);
    ListNode*n2=new ListNode(2);
    ListNode*n3=new ListNode(6);
    ListNode*n4=new ListNode(3);
    ListNode*n5=new ListNode(9);
    ListNode*n6=new ListNode(1);
    ListNode*n7=new ListNode(7);
    ListNode*n8=new ListNode(3);
    ListNode*n9=new ListNode(8);
    ListNode*n10=new ListNode(4);



    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=n7;
    n7->next=n8;
    n8->next=n9;
    n9->next=n10;


    ListNode*head=n1;



//    List_Traversal(k);

////////////////////////////////////////////
    

    vector<char>char_vector={'b','b'};
//    my_func(hh);
////////////////////////////////////////////


    vector<int> integer_vector = {1,2,5};
    vector<vector<int>> operations={{1,3},{4,7},{6,1}};



//////////////////////////////////////////////

    
    int integer_num=5;


///////////////////////////////////////////////////


    vector<string>string_vector={"eat","tea","tan","ate","nat","bat"};

////////////////////////////////////////////////
// [["+","+",".","+"],[".",".",".","+"],["+","+","+","."]]

    vector<vector<char>>char_vector_double={{'+','+','.','+'},{'.','.','.','+'},{'+','+','+','.'}};




//////////////////////////////////////////////////


    ///////////////////////////////////////////////////////

    Solution Anmol;

    
//    Anmol.my_func(string_s,string_t);
//    Anmol.my_func(nums);
//    Anmol.my_func(nums1,nums2);
//    Anmol.my_func(head);
//    Anmol.my_func(string_vector);
//    Anmol.my_func(char_vector);
//    Anmol.my_func(char_vector_double);
//   Anmol.my_func(integer_vector,integer_num);
//    Anmol.my_func(integer_num);


    /////////////////////////////////////////////////////
    

    return 0;
}
