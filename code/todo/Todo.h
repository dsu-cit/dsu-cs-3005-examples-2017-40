#ifndef _TODO_H_
#define _TODO_H_

#include <iostream>

class Todo {
public:

  Todo( );
  Todo( const char *description, float priority );
  Todo( const char *description );
  Todo( const Todo& src );

  Todo& operator=( const Todo& rhs );

  bool setDescription( const char *description );
  bool setPriority( float priority );
  bool bumpPriority( float priority );

  const char* getDescription( ) const;
  float getPriority( ) const;
  
protected:

  char *mDescription;
  float mPriority;

private:
};

std::ostream& operator<<( std::ostream& os, const Todo& rhs );

#endif /* _TODO_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */
