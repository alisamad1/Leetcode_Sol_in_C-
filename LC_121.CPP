int maxProfit(vector<int>& prices) {
    int with_stock = INT_MIN, without_stock = 0;
    for(int x : prices){
        with_stock = with_stock > -x ? with_stock : -x;
        without_stock = without_stock > with_stock+x ? without_stock: with_stock+x;
    }
    return without_stock;
}