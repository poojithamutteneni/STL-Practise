#include <iostream>
#include <iterator>
#include <unordered_set>
using namespace std;
int main(){
	unordered_multiset<int> ums;
	unordered_multiset<int> ums1;
	unordered_multiset<int> :: iterator it;
	ums = {1,2,3,4,5};
	ums1 = {99, 88, 77, 66, 55};
	ums.insert(100);
	cout << "\nElements in the unordered multiset are: " << endl;
	for(it= ums.begin(); it!=ums.end(); ++it) {
		cout << *it << " ";
	}
	cout << "\nElements in the unordered multiset ums1 are: " << endl;
	for(it= ums1.begin(); it!=ums1.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	cout << "\nSize of the unordered multiset is: " << ums.size() << endl;
	cout << "\nMaximum size of the unordered multiset is: " << ums.max_size() << endl;
	cout << "\nDoing swap opeartion: " << endl;
	ums.swap(ums1);
	cout << "\nElements in ums after swap are: " << endl;
	for(it= ums.begin(); it!=ums.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	cout << "\nElements in the ums2 after swap are: " << endl;
	for(it= ums1.begin(); it!=ums1.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	cout << "\nApplying clear() opeartion: " << endl;
	ums.clear();
	cout << "\nChecking unordered multiset is empty or not: " << endl;
	ums.empty()? cout << "\nMultiset empty":
    cout << "\nMultiset empty"<<endl;
}
