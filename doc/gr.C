{
   int n = 20;
   double x[100], y[100];
   for (int i=0; i<n; i++) {
      x[i] = i*0.1;
      y[i] = 10*sin(x[i]+0.2);
   }
   TGraph *gr = new TGraph(n,x,y);

   TGraph *gr = new TGraph("data.txt","%lg,%*lg,%lg");
   gr->GetXaxis()->SetTitle("something");
   gr->SetMarkerStyle(22);
   gr->SetMarkerSize(2.2);
   gr->SetMarkerColor(kRed);
   gr->Draw("Apl");
}
