Classes with dynamic memory
============================

Memory must be managed carefully to ensure
that data is not lost, memory is not leaked,
data is duplicated when appropriate, and
data is not overwritten.

Constructors:
-------------

Constructors must make sure any pointers
are initialized to 0 or valid memory from
the heap.

A default constructor is often needed for
the case of an instance created without
data.

A copy constructor is needed to allow
instances to be copied without causing
two instances to point to the same memory.

Destructors:
------------

A destructor must be provided to deallocate
any heap memory allocated during the lifetime
of the instance.

Assignment operators:
---------------------

An assignment operator must be defined to
allow an instance's value to be assigned
from another instance, without pointing
at the same memory.

Accessor methods:
-----------------

Set accessor methods must be careful to
manage memory correctly.  They usually
follow a this process:

- release any existing memory
- allocate the correct amount of memory needed
- copy source data into new memory

Get accessor methods must be careful to
use const on return types to ensure that
the memory is not corrupted outside of the
class.
