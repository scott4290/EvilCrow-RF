const char ButtonConf[] PROGMEM = R"=====(
<html>
<head>
    <title>Button TX Config</title>
    <meta charset="utf-8">
    <link rel="stylesheet" href="style.css">
    <script src="lib.js"></script> 
</head>
<body>
<body>
<nav id='menu'>
  <input type='checkbox' id='responsive-menu' onclick='updatemenu()'><label></label>
  <ul>
    <li><a href='/'>Home</a></li>
    <li><a class='dropdown-arrow'>Config</a>
      <ul class='sub-menus'>
        <li><a href='/txconfig'>RAW TX Config</a></li>
        <li><a href='/txbinary'>Binary TX Config</a></li>
        <li><a href='/rxconfig'>RX Config</a></li>
        <li><a href='/btnconfig'>Button TX Config</a></li>
      </ul>
    </li>
    <li><a class='dropdown-arrow'>RX Log</a>
      <ul class='sub-menus'>
        <li><a href='/viewlog'>RX Logs</a></li>
        <li><a href='/delete'>Delete Logs</a></li>
        <li><a href='/downloadlog'>Download Logs</a></li>
        <li><a href='/cleanspiffs'>Clean SPIFFS</a></li>
      </ul>
    </li>
  </ul>
</nav>
<br>
<br>
<FORM action="/setbtn" method="post" id="config" target="iframe">
    <p>Button: </p>
    <label class="custom-select" for="styledSelect1">
    <select name="button" form="config" id="styledSelect1">
       <option value="1">Button 1</option> 
       <option value="2">Button 2</option> 
    </select>
    </label>
    <hr>
    <p>Modulation: </p>
    <label class="custom-select" for="styledSelect1">
    <select name="mod" form="config" id="styledSelect1">
       <option value="0">2-FSK</option> 
       <option value="1">GFSK</option>
       <option value="2">ASK/OOK</option>
       <option value="3">4-FSK</option> 
       <option value="4">MSK</option> 
    </select>
    </label>
    <hr>
    <p>Transmissions: </p>
    <label class="custom-select" for="styledSelect1">
    <select name="transmissions" form="config" id="styledSelect1">
       <option value="1">1</option> 
       <option value="2">2</option>
       <option value="3">3</option>
       <option value="4">4</option> 
       <option value="5">5</option>
       <option value="6">6</option> 
       <option value="7">7</option>
       <option value="8">8</option>
       <option value="9">9</option> 
       <option value="10">10</option>
    </select>
    </label>
    <hr>
    <p>Frequency: </p><textarea class="css-input-text" form="config" rows="1" cols="50" name="frequency"></textarea>
    <hr>
    <p>RAW Data: </p><textarea class="css-input-text" form="config" rows="1" cols="50" name="rawdata"></textarea>
    <hr>
    <p>Deviation: </p><textarea class="css-input-text" form="config" rows="1" cols="50" name="deviation"></textarea>
    <hr>
    <INPUT type="radio" name="configmodule" value="3" hidden="1" checked="checked">
    <INPUT class="button-submit" type="submit" value="Configure">
</form>
<br>
<hr>
<br>
<iframe style="visibility: hidden;" src="http://" )+local_IPstr+"/setrx" name="iframe"></iframe>
</body>
</html>
)=====";
