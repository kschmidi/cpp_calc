#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"

#include "just_a_file_to_compile.h"

void thisIsATest() {
	std::ostringstream out { };
	std::string output { "this is just a test to check if it works" };

	do_nothing_special(out, output);

	ASSERT_EQUAL(output, out.str());
}

void runAllTests(int argc, char const *argv[]){
	cute::suite s { };

	//TODO add your test here
	s.push_back(CUTE(thisIsATest));

	cute::xml_file_opener xmlfile(argc,argv);
	cute::xml_listener<cute::ide_listener<> >  lis(xmlfile.out);
	cute::makeRunner(lis,argc,argv)(s, "AllTests");
}

int main(int argc, char const *argv[]){
    runAllTests(argc,argv);
    return 0;
}



