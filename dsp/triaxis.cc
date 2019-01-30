// generated from file './/triaxis.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace triaxis {

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
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;

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
	id = "triaxis";
	name = N_("triaxis");
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
	fConst1 = (1.37450636412266e-19 * fConst0);
	fConst2 = (3.36413350533859e-06 + (fConst0 * ((fConst0 * (3.93288597646405e-11 + (fConst0 * (fConst1 - 1.53163399517396e-15)))) - 2.1565247152976e-07)));
	fConst3 = (5.49802545649065e-19 * fConst0);
	fConst4 = faustpower<2>(fConst0);
	fConst5 = (1.34565340213543e-05 + (fConst0 * ((fConst4 * (3.06326799034791e-15 - fConst3)) - 4.3130494305952e-07)));
	fConst6 = (2.01848010320315e-05 + (fConst4 * ((8.24703818473597e-19 * fConst4) - 7.86577195292809e-11)));
	fConst7 = (1.34565340213543e-05 + (fConst0 * (4.3130494305952e-07 + (fConst4 * (0 - (3.06326799034791e-15 + fConst3))))));
	fConst8 = (1.0 / (3.36413350533859e-06 + (fConst0 * (2.1565247152976e-07 + (fConst0 * (3.93288597646405e-11 + (fConst0 * (1.53163399517396e-15 + fConst1))))))));
	fConst9 = (4.2110680735186e-12 * fConst0);
	fConst10 = (2.1055340367593e-07 - fConst9);
	fConst11 = (8.42213614703719e-12 * fConst0);
	fConst12 = (0 - (2.1055340367593e-07 + fConst9));
	fConst13 = (0 - (4.2110680735186e-07 * fConst0));
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
		output0[i] = (FAUSTFLOAT)(fConst8 * ((fConst13 * fRec0[1]) + (fConst0 * ((((fConst12 * fRec0[0]) + (fConst11 * fRec0[2])) + (4.2110680735186e-07 * fRec0[3])) + (fConst10 * fRec0[4])))));
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

} // end namespace triaxis
