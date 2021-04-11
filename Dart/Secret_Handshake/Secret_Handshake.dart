class SecretHandshake {
  List<String> commands(int num){
    List<int> binary = [0,0,0,0,0];
    List<String> handshake = [];
    int cnt = 0;
    while(num > 0){
      if(num % 2 == 1){
        binary[cnt] = 1;
      }
      num = (num / 2).toInt();
      cnt++;
    }

    if(binary[0] == 1) handshake.add("wink");
    if(binary[1] == 1) handshake.add("double blink");
    if(binary[2] == 1) handshake.add("close your eyes");
    if(binary[3] == 1) handshake.add("jump");
    if(binary[4] == 1) handshake = handshake.reversed.toList();

    return handshake;
  }
}
