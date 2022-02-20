#include "sys_fileLoader.h"


void wmb::appendAtStreamLast(wmb::ANSI aByte, wmb::stream* theStreamOnTheDeck) {

};

void wmb::deckInitialization(wmb::deck* _deck) {

	wmb::deck* deck = (wmb::deck*)_deck;


	deck->cursor = 0;
	deck->inited = true;

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

void wmb::makeDirectory(wmb::WMB_FILE_PATH name[256]) {

	const int dir_err = mkdir("foo", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
	if (-1 == dir_err)
	{
		//throw new wmb::sys_errorException(WMB_SYS_EXCEPTION_ERROR_TYPE_MKDIRFAILED, wmb::sys_errorException::exceptionActionByTag::LOGGING_KEEP);
	};

};

void wmb::fileLoader(wmb::WMB_FILE_PATH filePath[256] , wmb::deck& deck)
{
	//�ʱ�ȭ
	wmb::deckInitialization(&deck);

	//�ʱ�ȭ ����
	if (!deck.inited)
		return;


	//�б� ��������
	std::ifstream file((wmb::ASCII*)filePath, std::ios::in);
	if (file.good()) {
		//file.cur


		//Ŀ���� �̵���ų �ʿ䰡 ������ �̵�
		if (deck.cursor != 0)
			file.seekg(deck.cursor, std::ios::cur);
		
		std::size_t byteSize = sizeof(wmb::ANSI);
		wmb::stream* mem = (wmb::stream*)malloc(0);

		//���� ������ stack�� buffer�� ��´�.
		while (!file.eof()) {
			wmb::ANSI bf = file.get();
			wmb:DINT nextSize = (byteSize * static_cast<std::size_t>(mem->size)) + 1;
			wmb::ANSI* _mem_data = (wmb::ANSI*)malloc(nextSize);
			wmb::DINT i = 0;



			if (bf == '\0') {
				std::cout << "WTF - CUT THE LIGHT END PROCESS - MEANS ARRIVED FILE END" << '\n';
			};



			if (mem->size != 0) {
				for (i = 0; i < mem->size; ++i) {
					_mem_data[i] = mem->data[i];
				};
			};
			delete mem->data;

			_mem_data[nextSize] = bf;
			std::cout << _mem_data[nextSize];
			++mem->size;

			mem->data = _mem_data;







			//cursor�� 256���� ���� 0���� ������ streams�� �߰��Ѵ�.
			if (UINT_MAX <= deck.cursor) {
				//deck.streams

				deck.streams = (wmb::stream**)malloc(sizeof(wmb::stream*) * 1);

				deck.cursor = 0;
			};


			//std::cout << mem->data << '\n';


			//Ŀ���� ��ġ�� Ÿ�� ������ ������ �޴´�.
			++deck.cursor;
		};


		std::cout << mem->data << '\n';
		std::cout << mem->size << '\n';


	};
};
