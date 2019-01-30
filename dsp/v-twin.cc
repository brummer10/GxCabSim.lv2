// generated from file './/v-twin.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace v_twin {

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
	double 	fRec0[7];
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;

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
	id = "v-twin";
	name = N_("v-twin");
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
	for (int i=0; i<7; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (3.4429596770072e-29 * fConst0);
	fConst2 = (4.29353305954622e-12 + (fConst0 * ((fConst0 * (3.03190066478581e-14 + (fConst0 * ((fConst0 * (2.05973637471007e-20 + (fConst0 * (fConst1 - 1.81175387796578e-24)))) - 7.10208069221375e-17)))) - 1.28274692825627e-12)));
	fConst3 = (2.06577580620432e-28 * fConst0);
	fConst4 = faustpower<2>(fConst0);
	fConst5 = (2.57611983572773e-11 + (fConst0 * ((fConst0 * (6.06380132957163e-14 + (fConst4 * ((fConst0 * (7.24701551186311e-24 - fConst3)) - 4.11947274942014e-20)))) - 5.13098771302508e-12)));
	fConst6 = (5.16443951551079e-28 * fConst0);
	fConst7 = (6.44029958931933e-11 + (fConst0 * ((fConst0 * ((fConst0 * (2.13062420766413e-16 + (fConst0 * ((fConst0 * (fConst6 - 9.05876938982889e-24)) - 2.05973637471007e-20)))) - 3.03190066478581e-14)) - 6.41373464128135e-12)));
	fConst8 = (8.58706611909244e-11 + (fConst4 * ((fConst4 * (8.23894549884027e-20 - (6.88591935401439e-28 * fConst4))) - 1.21276026591433e-13)));
	fConst9 = (6.44029958931933e-11 + (fConst0 * (6.41373464128135e-12 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (9.05876938982889e-24 + fConst6)) - 2.05973637471007e-20)) - 2.13062420766413e-16)) - 3.03190066478581e-14)))));
	fConst10 = (2.57611983572773e-11 + (fConst0 * (5.13098771302508e-12 + (fConst0 * (6.06380132957163e-14 + (fConst4 * ((fConst0 * (0 - (7.24701551186311e-24 + fConst3))) - 4.11947274942014e-20)))))));
	fConst11 = (4.29353305954622e-12 + (fConst0 * (1.28274692825627e-12 + (fConst0 * (3.03190066478581e-14 + (fConst0 * (7.10208069221375e-17 + (fConst0 * (2.05973637471007e-20 + (fConst0 * (1.81175387796578e-24 + fConst1)))))))))));
	fConst12 = (1.0 / fConst11);
	fConst13 = (1.7823224136104e-20 * fConst0);
	fConst14 = (9.57620037400815e-15 + (fConst0 * (2.75737113569191e-16 + fConst13)));
	fConst15 = ((fConst0 * (0 - (9.19123711897302e-17 + fConst13))) - 9.57620037400815e-15);
	fConst16 = (3.83048014960326e-14 - (7.12928965444159e-20 * fConst4));
	fConst17 = (9.57620037400815e-15 + (fConst0 * (fConst13 - 2.75737113569191e-16)));
	fConst18 = ((fConst0 * (9.19123711897302e-17 - fConst13)) - 9.57620037400815e-15);
	fConst19 = ((3.56464482722079e-20 * fConst4) - 1.91524007480163e-14);
	fConst20 = (fConst4 / fConst11);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	for (int i=0; i<count; i++) {
		fRec0[0] = ((double)input0[i] - (fConst12 * ((((((fConst10 * fRec0[1]) + (fConst9 * fRec0[2])) + (fConst8 * fRec0[3])) + (fConst7 * fRec0[4])) + (fConst5 * fRec0[5])) + (fConst2 * fRec0[6]))));
		output0[i] = (FAUSTFLOAT)(fConst20 * ((fConst19 * (fRec0[1] + fRec0[5])) + ((fConst18 * fRec0[6]) + ((fConst17 * fRec0[4]) + ((fConst16 * fRec0[3]) + ((fConst15 * fRec0[0]) + (fConst14 * fRec0[2])))))));
		// post processing
		for (int i=6; i>0; i--) fRec0[i] = fRec0[i-1];
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

} // end namespace v_twin
