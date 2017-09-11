class write_if : public sc_interface
{
public:
virtual void write(sc_int) = 0;
virtual void reset() = 0;
};
class read_if : public sc_interface
{
public:
virtual void read(sc_int&) = 0;
virtual int num_available() = 0;
};
