// generated from file './/jtm.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace jtm {

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
	id = "jtm";
	name = N_("jtm");
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
	fConst1 = (5.99165054431605e-48 * fConst0);
	fConst2 = (5.98247960327493e-16 + (fConst0 * ((fConst0 * (9.24890398994427e-18 + (fConst0 * ((fConst0 * (1.70561336817518e-23 + (fConst0 * ((fConst0 * (1.00907394223877e-30 + (fConst0 * ((fConst0 * (6.49379095501319e-39 + (fConst0 * (fConst1 - 2.62868525686115e-43)))) - 9.95591450689114e-35)))) - 6.13054612415728e-27)))) - 1.5501659604586e-20)))) - 1.20111649936669e-15)));
	fConst3 = (5.99165054431605e-47 * fConst0);
	fConst4 = faustpower<2>(fConst0);
	fConst5 = (5.98247960327493e-15 + (fConst0 * ((fConst0 * (5.54934239396656e-17 + (fConst0 * ((fConst0 * (3.41122673635035e-23 + (fConst4 * ((fConst0 * (3.98236580275646e-34 + (fConst0 * ((fConst0 * (2.10294820548892e-42 - fConst3)) - 3.89627457300792e-38)))) - 2.01814788447754e-30)))) - 6.20066384183438e-20)))) - 9.60893199493352e-15)));
	fConst6 = (2.69624274494222e-46 * fConst0);
	fConst7 = (2.69211582147372e-14 + (fConst0 * ((fConst0 * (1.20235751869276e-16 + (fConst0 * ((fConst0 * ((fConst0 * (3.06527306207864e-26 + (fConst0 * ((fConst0 * ((fConst0 * (8.44192824151715e-38 + (fConst0 * (fConst6 - 7.09745019352511e-42)))) - 2.98677435206734e-34)) - 3.02722182671631e-30)))) - 5.11684010452553e-23)) - 4.65049788137579e-20)))) - 3.24301454829006e-14)));
	fConst8 = (7.18998065317926e-46 * fConst0);
	fConst9 = (7.17897552392991e-14 + (fConst0 * ((fConst0 * (7.39912319195542e-17 + (fConst0 * (1.24013276836688e-19 + (fConst0 * ((fConst4 * (8.07259153791017e-30 + (fConst0 * ((fConst0 * ((fConst0 * (1.26176892329335e-41 - fConst8)) - 5.19503276401056e-38)) - 7.96473160551291e-34)))) - 1.36449069454014e-22)))))) - 5.76535919696011e-14)));
	fConst10 = (1.25824661430637e-45 * fConst0);
	fConst11 = (1.25632071668773e-13 + (fConst0 * ((fConst0 * ((fConst0 * (2.17023234464203e-19 + (fConst0 * (3.41122673635035e-23 + (fConst0 * ((fConst0 * (2.01814788447754e-30 + (fConst0 * (1.39382803096476e-33 + (fConst0 * ((fConst0 * (fConst10 - 1.10404780788168e-41)) - 9.09130733701847e-38)))))) - 6.13054612415728e-26)))))) - 1.2948465585922e-16)) - 5.0446892973401e-14)));
	fConst12 = (1.50758486002528e-13 + (fConst4 * ((fConst4 * (2.04673604181021e-22 + (fConst4 * ((fConst4 * (1.81826146740369e-37 - (1.50989593716764e-45 * fConst4))) - 1.21088873068653e-29)))) - 2.5896931171844e-16)));
	fConst13 = (1.25632071668773e-13 + (fConst0 * (5.0446892973401e-14 + (fConst0 * ((fConst0 * ((fConst0 * (3.41122673635035e-23 + (fConst0 * (6.13054612415728e-26 + (fConst0 * (2.01814788447754e-30 + (fConst0 * ((fConst0 * ((fConst0 * (1.10404780788168e-41 + fConst10)) - 9.09130733701847e-38)) - 1.39382803096476e-33)))))))) - 2.17023234464203e-19)) - 1.2948465585922e-16)))));
	fConst14 = (7.17897552392991e-14 + (fConst0 * (5.76535919696011e-14 + (fConst0 * (7.39912319195542e-17 + (fConst0 * ((fConst0 * ((fConst4 * (8.07259153791017e-30 + (fConst0 * (7.96473160551291e-34 + (fConst0 * ((fConst0 * (0 - (1.26176892329335e-41 + fConst8))) - 5.19503276401056e-38)))))) - 1.36449069454014e-22)) - 1.24013276836688e-19)))))));
	fConst15 = (2.69211582147372e-14 + (fConst0 * (3.24301454829006e-14 + (fConst0 * (1.20235751869276e-16 + (fConst0 * (4.65049788137579e-20 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (2.98677435206734e-34 + (fConst0 * (8.44192824151715e-38 + (fConst0 * (7.09745019352511e-42 + fConst6)))))) - 3.02722182671631e-30)) - 3.06527306207864e-26)) - 5.11684010452553e-23)))))))));
	fConst16 = (5.98247960327493e-15 + (fConst0 * (9.60893199493352e-15 + (fConst0 * (5.54934239396656e-17 + (fConst0 * (6.20066384183438e-20 + (fConst0 * (3.41122673635035e-23 + (fConst4 * ((fConst0 * ((fConst0 * ((fConst0 * (0 - (2.10294820548892e-42 + fConst3))) - 3.89627457300792e-38)) - 3.98236580275646e-34)) - 2.01814788447754e-30)))))))))));
	fConst17 = (5.98247960327493e-16 + (fConst0 * (1.20111649936669e-15 + (fConst0 * (9.24890398994427e-18 + (fConst0 * (1.5501659604586e-20 + (fConst0 * (1.70561336817518e-23 + (fConst0 * (6.13054612415728e-27 + (fConst0 * (1.00907394223877e-30 + (fConst0 * (9.95591450689114e-35 + (fConst0 * (6.49379095501319e-39 + (fConst0 * (2.62868525686115e-43 + fConst1)))))))))))))))))));
	fConst18 = (1.0 / fConst17);
	fConst19 = (3.24388245742757e-26 * fConst0);
	fConst20 = (1.07364025155065e-19 + (fConst0 * (2.34392421378708e-23 - fConst19)));
	fConst21 = ((fConst0 * (2.34392421378708e-23 + fConst19)) - 1.07364025155065e-19);
	fConst22 = (9.37569685514831e-23 * fConst0);
	fConst23 = (0 - (6.13508715171799e-20 + fConst22));
	fConst24 = (1.62194122871379e-26 * fConst0);
	fConst25 = (2.30065768189425e-20 + (fConst0 * (0 - (3.51588632068062e-23 + fConst24))));
	fConst26 = (2.34392421378708e-23 * fConst0);
	fConst27 = (3.067543575859e-20 + fConst26);
	fConst28 = (3.24388245742758e-27 * fConst0);
	fConst29 = (7.66885893964749e-21 + (fConst0 * (1.17196210689354e-23 + fConst28)));
	fConst30 = (6.13508715171799e-20 - fConst22);
	fConst31 = ((fConst0 * (fConst24 - 3.51588632068062e-23)) - 2.30065768189425e-20);
	fConst32 = (fConst26 - 3.067543575859e-20);
	fConst33 = ((fConst0 * (1.17196210689354e-23 - fConst28)) - 7.66885893964749e-21);
	fConst34 = (1.40635452827225e-22 * fConst0);
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
		output0[i] = (FAUSTFLOAT)(fConst35 * ((fConst34 * fRec0[5]) + ((fConst33 * fRec0[10]) + ((fConst32 * fRec0[9]) + ((fConst31 * fRec0[8]) + ((fConst30 * fRec0[7]) + ((((((fConst29 * fRec0[0]) + (fConst27 * fRec0[1])) + (fConst25 * fRec0[2])) + (fConst23 * fRec0[3])) + (fConst21 * fRec0[4])) + (fConst20 * fRec0[6]))))))));
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

} // end namespace jtm
