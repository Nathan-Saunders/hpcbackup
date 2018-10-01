void headlessHist(void)
{   TCanvas *can = new TCanvas;
      can->Divide(2,2);
      
         TGraph *gcl = new TGraph("headless.txt","%*lg %*lg %*lg %*lg %*lg %lg %lg");
         
            can->cd(1);
               gcl->Draw("ap");
                  can->cd(2);
                     gcl->Draw("ap");
                        
                           TH1I *hist1 = new TH1I("hist",";miles between oil change", 20, 2000, 9000);
                              
                                 int n = gcl->GetN();
                                    for (int i=0; i<n; i++)  {
                                         hist1->Fill(gcl->GetX()[i]);
                                            }
                                               can->cd(3);
                                                  hist1->Draw();
                                                        
                                                           TH1I *hist2 = new TH1I("hist",";mileage", 20, 0, 200);
                                                              
                                                              .   int m = gcl->GetN();
                                                                 for (int i=0; i<m; i++)  {
                                                                      hist2->Fill(gcl->GetY()[i]);
                                                                         }
                                                                            can->cd(4);
                                                                               hist2->Draw();
                                                                               }