function submit()
{
    var x = document.getElementById("nameid").value;
    if(x == "")
    {
        alert("Name Must Be Filled");
    }
    var y = document.getElementById("passid").value;
    if(y == "")
    {
        alert("Password Must Be Filled");
    }
    var z = document.getElementById("mailid").value;
    if(z == "")
    {
        alert("Mail Id Must be filled");
    }
    var a = document.getElementById("nameid").value;
    var b = document.getElementById("passid").value;
    var c = document.getElementById("mailid").value;
    let s = document.querySelector("#showdata");
          s.textContent= "USERNAME is :" + a +  "PASSWORD is :" + b + "MailID is :" + c;
       let k = document.querySelector("diaplayform");
       k.appendChild(s);

          document.getElementById("nameid").value="";
          document.getElementById("passid").value="";
          document.getElementById("mailid").value="";
         
}