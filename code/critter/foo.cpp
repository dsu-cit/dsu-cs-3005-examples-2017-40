class Critter {
public:
  bool isAlive( ) const;
};

bool Critter::isAlive( ) const {
  return mAlive;
}
  
void foo( ) {
  Critter *cptr = new Zebra( );
}
