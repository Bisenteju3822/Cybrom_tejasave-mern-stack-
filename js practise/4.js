const modifier=function(bass){
    return bass*1.5;
}
const regulation=function(shrill){
    return shrill+10;
}
  const soundClarity=function(shrill ,bass){
    const modifiedShrill=regulation(shrill);
    const modifiedBass=modifier(bass) ;
    return{shrill:modifiedShrill,bass:modifiedBass};
  }
  console.log(soundClarity(79,105));