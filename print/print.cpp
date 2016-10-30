void print(unordered_map<int,vector<int>>* input)
{
    for (auto mapIt = input->begin(); mapIt != input->end(); mapIt++)
    {   
        cout << "Node " << mapIt->first << " has vector of: ";
        print(&mapIt->second);
        cout << endl;
    }   
}

void print(vector<int>* input)
{
    for (int i = 0; i < input->size(); i++) 
    {   
        cout << input->at(i) << " ";
    }   
    cout << endl;
}

void print(stack<int> input)
{
    while (input.size() > 0)
    {   
        cout << input.top() << " ";
        input.pop();
    }   
    cout << endl;
}

void print(vector<pair<int,int>>* input)
{
    for (auto &x : *input)
    {   
        cout << "[" << x.first << "," << x.second << "]";
    }   
    cout << endl;
}
