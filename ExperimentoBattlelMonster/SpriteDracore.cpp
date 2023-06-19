#include "SpriteDracore.h"
#include <iostream>

SpriteDracore::SpriteDracore() : Screen(200, 48) {
	
}

void SpriteDracore::update() {

}

void SpriteDracore::drawCriature(int x, int y) {
	gotoxy(x, y);		std::cout << "                .^~~:         ...                 " << std::endl;
	gotoxy(x, y + 1);	std::cout << "            ^JG#&&&@&B7.     !BBBP?..             " << std::endl;
	gotoxy(x, y + 2);	std::cout << "         :5#&&&&&&B?:      .:J5G@BY#B^:           " << std::endl;
	gotoxy(x, y + 3);	std::cout << "       :G&&&&&&&&5.       P@&^YYBPYY??~           " << std::endl;
	gotoxy(x, y + 4);	std::cout << "      ~&&&&&&&B#GB&B   ...J#B7GBGPP?7@&^          " << std::endl;
	gotoxy(x, y + 5);	std::cout << "     ^&&&&&&&GP@@@@@J?55PP?J~7@@#?7~!P&^          " << std::endl;
	gotoxy(x, y + 6);	std::cout << "     B&&&&&&BP&#PJ7Y@75PP557!##G55YJJJG~ :^       " << std::endl;
	gotoxy(x, y + 7);	std::cout << "    ^&&&&&&#GJYY5Y7~B?P57!PGG5?J??YPGJG7.7J^.     " << std::endl;
	gotoxy(x, y + 8);	std::cout << "    !&&&&BYYY55Y???JJJ?~..!BP7777Y5GP!~!~J?~!^^   " << std::endl;
	gotoxy(x, y + 9);	std::cout << "    :&&#JJ555YY7YPPP5YY55P555555Y?7YPY77!?!!7~.   " << std::endl;
	gotoxy(x, y + 10); 	std::cout << "     YB7!!7JJ!5?7YPPPPPPPPPPPP55PPY?#J?!          " << std::endl;
	gotoxy(x, y + 11); 	std::cout << "     ^^~7J!~7~!!^..^?JJJJ?JJJJJ555PJJJ5^          " << std::endl;
	gotoxy(x, y + 12); 	std::cout << "    .7!^~!7YB#Y    :JYJJJYY5Y5555P5!?PY.          " << std::endl;
	gotoxy(x, y + 13); 	std::cout << "      :^: ~P&&&:   :PPPPPPPPPPPPPYJB&&~           " << std::endl;
	gotoxy(x, y + 14); 	std::cout << "            .~?J:   .!?Y555YY?7~:!&&G^            " << std::endl;
	gotoxy(x, y + 15); 	std::cout << "                                 ?J:              " << std::endl;
}


