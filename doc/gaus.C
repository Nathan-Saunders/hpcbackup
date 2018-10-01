void random()
{

     //create a r.n.g.
     gRandom = new TRandom3();
     
     //creat a histogram
     TH1D *hist =new TH1D("data", ";x;N", 0.0, 0.0, 100.0);
     
     //Fill in the histogram
     for(int i=0; i<100; i++)
         hist->Fill(grandom->Gaus(10.0,5.0));
         
     TCanvas *c1 =new TCanvas("c1", "random", 5, 5, 800, 600);
     hist->Draw();
     hist->SaveAs("random.eps");
}