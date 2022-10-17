function save() {
  const name = document.getElementById("name").value;
  const email = document.getElementById("email").value;
  const pwd = document.getElementById("pwd").value;
  const mob = document.getElementById("mob").value;
  if (name != null && email != null && pwd != null && mob != null) {
    
    obj = {
      'name': name,
      'email': email,
      'mob': mob,
      'pwd': pwd
    }
    ls = localStorage.getItem('name');
    ls = JSON.parse(ls);
    if (ls == null) {
      data = [obj]
    } else {
      data = [obj]
      ls.forEach(element => {
        data.push(element)
      });
    }
    localStorage.setItem('name', JSON.stringify(data));
  }
  else{
  // const msg = document.createElement("h2")
  // msg.innerText="All details are mandatory"
  // document.body.appendChild(msg)
  
  alert("gfjdg")}
    return false;
}

const getData = () => {
  console.log("get Data")
  let data = localStorage.getItem("name");
  data = JSON.parse(data);
  data.forEach(element => {
    console.log(element)
    let email = element.email;
    let name = element.name;
    let pwd = element.pwd;
    let mob = element.mob;
    let h1 = document.createElement("h1");
    h1.innerText = `email = ${email}, name = ${name}, pwd = ${pwd}, mob = ${mob}`
    document.body.appendChild(h1);
  })
}

(() => {
})()


function clear(){
document.getElementById("name").value="";
document.getElementById("email").value="";
document.getElementById("pwd").value="";
document.getElementById("mob").value="";
console.log("sdfgjysdtyfrtyhj")
}

