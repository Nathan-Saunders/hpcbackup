{
   TTree *t=new TTree("t","Radon data");
   t->ReadFile("latlong.txt","a:y:x");
   t->SetMarkerStyle(20);
   TH2F *hm = new TH2F("hm","Rn Concentration Map;latitude;longitude;pCi/L",100,-96.95,-96.875,100,42.7694,42.798);
   gStyle->SetOptStat(0);
   hm->GetZaxis()->SetTitleOffset(-0.4);
   hm->GetYaxis()->SetTitleOffset(1.2);
   hm->GetZaxis()->CenterTitle();
   hm->GetXaxis()->CenterTitle();
   hm->GetYaxis()->CenterTitle();
   t->Draw("y:x:a>>hm", "", "colz");
   //hm->Draw();
   TLine *l=new TLine(-96.9423, 42.7792, -96.88, 42.7792);
   l->SetLineStyle(7);
   l->SetLineColor(kBlack);
   l->Draw();
   TText *st1 = new TText(-96.905, 42.7792, "Main St.");
   st1->Draw();
   TText *st2 = new TText(-96.9342, 42.7929, "N Dakota St.");
   st2->Draw();
   TText *st3 = new TText(-96.905, 42.78667, "Cherry St.");
   st3->Draw();
   TLine *k=new TLine(-96.9423, 42.78667, -96.88, 42.78667);
   k->SetLineStyle(6);
   k->SetLineColor(kBlack);
   k->Draw();
   TLine *j=new TLine(-96.9292, 42.7792, -96.9292, 42.7932);
   j->SetLineStyle(4);
   j->Draw();
   //TLine *i=new TLine(
   gPad->Print("latlong.pdf");
}