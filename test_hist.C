void test_hist () {
        TH1F* hpt = new TH1F( "hpt", "Pt distribution", 100, 0.0, 100.0 );
        hpt -> Draw();
}
