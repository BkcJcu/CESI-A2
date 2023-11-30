//CLexplorateur.cpp
#include "CLexplorateur.h"
#include "MyForm.h"
#include <io.h>
using namespace System::IO;
using namespace System::Collections::Generic;

namespace NS_composants
{
	array<String^>^ CLfichier::explorerUnDossier(String^ dossier)
	{
		array<String^>^ file = Directory::GetFiles(dossier);
		return file;
		
	}
	void CLfichier::effacer(String^ fichier)
	{
		File::Delete(fichier);
	}
	void CLfichier::copier(String^ fichierSource, String^ fichierDestination)
	{
		String^ nomDeFichierExtension;
		nomDeFichierExtension = Path::GetFileName(fichierSource);
		File::Copy(fichierSource, fichierDestination + "\\" + nomDeFichierExtension);
	}
}
