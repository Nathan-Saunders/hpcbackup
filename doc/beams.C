int beams() {
   TCanvas *c = new TCanvas("c", "graph example", 200, 10, 700, 550);
   TGraph *g1 = new TGraph("9.20.txt", "%lg %lg *lg");
   g1->SetLineColor(kGreen);
   TGraph *g2 = new TGraph("9.20.txt", "%lg %*lg %lg");
   g2->SetLineColor(kBlue);
   
   TMultiGraph *mg = new TMultiGraph();
   mg->Add(g1, "lp");
   mg->Add(g2, "cp");
   mg->Draw("a");
   mg->GetXaxis()->SetTitle("Deflect");
   mg->GetYaxis()->SetTitle("Force");
   mg->GetXaxis()->CenterTitle();
   mg->GetYaxis()->CenterTitle();
   
   TLegend *l = new TLegend (.55, .8, .75, .9);
   l->AddEntry(g1, "C", "l");
   l->AddEntry(g2, "B", "l");
   l->Draw();
   
   return c;
}