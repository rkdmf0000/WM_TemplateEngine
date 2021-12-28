#include "sys_fileLoader.h"


void wmb::appendAtStreamLast(wmb::ANSI aByte, wmb::stream* theStreamOnTheDeck) {

};

void wmb::deckInitialization(wmb::deck* deck) {
	deck->cursor = 0;

	wmb::DINT index(0);

	//��Ʈ�� �ʱ�ȭ
	if (deck->streams != nullptr && deck->size != 0) {
		for (index = 0; index < deck->size; ++index) {
			wmb::stream* buffer = static_cast<wmb::stream*>(deck->streams[index]);

			buffer->size = 0;
			delete buffer->data;
			buffer->data = nullptr;

			delete deck->streams[index];
			deck->streams[index] = nullptr;
		};
		delete deck->streams;
		deck->streams = nullptr;
	};
	deck->size = 0;

	//üũ����Ʈ �ʱ�ȭ
	if (deck->checklist != nullptr && deck->checklist_cnt != 0) {
		delete[] deck->checklist;
		deck->checklist = nullptr;
	};
	deck->checklist_cnt = 0;
};

void wmb::makeDirectory(wmb::ANSI name[256]) {
	const int dir_err = mkdir("foo", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
	if (-1 == dir_err)
	{
		printf("Error creating directory!n");
		exit(1);
	}
};

void wmb::fileLoader(wmb::ANSI filePath[256] , wmb::deck* deck)
{
	//�ʱ�ȭ
	wmb::deckInitialization(deck);

	//�б� ��������
	std::ifstream file((ASCII*)filePath, std::ios::in);
	if (file.good()) {
		//file.cur


		//Ŀ���� �̵���ų �ʿ䰡 ������ �̵�
		if (deck->cursor != 0)
			file.seekg(deck->cursor, std::ios::cur);
		

		//���� ������ stack�� buffer�� ��´�.
		while (!file.eof()) {
			wmb::ANSI buffer = file.get();
		};

	};
};
