
#include <string>
#include <vector>
#include <utility>
//
// SoundMaker: A class that ecapsulates
// FileNaming convention: "rouge_attack_miss.wav"
//
#define SNDDIRECTORY		"sounds/"
#define ATACKFILENAMEMISS	"attack_miss.wav"
#define ATTACKFILENAME1		"attack0.wav"
#define ATTACKFILENAME2		"attack1.wav"
#define ATTACKFILENAME3		"attack2.wav"
#define ATTACKFILENAMECRIT  "attack_crit.wav"

//#define ALTFILENAMEMISS		"alt_miss.wav"
#define ALTFILENAME1		"alt0.wav"
//#define ALTFILENAME2	    "alt1.wav"
//#define ALTFILENAME3		"alt2.wav"
//#define ALTFILENAMECRIT     "alt_crit.wav"

typedef struct sSoundInfo
{
	std::pair<int, int> attackRange;
	//std::pair<int, int> alternateRange;
	std::string fileNamePrefix;
} SoundInfo;

class SoundMaker {
public:
	SoundMaker();
	void PlayPrimaryAttack(int damageDealt);
	void PlaySecondaryAttack(void); // int damageDealt);
	void PlayHeal(void);
	void SetSoundInfo(SoundInfo &info) { mInfo = info; }
private:
	SoundInfo  mInfo;
	std::vector<std::string> attackFileNames;
	std::string altAttackFileName;
	std::string healFileName;
};