// FliteCMUGenericCGObj.cpp : Implementation of CFliteCMUGenericCGObj

#include "stdafx.h"
#include "FliteCMUGenericCGObj.h"



cst_voice *REGISTER_VOX(const char *voxdir)
{
	cst_voice *v;
	if (voxdir == NULL)
		return NULL;
	v = flite_voice_load(voxdir);
	return v;

}
void UNREGISTER_VOX(cst_voice *vox)
{
	delete_voice(vox);
}

// CFliteCMUGenericCGObj

