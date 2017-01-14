#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;


int main()
{
   cout << "Hello World" << endl; 
   typedef unordered_map<string, map<int, string> > NODE_INFO;
   typedef map<int, NODE_INFO> VERSION_INFO;
   
   VERSION_INFO version_info;
   
   int version_id = 1;
   string ps_idx = "123";
   int index = 0001;
   string ip_str = "192.168.0.1";
   
   NODE_INFO node_info;
   version_info[version_id][ps_idx][index] = "100";
   
   cout << version_info[version_id][ps_idx][index] << ", test:" << version_info[100]["123"][01] << endl;
   
   
   return 0;
}

