int check_value(int limit) {
    int counter = 0;

    while (counter < limit) {
        if (counter > 10) {
            return 1; 
        }
        counter++;
    }

    return 0; 
}
