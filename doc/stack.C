void stack()
{
   TF1 G("G", "gausn(0)", -12., 12.);
   TF1 L("L", "pol1(0)", -12., 12.);
   G.SetParameters(100,0,3);
   L.SetParameter(0,5);
   L.SetParameter(1,.25);
   G.Draw();
   L.Draw("same");
}