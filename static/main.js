funcation clickLogin(){
    var theWord = $("#username-input").val();
    $.get("/log", {}, function(response){
        $("#username").html(response);
    });
}
