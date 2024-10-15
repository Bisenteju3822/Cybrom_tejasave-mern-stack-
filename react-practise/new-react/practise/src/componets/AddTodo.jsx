function AddTodo(){
    return (
    <div className="container text-center">
          <div className="row kg-row">
        
         <div className="col"><input type='text' placeholder='Enter todo Here'/></div>
         <div className="col"><input type='date'/></div>
         <div className="col"><button type="button" className="btn btn-success">Add</button></div>
       </div>
       </div>
    )

  }
export default AddTodo