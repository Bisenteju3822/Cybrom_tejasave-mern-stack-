//let data =new Data()
//let time =data.tolocalTimestring()
//console.log(time);
setInterval(()=>{
    let show_time = document.getElementById('time')
    let date=new Date()
 let time=date.toLocaleTimeString()
 //console.log(time);
 show_time.innerHTML=time
},1000)