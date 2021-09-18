// Javascript function that returns the number of bits in binary representation of a number
//  @return {number}

export default function bitlength(number)
{
  let bitCounter =0;
  while((1<< bitCounter) <= number)
    bitCounter++;
  
  return bitCounter;
}
