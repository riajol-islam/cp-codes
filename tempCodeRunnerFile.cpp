 cout << "[";
        for(int i = 0; i < ans.size(); i++){
            cout << "[";
            for(int j = 0; j < ans[i].size(); j++){
                cout << ans[i][j];
                if(j + 1 < ans[i].size())
                    cout << ",";
            }
            cout<<"]";
           
            if(i + 1 < ans.size())
                cout << ",";
        }
        cout << "]" << endl;
    }
    