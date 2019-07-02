
class okrag{
	private:
		
		punkt srodek;
		float promien;
		friend float dlugoscOdcinka();
		friend void wypisz(okrag okr1, okrag okr2);
		friend int przeciecie(okrag &okr1, okrag &okr2);
		
	public:
		static int licznik;
		void wyswietl();
		void wyswietl_r();
		
		okrag();
		okrag(punkt SRODEK, float PROMIEN);
		~okrag();

};
