void 9.22part1(void)
{
   TGraph *gr = new TGraph("9.22.txt");
   gr->SetLineColor(kGreen);
   gr->SetTitle("1st look at given data");
   gr->Draw();
}