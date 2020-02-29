funcation clickUser(){
    $.get("/user_input_btn", {}, function(response){
        $("#user_input_btn").html(response);
});
}