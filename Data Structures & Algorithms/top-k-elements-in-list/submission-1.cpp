class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;

        for (int num : nums){
            frequency[num]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;

        for (auto const& [numero, cantidad] : frequency){
            min_heap.push({cantidad, numero});
            
            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }

        vector<int> result;
        
        for (int i = 0; i < k; ++i) {
        // .top().second nos da el número (la clave) que estaba guardado
        result.push_back(min_heap.top().second); 
        min_heap.pop(); // Lo sacamos del heap para pasar al siguiente
        }

        return result;

        // hacemos un hash con clave (num[i]) y valor el numero de apariciones, despues hacemos un heap min con los datos del hash y vamos recorriendo k veces el heap metiendo los valores en un vector

    }
};
