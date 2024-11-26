$(document).ready(function () {
  $('.head1').html("hi all we are not good")
  $('.head1').css("background-color", "red")
  let a = $('.head2')
  a.css({
    "color": "grey",
    "background-color": "black",
    "padding": "20px"
  })




  $("#btn1").click(function () {
    $('#para').slideUp(2000)
  })
  $("#btn2").click(function () {
    $('#para').slideDown(2000)
  })

})

