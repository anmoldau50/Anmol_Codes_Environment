#include <bits/stdc++.h>
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
	ListNode(int d,ListNode* next)
	{
		this->val=d;
		this->next=next;
	}
};




void traversal(ListNode*head)
{
	ListNode*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->val<<" ";
		temp=temp->next;
	}
}



ListNode* my_func(ListNode* head)
{
	ListNode* arr;

	ListNode*temp1=head;

	if(temp1==NULL)
	{
		return temp1;
	}

	while(temp1!=NULL)
	{
		if(temp1->val==0)
		{
			cout<<temp1->val<<" ";
			int counter=0;
			ListNode* s=temp1->next;
			while(s->val!=0)
			{
				counter=counter+s->val;
				s=s->next;
			}
			temp1->val=counter;
			temp1=s;
		}
		temp1=temp1->next;
	}

	return head;
}

// { Driver Code Starts.

int main()
{


/*
	string s1 = "1010";
	string s2 = "1011";

	string k = my_func(s1, s2);
	cout << k;
*/


	/*
		int x=21;
		int k=my_func(x);
		cout<<k<<endl;

	*/

	
		
		ListNode*n1=new ListNode(0);
		ListNode*n2=new ListNode(3);
		ListNode*n3=new ListNode(1);
		ListNode*n4=new ListNode(0);
		ListNode*n5=new ListNode(4);
		ListNode*n6=new ListNode(5);
		ListNode*n7=new ListNode(2);
		ListNode*n8=new ListNode(0);

		n1->next=n2;
		n2->next=n3;
		n3->next=n4;
		n4->next=n5;
		n5->next=n6;
		n6->next=n7;
		n7->next=n8;



		ListNode*head1=n1;



		ListNode* k=my_func(head1);
		
		traversal(k);

	

	/*
		vector<int>nums{30,30,30,30,30,30};

		vector<int> p=my_func(nums);

		for(int i=0;i<p.size();i++)
		{
			cout<<p[i]<<" ";
		}

	//    cout<<p<<endl;

	*/

	/*
		int x=18;
		int k=my_func(x);
		cout<<k;

	*/

	/*

		vector<string>nums={3,1,-2,-5,2,-4};
		vector<string>arr=my_func(5);
		for(int i=0;i<arr.size();i++)
		{
			cout<<arr[i]<<" ";
		}

	*/

	return 0;
}
