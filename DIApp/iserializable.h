#ifndef ISERIALIZABLE_H
#define ISERIALIZABLE_H

class ISerializable
{
	public:
	  virtual void load(istream& in) = 0;
	  virtual void save(ostream& out) = 0;
	protected:
	  ~serialisable();
};

#endif
