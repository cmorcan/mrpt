#include "serialization-precomp.h"  // Precompiled headers

#include <mrpt/core/exceptions.h>
#include <mrpt/serialization/CSchemeArchiveBase.h>
#include <mrpt/serialization/CSerializable.h>

using namespace mrpt::serialization;
void CSchemeArchiveBase_impl::ReadObject(
	CSchemeArchiveBase& out, const CSerializable& obj)
{
	CSchemeArchiveBase::ReadObject(out, obj);
}
void CSchemeArchiveBase_impl::WriteObject(
	CSchemeArchiveBase& in, CSerializable& obj)
{
	CSchemeArchiveBase::WriteObject(in, obj);
}
