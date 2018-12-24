using namespace std;

int t01_unique() {
    int N;
    cin>>N;
    int x;
    set <int> different_numbers;
    for (int i = 0; i < N; i++){
        cin>>x;
        different_numbers.insert(x);
    }
    cout<<different_numbers.size();
}
