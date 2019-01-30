// generated from file './/jmp.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace jmp {

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
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fRec0[13];
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
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;

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
	id = "jmp";
	name = N_("jmp");
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
	for (int i=0; i<13; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (7.70564129415831e-58 * fConst0);
	fConst2 = (1.56134529812371e-16 + (fConst0 * ((fConst0 * (2.1955156604519e-20 + (fConst0 * ((fConst0 * (1.62810211718235e-25 + (fConst0 * ((fConst0 * (1.04203526982317e-31 + (fConst0 * ((fConst0 * (1.80896577558828e-39 + (fConst0 * ((fConst0 * (4.88200848427092e-48 + (fConst0 * (fConst1 - 1.11013173619754e-52)))) - 1.17535647019753e-43)))) - 1.79045742333266e-35)))) - 2.57474320137205e-28)))) - 8.04265114403731e-23)))) - 4.11949121731466e-18)));
	fConst3 = (9.24676955298997e-57 * fConst0);
	fConst4 = faustpower<2>(fConst0);
	fConst5 = (1.87361435774845e-15 + (fConst0 * ((fConst0 * (1.75641252836152e-19 + (fConst0 * ((fConst0 * (6.51240846872938e-25 + (fConst0 * ((fConst4 * (3.58091484666531e-35 + (fConst0 * ((fConst0 * (7.0521388211852e-43 + (fConst0 * ((fConst0 * (1.11013173619754e-51 - fConst3)) - 3.90560678741674e-47)))) - 7.23586310235311e-39)))) - 5.14948640274409e-28)))) - 4.82559068642239e-22)))) - 4.11949121731466e-17)));
	fConst6 = (5.08572325414448e-56 * fConst0);
	fConst7 = (1.03048789676165e-14 + (fConst0 * ((fConst0 * (5.70834071717493e-19 + (fConst0 * ((fConst0 * (3.25620423436469e-25 + (fConst0 * (1.02989728054882e-27 + (fConst0 * ((fConst0 * (7.16182969333062e-35 + (fConst0 * (3.61793155117656e-39 + (fConst0 * ((fConst0 * (1.26932220591044e-46 + (fConst0 * (fConst6 - 4.88457963926918e-51)))) - 1.41042776423704e-42)))))) - 6.25221161893904e-31)))))) - 9.65118137284478e-22)))) - 1.81257613561845e-16)));
	fConst8 = (1.69524108471483e-55 * fConst0);
	fConst9 = (3.43495965587216e-14 + (fConst0 * ((fConst0 * (8.78206264180758e-19 + (fConst0 * ((fConst0 * ((fConst0 * (2.57474320137205e-27 + (fConst4 * ((fConst0 * (2.17075893070593e-38 + (fConst0 * (2.35071294039507e-43 + (fConst0 * ((fConst0 * (1.2211449098173e-50 - fConst8)) - 1.95280339370837e-46)))))) - 1.79045742333266e-34)))) - 1.95372254061882e-24)) - 1.60853022880746e-22)))) - 4.53144033904613e-16)));
	fConst10 = (3.81429244060836e-55 * fConst0);
	fConst11 = (7.72865922571237e-14 + (fConst0 * ((fConst0 * (3.29327349067784e-19 + (fConst0 * (2.17151580889007e-21 + (fConst0 * ((fConst0 * ((fConst0 * (1.56305290473476e-30 + (fConst0 * ((fConst0 * ((fConst0 * (3.17346246953334e-42 + (fConst0 * (7.32301272640638e-47 + (fConst0 * (fConst10 - 1.83171736472594e-50)))))) - 3.07524181850007e-38)) - 8.95228711666328e-35)))) - 1.28737160068602e-27)) - 2.76777359920999e-24)))))) - 6.79716050856919e-16)));
	fConst12 = (6.10286790497338e-55 * fConst0);
	fConst13 = (1.23658547611398e-13 + (fConst0 * ((fConst0 * ((fConst0 * (2.89535441185343e-21 + (fConst0 * (1.30248169374588e-24 + (fConst0 * ((fConst4 * (3.58091484666531e-34 + (fConst0 * ((fConst0 * ((fConst0 * (2.34336407245004e-46 + (fConst0 * (1.46537389178076e-50 - fConst12)))) - 4.23128329271112e-42)) - 1.44717262047062e-38)))) - 5.14948640274409e-27)))))) - 1.05384751701691e-18)) - 5.43772840685535e-16)));
	fConst14 = (1.44268305546631e-13 + (fConst4 * ((fConst4 * (4.55868592811057e-24 + (fConst4 * ((fConst4 * (5.06510417164718e-38 + (fConst4 * ((7.12001255580228e-55 * fConst4) - 4.10088712678757e-46)))) - 2.08407053964635e-30)))) - 1.84423315477959e-18)));
	fConst15 = (1.23658547611398e-13 + (fConst0 * (5.43772840685535e-16 + (fConst0 * ((fConst0 * ((fConst0 * (1.30248169374588e-24 + (fConst0 * (5.14948640274409e-27 + (fConst4 * ((fConst0 * ((fConst0 * (4.23128329271112e-42 + (fConst0 * (2.34336407245004e-46 + (fConst0 * (0 - (1.46537389178076e-50 + fConst12))))))) - 1.44717262047062e-38)) - 3.58091484666531e-34)))))) - 2.89535441185343e-21)) - 1.05384751701691e-18)))));
	fConst16 = (7.72865922571237e-14 + (fConst0 * (6.79716050856919e-16 + (fConst0 * (3.29327349067784e-19 + (fConst0 * ((fConst0 * ((fConst0 * (1.28737160068602e-27 + (fConst0 * (1.56305290473476e-30 + (fConst0 * (8.95228711666328e-35 + (fConst0 * ((fConst0 * ((fConst0 * (7.32301272640638e-47 + (fConst0 * (1.83171736472594e-50 + fConst10)))) - 3.17346246953334e-42)) - 3.07524181850007e-38)))))))) - 2.76777359920999e-24)) - 2.17151580889007e-21)))))));
	fConst17 = (3.43495965587216e-14 + (fConst0 * (4.53144033904613e-16 + (fConst0 * (8.78206264180758e-19 + (fConst0 * (1.60853022880746e-22 + (fConst0 * ((fConst0 * ((fConst4 * (1.79045742333266e-34 + (fConst0 * (2.17075893070593e-38 + (fConst0 * ((fConst0 * ((fConst0 * (0 - (1.2211449098173e-50 + fConst8))) - 1.95280339370837e-46)) - 2.35071294039507e-43)))))) - 2.57474320137205e-27)) - 1.95372254061882e-24)))))))));
	fConst18 = (1.03048789676165e-14 + (fConst0 * (1.81257613561845e-16 + (fConst0 * (5.70834071717493e-19 + (fConst0 * (9.65118137284478e-22 + (fConst0 * (3.25620423436469e-25 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (3.61793155117656e-39 + (fConst0 * (1.41042776423704e-42 + (fConst0 * (1.26932220591044e-46 + (fConst0 * (4.88457963926918e-51 + fConst6)))))))) - 7.16182969333062e-35)) - 6.25221161893904e-31)) - 1.02989728054882e-27)))))))))));
	fConst19 = (1.87361435774845e-15 + (fConst0 * (4.11949121731466e-17 + (fConst0 * (1.75641252836152e-19 + (fConst0 * (4.82559068642239e-22 + (fConst0 * (6.51240846872938e-25 + (fConst0 * (5.14948640274409e-28 + (fConst4 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (0 - (1.11013173619754e-51 + fConst3))) - 3.90560678741674e-47)) - 7.0521388211852e-43)) - 7.23586310235311e-39)) - 3.58091484666531e-35)))))))))))));
	fConst20 = (1.56134529812371e-16 + (fConst0 * (4.11949121731466e-18 + (fConst0 * (2.1955156604519e-20 + (fConst0 * (8.04265114403731e-23 + (fConst0 * (1.62810211718235e-25 + (fConst0 * (2.57474320137205e-28 + (fConst0 * (1.04203526982317e-31 + (fConst0 * (1.79045742333266e-35 + (fConst0 * (1.80896577558828e-39 + (fConst0 * (1.17535647019753e-43 + (fConst0 * (4.88200848427092e-48 + (fConst0 * (1.11013173619754e-52 + fConst1)))))))))))))))))))))));
	fConst21 = (1.0 / fConst20);
	fConst22 = (5.22248612784811e-37 * fConst0);
	fConst23 = ((fConst0 * (7.97689978143416e-26 + (fConst0 * ((fConst0 * (9.54670937588415e-32 - fConst22)) - 2.13527287852081e-28)))) - 2.94990729879864e-23);
	fConst24 = (1.04449722556962e-36 * fConst4);
	fConst25 = ((fConst0 * (3.19075991257366e-25 + (fConst0 * (fConst24 - 4.27054575704163e-28)))) - 1.76994437927919e-22);
	fConst26 = (2.08899445113925e-36 * fConst0);
	fConst27 = ((fConst0 * (1.59537995628683e-25 + (fConst0 * (8.54109151408326e-28 + (fConst0 * (fConst26 - 5.72802562553049e-31)))))) - 3.53988875855837e-22);
	fConst28 = (5.22248612784811e-36 * fConst4);
	fConst29 = ((fConst0 * ((fConst0 * (2.13527287852081e-27 - fConst28)) - 9.57227973772099e-25)) - 5.89981459759728e-23);
	fConst30 = (2.61124306392406e-36 * fConst0);
	fConst31 = (7.96474970675633e-22 + (fConst0 * ((fConst0 * ((fConst0 * (1.43200640638262e-30 - fConst30)) - 1.06763643926041e-27)) - 1.35607296284381e-24)));
	fConst32 = (1.04449722556962e-35 * fConst4);
	fConst33 = (1.06196662756751e-21 + (fConst0 * (6.38151982514733e-25 + (fConst0 * (fConst32 - 4.27054575704163e-27)))));
	fConst34 = (fConst0 * (2.23353193880156e-24 - (1.90934187517683e-30 * fConst4)));
	fConst35 = ((fConst0 * (6.38151982514733e-25 + (fConst0 * (4.27054575704163e-27 - fConst32)))) - 1.06196662756751e-21);
	fConst36 = ((fConst0 * ((fConst0 * (1.06763643926041e-27 + (fConst0 * (1.43200640638262e-30 + fConst30)))) - 1.35607296284381e-24)) - 7.96474970675633e-22);
	fConst37 = (5.89981459759728e-23 + (fConst0 * ((fConst0 * (fConst28 - 2.13527287852081e-27)) - 9.57227973772099e-25)));
	fConst38 = (3.53988875855837e-22 + (fConst0 * (1.59537995628683e-25 + (fConst0 * ((fConst0 * (0 - (5.72802562553049e-31 + fConst26))) - 8.54109151408326e-28)))));
	fConst39 = (1.76994437927919e-22 + (fConst0 * (3.19075991257366e-25 + (fConst0 * (4.27054575704163e-28 - fConst24)))));
	fConst40 = (2.94990729879864e-23 + (fConst0 * (7.97689978143416e-26 + (fConst0 * (2.13527287852081e-28 + (fConst0 * (9.54670937588415e-32 + fConst22)))))));
	fConst41 = (faustpower<3>(fConst0) / fConst20);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	for (int i=0; i<count; i++) {
		fRec0[0] = ((double)input0[i] - (fConst21 * ((((((((((((fConst19 * fRec0[1]) + (fConst18 * fRec0[2])) + (fConst17 * fRec0[3])) + (fConst16 * fRec0[4])) + (fConst15 * fRec0[5])) + (fConst14 * fRec0[6])) + (fConst13 * fRec0[7])) + (fConst11 * fRec0[8])) + (fConst9 * fRec0[9])) + (fConst7 * fRec0[10])) + (fConst5 * fRec0[11])) + (fConst2 * fRec0[12]))));
		output0[i] = (FAUSTFLOAT)(fConst41 * (((((((((((((fConst40 * fRec0[0]) + (fConst39 * fRec0[1])) + (fConst38 * fRec0[2])) + (fConst37 * fRec0[3])) + (fConst36 * fRec0[4])) + (fConst35 * fRec0[5])) + (fConst34 * fRec0[6])) + (fConst33 * fRec0[7])) + (fConst31 * fRec0[8])) + (fConst29 * fRec0[9])) + (fConst27 * fRec0[10])) + (fConst25 * fRec0[11])) + (fConst23 * fRec0[12])));
		// post processing
		for (int i=12; i>0; i--) fRec0[i] = fRec0[i-1];
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

} // end namespace jmp
