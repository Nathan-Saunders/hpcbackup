{
   TGraph *gr = new TGraph ("text.txt", "%lg %lg");
   gr->GetXaxis()->SetTitle("something");
   gr->SetMarkerStyle(22);
   gr->SetMarkerSize(2.2);
   gr->SetMarkerColor(kRed); 
   gr->Draw("AC*");
   return c1;
}
