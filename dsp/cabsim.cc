// generated from file './/cabsim.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace cabsim {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fRec0[11];
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "cabsim";
	name = N_("cabsim");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<11; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (4.74771115646013e-48 * fConst0);
	fConst2 = (1.94221992081364e-16 + (fConst0 * ((fConst0 * (9.85383350687392e-19 + (fConst0 * ((fConst0 * (7.15321016660753e-24 + (fConst0 * ((fConst0 * (9.60666781385515e-31 + (fConst0 * ((fConst0 * (7.28649012683326e-39 + (fConst0 * (fConst1 - 3.01524617294642e-43)))) - 1.11522430470432e-34)))) - 5.19395041070968e-27)))) - 3.99474882174623e-21)))) - 8.97973352141616e-17)));
	fConst3 = (4.74771115646013e-47 * fConst0);
	fConst4 = faustpower<2>(fConst0);
	fConst5 = (1.94221992081364e-15 + (fConst0 * ((fConst0 * (5.91230010412435e-18 + (fConst0 * ((fConst0 * (1.43064203332151e-23 + (fConst4 * ((fConst0 * (4.46089721881728e-34 + (fConst0 * ((fConst0 * (2.41219693835714e-42 - fConst3)) - 4.37189407609995e-38)))) - 1.92133356277103e-30)))) - 1.59789952869849e-20)))) - 7.18378681713293e-16)));
	fConst6 = (2.13647002040706e-46 * fConst0);
	fConst7 = (8.7399896436614e-15 + (fConst0 * ((fConst0 * (1.28099835589361e-17 + (fConst0 * ((fConst0 * ((fConst0 * (2.59697520535484e-26 + (fConst0 * ((fConst0 * ((fConst0 * (9.47243716488323e-38 + (fConst0 * (fConst6 - 8.14116466695533e-42)))) - 3.34567291411296e-34)) - 2.88200034415655e-30)))) - 2.14596304998226e-23)) - 1.19842464652387e-20)))) - 2.42452805078236e-15)));
	fConst8 = (5.69725338775216e-46 * fConst0);
	fConst9 = (2.33066390497637e-14 + (fConst0 * ((fConst0 * (7.88306680549914e-18 + (fConst0 * (3.19579905739699e-20 + (fConst0 * ((fConst4 * (7.68533425108412e-30 + (fConst0 * ((fConst0 * ((fConst0 * (1.44731816301428e-41 - fConst8)) - 5.8291921014666e-38)) - 8.92179443763456e-34)))) - 5.72256813328603e-23)))))) - 4.31027209027976e-15)));
	fConst10 = (9.97019342856628e-46 * fConst0);
	fConst11 = (4.07866183370865e-14 + (fConst0 * ((fConst0 * ((fConst0 * (5.59264835044473e-20 + (fConst0 * (1.43064203332151e-23 + (fConst0 * ((fConst0 * (1.92133356277103e-30 + (fConst0 * (1.56131402658605e-33 + (fConst0 * ((fConst0 * (fConst10 - 1.2664033926375e-41)) - 1.02010861775666e-37)))))) - 5.19395041070969e-26)))))) - 1.37953669096235e-17)) - 3.77148807899479e-15)));
	fConst12 = (4.89439420045038e-14 + (fConst4 * ((fConst4 * (8.58385219992904e-23 + (fConst4 * ((fConst4 * (2.04021723551331e-37 - (1.19642321142795e-45 * fConst4))) - 1.15280013766262e-29)))) - 2.7590733819247e-17)));
	fConst13 = (4.07866183370865e-14 + (fConst0 * (3.77148807899479e-15 + (fConst0 * ((fConst0 * ((fConst0 * (1.43064203332151e-23 + (fConst0 * (5.19395041070969e-26 + (fConst0 * (1.92133356277103e-30 + (fConst0 * ((fConst0 * ((fConst0 * (1.2664033926375e-41 + fConst10)) - 1.02010861775666e-37)) - 1.56131402658605e-33)))))))) - 5.59264835044473e-20)) - 1.37953669096235e-17)))));
	fConst14 = (2.33066390497637e-14 + (fConst0 * (4.31027209027976e-15 + (fConst0 * (7.88306680549914e-18 + (fConst0 * ((fConst0 * ((fConst4 * (7.68533425108412e-30 + (fConst0 * (8.92179443763456e-34 + (fConst0 * ((fConst0 * (0 - (1.44731816301428e-41 + fConst8))) - 5.8291921014666e-38)))))) - 5.72256813328603e-23)) - 3.19579905739699e-20)))))));
	fConst15 = (8.7399896436614e-15 + (fConst0 * (2.42452805078236e-15 + (fConst0 * (1.28099835589361e-17 + (fConst0 * (1.19842464652387e-20 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (3.34567291411296e-34 + (fConst0 * (9.47243716488323e-38 + (fConst0 * (8.14116466695533e-42 + fConst6)))))) - 2.88200034415655e-30)) - 2.59697520535484e-26)) - 2.14596304998226e-23)))))))));
	fConst16 = (1.94221992081364e-15 + (fConst0 * (7.18378681713293e-16 + (fConst0 * (5.91230010412435e-18 + (fConst0 * (1.59789952869849e-20 + (fConst0 * (1.43064203332151e-23 + (fConst4 * ((fConst0 * ((fConst0 * ((fConst0 * (0 - (2.41219693835714e-42 + fConst3))) - 4.37189407609995e-38)) - 4.46089721881728e-34)) - 1.92133356277103e-30)))))))))));
	fConst17 = (1.94221992081364e-16 + (fConst0 * (8.97973352141616e-17 + (fConst0 * (9.85383350687392e-19 + (fConst0 * (3.99474882174623e-21 + (fConst0 * (7.15321016660753e-24 + (fConst0 * (5.19395041070968e-27 + (fConst0 * (9.60666781385515e-31 + (fConst0 * (1.11522430470432e-34 + (fConst0 * (7.28649012683326e-39 + (fConst0 * (3.01524617294642e-43 + fConst1)))))))))))))))))));
	fConst18 = (1.0 / fConst17);
	fConst19 = (1.20777018044068e-31 * fConst0);
	fConst20 = (5.14828211608485e-22 + (fConst0 * (4.35235770093813e-24 + (fConst0 * (2.11496783542166e-27 + fConst19)))));
	fConst21 = (fConst0 * (5.22282924112576e-23 - (1.44932421652882e-30 * fConst4)));
	fConst22 = (fConst0 * (8.70471540187627e-24 - (2.41554036088136e-31 * fConst4)));
	fConst23 = (2.05931284643394e-21 + fConst22);
	fConst24 = (3.62331054132204e-31 * fConst0);
	fConst25 = (1.54448463482546e-21 + (fConst0 * ((fConst0 * (0 - (1.05748391771083e-26 + fConst24))) - 1.30570731028144e-23)));
	fConst26 = (fConst0 * ((9.66216144352544e-31 * fConst4) - 3.48188616075051e-23));
	fConst27 = (fConst26 - 4.11862569286788e-21);
	fConst28 = (2.41554036088136e-31 * fConst0);
	fConst29 = ((fConst0 * (8.70471540187627e-24 + (fConst0 * (2.11496783542166e-26 + fConst28)))) - 7.2075949625188e-21);
	fConst30 = (7.2075949625188e-21 + (fConst0 * (8.70471540187627e-24 + (fConst0 * (fConst28 - 2.11496783542166e-26)))));
	fConst31 = (4.11862569286788e-21 + fConst26);
	fConst32 = ((fConst0 * ((fConst0 * (1.05748391771083e-26 - fConst24)) - 1.30570731028144e-23)) - 1.54448463482546e-21);
	fConst33 = (fConst22 - 2.05931284643394e-21);
	fConst34 = ((fConst0 * (4.35235770093813e-24 + (fConst0 * (fConst19 - 2.11496783542166e-27)))) - 5.14828211608485e-22);
	fConst35 = (faustpower<3>(fConst0) / fConst17);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	for (int i=0; i<count; i++) {
		fRec0[0] = ((double)input0[i] - (fConst18 * ((((((((((fConst16 * fRec0[1]) + (fConst15 * fRec0[2])) + (fConst14 * fRec0[3])) + (fConst13 * fRec0[4])) + (fConst12 * fRec0[5])) + (fConst11 * fRec0[6])) + (fConst9 * fRec0[7])) + (fConst7 * fRec0[8])) + (fConst5 * fRec0[9])) + (fConst2 * fRec0[10]))));
		output0[i] = (FAUSTFLOAT)(fConst35 * ((fConst34 * fRec0[10]) + ((fConst33 * fRec0[9]) + ((fConst32 * fRec0[8]) + ((fConst31 * fRec0[7]) + ((fConst30 * fRec0[6]) + ((fConst29 * fRec0[4]) + ((fConst27 * fRec0[3]) + ((fConst25 * fRec0[2]) + ((fConst23 * fRec0[1]) + ((fConst21 * fRec0[5]) + (fConst20 * fRec0[0]))))))))))));
		// post processing
		for (int i=10; i>0; i--) fRec0[i] = fRec0[i-1];
	}
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
} PortIndex;
*/

} // end namespace cabsim
