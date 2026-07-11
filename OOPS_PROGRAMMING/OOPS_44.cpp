#include <iostream>
#include <cstring>
using namespace std;
class CWH{
	protected:
		string title;
		float rating;
	public:CWH(string s, float r)
	       {
	            title = s;
		    rating = r;
	       }
	       //void display(void){ //if remove the virtual keyword from here then it will be 
	       //print two time below messages
	       //virtual function ensure the inherited class will be accessed only
	       virtual void display(void){
		       cout<<"Importance of the virtual function in cpp"<<endl;
	       }  	
};

class CWHVideo : public CWH	
{
	int video_length;
	public:
	CWHVideo(string s,float r,float vl):CWH(s, r)
	{
	   video_length  = vl;
	}
	void display(){
		cout<<"CWHVideo Amazing video with title "<<title<<endl;
		cout<<"CWHVideo Rating : "<<rating<<" out of 5 stars "<<endl;
		cout<<"CWH Video Length of video is == "<<video_length<<" minuts "<<endl;
	}
	
};

class CWHText :public CWH
{
	int words;
	public:
	       CWHText(string s, float r,int wc) : CWH(s, r){
	       words = wc;
	}//if the display function is commented then it will prefer the class member function and print 
	 //the display//it will not give the error
//	void display(){
//		cout<<"CWHText text tutorial with title : "<<title<<endl;	
//		cout<<"CWHText Rating of this text tutorial : "<<rating<<" out of 5 stars "<<endl;
//		cout<<"CWHText No of words in this text tutorial is : "<<words<<endl;
//	}	
};
int main(void)
{
	  string  title = new char [30];
	  float rating,vlen;
	  int words;
	  title = "Django tutorial";
	  vlen = 4.56;
	  rating = 4.89;
	  CWHVideo djVideo(title, rating, vlen);
	 // djVideo.display();
	 
	 
	  title = "Django tutorial";
	  words = 456;
	  rating = 4.89;
	  CWHText djText(title, rating, words);
	  djText.display();

	  CWH* tuts[2];
	  tuts[0] = &djVideo;
	  tuts[1] = &djText;	
	
	  tuts[0] -> display();
	  //virtual function sure the same inherited fucntion will be called by the pointer
	  //if remove the virtual function then it wil give the base messages
	  tuts[1] -> display();
	
	  return 0;
}
//Rules for the virtual function
//it must not static
//They are accessed by the object pointer
//Virtual fuction can be friend of another class
//If a vitual function defined in the base class then do not need to define in the derived class
// 
