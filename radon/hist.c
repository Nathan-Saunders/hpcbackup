{
   TTree *t = new TTree("t", "Radon data");
   t->ReadFile("latlong.txt", "a");
   TH1F *h = new TH1F("h"," ;average concentration (pCi/L); # of tests per bin", 6, 0, 24);
   h->GetXaxis()->CenterTitle();
   h->GetYaxis()->CenterTitle();
   gStyle->SetOptStat(0);
   t->Draw("a>>h");
}

   