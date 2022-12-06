## Distributed systems projects inspired by MIT 6.824 course
The original [course](https://pdos.csail.mit.edu/6.824/index.html) is written in Golang, but in this repo we will start from scratch with C++ 17.


List of projects to be implemented
- [X] MapReduce
- [ ] Raft 
- [ ] Fault-tolerant Key/Value service 
- [ ] Sharded Key/Value service
- [ ] Maybe something else?


### MapReduce 
Ref: [Original paper](https://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf)

Our implementation: 
- is header only library & template based.
- implements Load Balancing.
- is Fault-tolerent and support automatic recovery.
- has `WordCount`, `grepper` and `InvertedIndex` as examples.
