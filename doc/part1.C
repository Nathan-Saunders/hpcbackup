void part1(void)
{
   TF1 *line= new TF1("line", "[3]+[4]*x+gaus(0)", -2, 12);
   line->SetParameters(2.07, 5.01, .72, 3.01, .205);
   line->SetLineColor(kMagenta);
   
   TGraph *gr = new TGraph("922.txt");
   gr->SetTitle("Fitting Given Data");
   gr->Fit("line");
   gr->Draw("a*");
}