// #include <iostream>
// #include <map>
// #include<string>
// using namespace std;
// int main()
// {
// // Create a map of strings to integers
// map<string, int> emap;

// // Insert some values into the map
// emap["one"] = 1;
// emap["two"] = 2;
// emap["three"] = 3;

// // Get an iterator pointing to the first element in the map
// map<string, int> :: iterator iter=emap.begin();


// // Iterate through the map and print the elements
// while (iter != emap.end())
// {
// 	std::cout << "Key: " << (*iter).first << ", Value: " << (*iter).second << std::endl;
// 	++iter;
// }

// return 0;
// }

// C++ program for illustration
// of map::find() function
#include <bits/stdc++.h>
using namespace std;

int main()
{

	// Initialize container
	map<int, int> m;

	// Insert elements in random order
	m.insert({ 2, 30 });
	m.insert({ 1, 40 });
	m.insert({ 3, 20 });
	m.insert({ 4, 50 });

	int s1=2; //element1 to find (exist in the map)
	int s2=5; //element2 to find (does not exist in the map)
	
	cout << "Element "<<s1;
	if(m.find(s1)!=m.end()){
	//if the element is found before the end of the map
	cout<<" : found : Value : "<<m[s1]<<endl;
	//if the element is present then you can access it using the index
	}
	else cout<<" : Not found"<<endl;

	cout << "Element "<<s2;
	if(m.find(s2)==m.end()){
	//if the element is found before the end of the map
	cout<<" : not found : Value : ";
	//if the element is present then you can access it using the index
	}
	else cout<<" : Not found"<<endl;
	
	return 0;
}

