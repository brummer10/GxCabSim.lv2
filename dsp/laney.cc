// generated from file './/laney.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace laney {

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
	double 	fRec0[9];
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
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
	id = "laney";
	name = N_("laney");
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
	for (int i=0; i<9; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (1.03166468453596e-39 * fConst0);
	fConst2 = (7.23454404936606e-10 + (fConst0 * ((fConst0 * (3.48098546144324e-14 + (fConst0 * ((fConst0 * (1.03357108589895e-20 + (fConst0 * ((fConst0 * (3.29454001779334e-29 + (fConst0 * (fConst1 - 3.18357714768969e-34)))) - 1.23122315470738e-24)))) - 1.12318322365961e-16)))) - 1.0201961576646e-11)));
	fConst3 = (8.25331747628768e-39 * fConst0);
	fConst4 = faustpower<2>(fConst0);
	fConst5 = (5.78763523949285e-09 + (fConst0 * ((fConst0 * (1.3923941845773e-13 + (fConst0 * ((fConst4 * (2.46244630941476e-24 + (fConst0 * ((fConst0 * (1.91014628861382e-33 - fConst3)) - 1.31781600711734e-28)))) - 2.24636644731921e-16)))) - 6.12117694598759e-11)));
	fConst6 = (2.88866111670069e-38 * fConst0);
	fConst7 = (2.0256723338225e-08 + (fConst0 * ((fConst0 * (1.3923941845773e-13 + (fConst0 * (2.24636644731921e-16 + (fConst0 * ((fConst0 * (2.46244630941476e-24 + (fConst0 * (1.31781600711734e-28 + (fConst0 * (fConst6 - 4.45700800676557e-33)))))) - 4.1342843435958e-20)))))) - 1.42827462073044e-10)));
	fConst8 = (5.77732223340138e-38 * fConst0);
	fConst9 = (4.05134466764499e-08 + (fConst0 * ((fConst0 * ((fConst0 * (6.73909934195763e-16 + (fConst4 * ((fConst0 * (1.31781600711734e-28 + (fConst0 * (4.45700800676557e-33 - fConst8)))) - 7.38733892824429e-24)))) - 1.3923941845773e-13)) - 1.42827462073044e-10)));
	fConst10 = (5.06418083455624e-08 + (fConst4 * ((fConst4 * (6.20142651539371e-20 + (fConst4 * ((7.22165279175172e-38 * fConst4) - 3.29454001779334e-28)))) - 3.48098546144324e-13)));
	fConst11 = (4.05134466764499e-08 + (fConst0 * (1.42827462073044e-10 + (fConst0 * ((fConst0 * ((fConst4 * (7.38733892824429e-24 + (fConst0 * (1.31781600711734e-28 + (fConst0 * (0 - (4.45700800676557e-33 + fConst8))))))) - 6.73909934195763e-16)) - 1.3923941845773e-13)))));
	fConst12 = (2.0256723338225e-08 + (fConst0 * (1.42827462073044e-10 + (fConst0 * (1.3923941845773e-13 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.31781600711734e-28 + (fConst0 * (4.45700800676557e-33 + fConst6)))) - 2.46244630941476e-24)) - 4.1342843435958e-20)) - 2.24636644731921e-16)))))));
	fConst13 = (5.78763523949285e-09 + (fConst0 * (6.12117694598759e-11 + (fConst0 * (1.3923941845773e-13 + (fConst0 * (2.24636644731921e-16 + (fConst4 * ((fConst0 * ((fConst0 * (0 - (1.91014628861382e-33 + fConst3))) - 1.31781600711734e-28)) - 2.46244630941476e-24)))))))));
	fConst14 = (7.23454404936606e-10 + (fConst0 * (1.0201961576646e-11 + (fConst0 * (3.48098546144324e-14 + (fConst0 * (1.12318322365961e-16 + (fConst0 * (1.03357108589895e-20 + (fConst0 * (1.23122315470738e-24 + (fConst0 * (3.29454001779334e-29 + (fConst0 * (3.18357714768969e-34 + fConst1)))))))))))))));
	fConst15 = (1.0 / fConst14);
	fConst16 = (3.22912277501057e-21 * fConst0);
	fConst17 = (2.78116542918484e-14 + (fConst0 * (fConst16 - 6.38442519444497e-17)));
	fConst18 = (1.27688503888899e-16 * fConst0);
	fConst19 = (1.11246617167394e-13 - fConst18);
	fConst20 = (1.29164911000423e-20 * fConst0);
	fConst21 = (1.11246617167394e-13 + (fConst0 * (1.27688503888899e-16 - fConst20)));
	fConst22 = (3.83065511666698e-16 * fConst0);
	fConst23 = (fConst22 - 1.11246617167394e-13);
	fConst24 = ((1.93747366500634e-20 * fConst4) - 2.78116542918484e-13);
	fConst25 = (0 - (1.11246617167394e-13 + fConst22));
	fConst26 = (1.11246617167394e-13 + (fConst0 * (0 - (1.27688503888899e-16 + fConst20))));
	fConst27 = (1.11246617167394e-13 + fConst18);
	fConst28 = (2.78116542918484e-14 + (fConst0 * (6.38442519444497e-17 + fConst16)));
	fConst29 = (fConst4 / fConst14);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	for (int i=0; i<count; i++) {
		fRec0[0] = ((double)input0[i] - (fConst15 * ((((((((fConst13 * fRec0[1]) + (fConst12 * fRec0[2])) + (fConst11 * fRec0[3])) + (fConst10 * fRec0[4])) + (fConst9 * fRec0[5])) + (fConst7 * fRec0[6])) + (fConst5 * fRec0[7])) + (fConst2 * fRec0[8]))));
		output0[i] = (FAUSTFLOAT)(fConst29 * (((((((((fConst28 * fRec0[0]) + (fConst27 * fRec0[1])) + (fConst26 * fRec0[2])) + (fConst25 * fRec0[3])) + (fConst24 * fRec0[4])) + (fConst23 * fRec0[5])) + (fConst21 * fRec0[6])) + (fConst19 * fRec0[7])) + (fConst17 * fRec0[8])));
		// post processing
		for (int i=8; i>0; i--) fRec0[i] = fRec0[i-1];
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

} // end namespace laney
