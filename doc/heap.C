void heap()
{
   TCanvas *can = new TCanvas;
   
   TF1 *G = new TF1("G", "pol1+gaus(2)", 2., 8.);
   G->SetParameters(10000,1000,10004,5,.4);
   G->SetTitle();
   G->GetXaxis()->SetTitle("Energy [keV]");
   G->GetXaxis()->CenterTitle();
   G->GetYaxis()->SetTitle("Entries/(0.1 keV)");
   G->GetYaxis()->CenterTitle();
   G->SetLineColor(kRed);
   G->Draw();
   
   TF1 *L = new TF1("L", "pol1", 2., 8.);
   L->SetParameters(10000, 1000);
   L->SetLineColor(kBlue);
   L->Draw("same");
   
   TLegend *legend = new TLegend(.2, .8, .45, .95);
   legend->AddEntry(G, "signal", "1");
   legend->AddEntry(L, "background", "1");
   legend->Draw();
   
   can->Print("heap.png");
}