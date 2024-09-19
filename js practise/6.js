//document.querySelector('.n1').textContent="tea"
const trigger=function(event){
    event.preventDefault()
    const option=document.querySelector('.n2').value
    if(option.trim().toLowercase()==='tea'){
        document.querySelector('.n3').textContent='Coffee is such a versatile and beloved beverage! Whether you’re looking for a quick energy boost or just enjoying the rich flavors, there’s a lot to appreciate about it. Here are a few interesting points about coffee:'
    }
  else  if(option.trim().toLowercase()==='coffee'){
    document.querySelector('.n3').textContent='Tea is a fascinating beverage with a rich history and a variety of flavors! Originating from the leaves of the Camellia sinensis plant, tea has been enjoyed for thousands of years, especially in China and Japan1. There are several types '
      
    }
    else{
        document.querySelector('.n3').textContent='It sounds like you’re interested in something new! Are you looking to try a new type of tea, learn a new programming'
    }
    
}
document.querySelector('.n3').addEventListener('click',trigger);