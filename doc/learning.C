void learning()
{
   TCanvas *can = new TCanvas;

   TF1 *ex = new TF1("ex", "pol1+expo(2)", -10, 10);
   ex->SetParameters(100000,0,10,-.5 );
   ex->SetTitle();
   ex->GetXaxis()->SetTitle("X AXIS");
   ex->GetXaxis()->CenterTitle();
   ex->GetYaxis()->SetTitle("Y AXIS");
   ex->GetYaxis()->CenterTitle();
   ex->GetYaxis()->SetTitleOffset(1.3);
   ex->SetLineColor(kRed);
   ex->Draw();
   
   TF1 *flat = new TF1("flat", "pol1(0)", -10, 10);
   flat->SetParameters(100000,0);
   flat->SetLineColor(kBlue);
   flat->Draw("same");
   
   TLegend *leg = new TLegend(.15, .75, .35, .85);
   leg->AddEntry(ex, "red line", "l");
   leg->AddEntry("flat", "blue line", "l");
   leg->Draw();
   
   can->Print("learning.png");
}