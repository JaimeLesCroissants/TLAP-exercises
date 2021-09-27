#include <iostream>

using namespace std;

typedef char *arrayStr;

int length(arrayStr &s){
    int count=0;
    while(s[count]!=0){
       count++;
    }
    return count;
}

void append(arrayStr &s,char c){
    int oldLength=length(s);
    arrayStr newStr=new char[oldLength+1];
    for(int i=0;i<oldLength;i++){
        newStr[i]=s[i];
    }
    newStr[oldLength]=c;
    newStr[oldLength+1]=0;
    delete[] s;
    s=newStr;
}
void concatenate(arrayStr &s1,arrayStr &s2){
    int s1len=length(s1);
    int s2len=length(s2);

    int newLen=s1len+s2len;
    arrayStr newStr=new char[newLen+1];
    for(int i=0;i<s1len;i++){
        newStr[i]=s1[i];
    }
    for(int i=0;i<s2len;i++){
        newStr[s1len+i]=s2[i];
    }
    newStr[newLen]=0;
    delete[] s1;
    s1=newStr;

}

arrayStr substring(arrayStr &s,int strt,int len){
    arrayStr newStr=new char[len+1];
    for(int i=0;i<len;i++){
        if(strt==0){
            newStr[i]=s[strt+i];
        }else{
            newStr[i]=s[(strt-1)+i];
        }
    }
    newStr[len]=0;
    return newStr;
}


char characterAt(arrayStr &s,int position){
    return s[position];
}
int main()
{
    arrayStr rep=new char[11];
    rep[0]='a';rep[1]='b';rep[2]='c';rep[3]='b';rep[4]='a';rep[5]='b';rep[6]='a';rep[7]='b';rep[8]='c';rep[9]='b';rep[10]=0;
    arrayStr rt=new char[3];
    rt[0]='a';rt[1]='b';rt[2]=0;
    arrayStr temp=rep;;
    int len=length(rt);
    int count=0;
    int is=0;
    //string k="abcdeabeeabcefght";
    //string l="abc";
    //string rep="xy";
    //cout<<k<<endl;
    for(int i=0;i<length(temp);i++){
            count=0;
        for(int j=0;j<len;j++){
            if(temp[i+j]==rt[j]){
                count++;
                if(count==len){
                        for(int b=i;b<i+len;b++){
                        temp[b]='x';
                    }
                    cout<<i<<endl;
            }
            }else{
                count--;
            }
        }
    }
    cout<<rep<<endl;
    cout<<temp<<endl;
    //cout<<is<<endl;
    //arrayStr a=new char[5];
    //a[0]='i';a[1]='l';a[2]='i';a[3]='a';a[4]=0;
    //cout<<a<<" "<<endl;
    //append(a,'s');
    //cout<<characterAt(a,1)<<endl;
    //arrayStr b=new char[9];//shamakhia
    //b[0]='s';b[1]='h';b[2]='a';b[3]='m';b[4]='a';b[5]='k';b[6]='h';b[7]='i';b[8]='a';b[9]=0;
    //concatenate(a,b);
    //cout<<a<<endl;
    //arrayStr c=new char[8];
    //c[0]='a';c[1]='b';c[2]='c';c[3]='d';c[4]='e';c[5]='f';c[6]='g';c[7]=0;
    //cout<<a<<endl;
    //arrayStr d=substring(a,0,2);
   // cout<<d<<endl;
    //cout<<a<<endl;
    return 0;
}
