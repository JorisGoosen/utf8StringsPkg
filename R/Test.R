  
testutf8_in_locale <- function()
{
  
  mathotString <- "Mathôt!"
  print(sprintf("The string is: '%s' and its encoding: '%s'", mathotString, Encoding(mathotString)));

  print("Debug mathotString:")
  debugEncodedRString(mathotString);
}

  
testutf8_out_locale <- function()
{
  
  tao <- "陶德庆"
  print(sprintf("The string is: '%s' and its encoding: '%s'", tao, Encoding(tao)));

  print("Debug tao te ching:")
  debugEncodedRString(tao);
}