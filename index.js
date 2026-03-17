

//selection of an element

/*var a=document.querySelector("h1")
 console.log(a);
 */

// changing html
/*var a=document.querySelector("h1")
 a.innerHTML="changed" */

 //changing css
  /*var a= document.querySelector("h1")
     a.style.color = "blue"
     a.style.backgroundColor="black" */
 // evnet listner
    //  var a=document.querySelector("h1")
    //  a.addEventListener("click",function(){
    //     console.log("hey");
    //  })

       // event listener

      /* var a=document.querySelector("h1")
       a.addEventListener("click",function(){
        a.innerHTML="i am shahabuddin"
        a.style.color="red"
        a.style.backgroundColor="black"
       })
       */


       //bulb program

        // var bulb=document.querySelector("#bulb")
        // var btn=document.querySelector("button")

        //  var flag=0
        // btn.addEventListener("click",function()
        
        // {

        //     if(flag==0)
        //     {
        //         bulb.style.backgroundColor="yellow"
        //         flag=1
        //     }
        //     else{
        //         bulb.style.backgroundColor="transparent"
        //         flag=0
        //     }
           
        // })


        const max= prompt("enter the max number:");
        console.log(max);


        const random= Math.floor(Math.random()*max)+1;
        

        let guess=prompt("enter the guess number:");
        while(true){
            if(guess=="quite"){
                console.log("user quite");
                break;
            }
            if(guess==random){
                console.log("correct");
                break;
            }
            else{
               guess=prompt("your guess are wrong: please try again");
            }
        }
        



