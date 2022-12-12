The project is built to closely implement the original architecture proposed by MapReduce paper. 

<i> Note: Please notice that we also have one master in our implementation as well. The master is the WordCount or whatever the example project is. </i>

![Screen Shot 2022-12-12 at 10 36 49](https://user-images.githubusercontent.com/25881325/207012175-88b8d408-44f7-4045-aff1-4d64ff6b96fd.png)

"Input files" are handled by `Datastore`, "Intermediate files" are handled by `IntermediateStore` and similarly, "Output files" are handled by `Outputstore`.
All of the stores are run on their own respective process and support multiple clients and communicates via gRPC channel with it's clients.
