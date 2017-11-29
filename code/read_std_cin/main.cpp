#include <iostream>

void read_graph( std::istream& is ) {
  int N, i, j;
  int from, to;
  double weight;
  is >> N;
  for( i = 0 ; i < N ; i ++ ) {
    for( j = 0 ; j < N-1 ; j ++ ) {
      is >> from >> to >> weight;
      std::cout << from << " " << to << " " << weight << std::endl;
    }
  }
}

int main( ) {
  read_graph( std::cin );
  return 0;
}
