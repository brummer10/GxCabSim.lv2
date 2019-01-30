// generated from file './/triamp.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace triamp {

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
	double 	fRec0[5];

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
	id = "triamp";
	name = N_("triamp");
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
	for (int i=0; i<5; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (9.38371789013906e-20 * fConst0);
	fConst2 = (0.00722126635310396 + (fConst0 * ((fConst0 * (7.09892102491314e-11 + (fConst0 * (fConst1 - 2.69041790101391e-15)))) - 6.99044059353393e-07)));
	fConst3 = (3.75348715605562e-19 * fConst0);
	fConst4 = faustpower<2>(fConst0);
	fConst5 = (0.0288850654124158 + (fConst0 * ((fConst4 * (5.38083580202782e-15 - fConst3)) - 1.39808811870679e-06)));
	fConst6 = (0.0433275981186238 + (fConst4 * ((5.63023073408344e-19 * fConst4) - 1.41978420498263e-10)));
	fConst7 = (0.0288850654124158 + (fConst0 * (1.39808811870679e-06 + (fConst4 * (0 - (5.38083580202782e-15 + fConst3))))));
	fConst8 = (1.0 / (0.00722126635310396 + (fConst0 * (6.99044059353393e-07 + (fConst0 * (7.09892102491314e-11 + (fConst0 * (2.69041790101391e-15 + fConst1))))))));
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	for (int i=0; i<count; i++) {
		fRec0[0] = ((double)input0[i] - (fConst8 * ((((fConst7 * fRec0[1]) + (fConst6 * fRec0[2])) + (fConst5 * fRec0[3])) + (fConst2 * fRec0[4]))));
		output0[i] = (FAUSTFLOAT)(fConst8 * ((0.00722112192994325 * fRec0[4]) + (0.028884487719773 * ((fRec0[3] + (fRec0[1] + (1.5000000000000002 * fRec0[2]))) + (0.25 * fRec0[0])))));
		// post processing
		for (int i=4; i>0; i--) fRec0[i] = fRec0[i-1];
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

} // end namespace triamp
