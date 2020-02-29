funcation clickLogin(){
    $.get("/log", {}, function(response){
        $("#displayBio").html(response);
    });
}
