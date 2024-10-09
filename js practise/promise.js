/*let firstPromise = new Promise((resolve, reject) => {
    console.log("love teju");
    resolve(new error("internal server error"));
});

firstPromise
    .then(result => {
        console.log(result);
    })
    .catch(error => {
        console.error(error);  // Outputs: internal server error
    });

 */
    /*setTimeout(()=>{
        console.log("hello")
    },15000)*/


    let secondpromise =new Promise((resolve,reject)=>{
        console.log("true")
        let value=false
      if(value){
         resolve(new Worker("coreect"))
      }
      else{
        reject(new Worker("false"))
      }
    })
    secondpromise
   /* .then(result =>{
        console.log("false")
    })*/
    .catch(result=>{
   console.log("not")
    }

    )

    

    

    