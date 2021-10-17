<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <script src="https://www.gstatic.com/firebasejs/8.5.0/firebase-app.js"></script>
    <script src="https://www.gstatic.com/firebasejs/8.5.0/firebase-database.js"></script>
</head>
<body>
    <div id="root"></div>
    <script>
        
        var firebaseConfig = {
          apiKey: "AIzaSyBdo8Nk3J7E8xUCIEFM_axrbTgt74CzEX4",
          authDomain: "iot-project-23662.firebaseapp.com",
          projectId: "iot-project-23662",
          storageBucket: "iot-project-23662.appspot.com",
          messagingSenderId: "1050983860857",
          appId: "1:1050983860857:web:4a432acfb3e674177c62a8"
        };
       
        firebase.initializeApp(firebaseConfig);
        var firebaseRef = firebase.database().ref('Numbers');
        firebaseRef.on("value" , function(snapshot){
            snapshot.forEach(function(element){
            document.querySelector('#root').innerHTML +=`
            <div>${element.val()}</div>
            `
             });
           
        }) 
      </script>
</body>
</html>
