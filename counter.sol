pragma solidity ^0.8.0;

contract counter{
  uint count;

  constructor() public{
    count=0;
  }

    function getcount() public view returns(uint){
        return count;
    }

    function incrementcount() public {
        count=count+1;
        
    }
}
