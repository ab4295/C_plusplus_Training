// queue.h -- ť�� ���� �������̽�
#ifndef QUEUE_H_
#define QUEUE_H_
// �� ť�� Customer �׸���� �����ϰ� �ȴ�
class Customer
{
private:
    long arrive;        // ������ ť�� ������ �ð�
    int processtime;    // ������ �ŷ��� ó���ϴ� �ð�
public:
    Customer() { arrive = processtime = 0; }
    void set(long when);
    long when() const { return arrive; }
    int ptime() const { return processtime; }
};

typedef Customer Item;

class Queue
{
private:
// Ŭ���� ��� ������ ���ǵ�
    // Node�� �� Ŭ������ ��������, ������ ����ü �����̴�
    struct Node { Item item; struct Node * next;};
    enum {Q_SIZE = 10};
// private Ŭ���� �����
    Node * front;       // Queue�� �Ӹ��� �����ϴ� ������
    Node * rear;        // Queue�� ������ �����ϴ� ������
    int items;          // Queue�� �ִ� ���� �׸� ��
    const int qsize;    // Queue�� ���� �� �ִ� �ִ� �׸� ��
    // public ���縦 �����ϴ� ���� ����
    Queue(const Queue & q) : qsize(0) { }
    Queue & operator=(const Queue & q) { return *this;}
public:
    Queue(int qs = Q_SIZE); // qs �Ѱ踦 ���� ť�� �����Ѵ�
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item &item); // �׸��� ������ �߰��Ѵ�
    bool dequeue(Item &item);       // �Ӹ����� �׸��� �����Ѵ�
};
#endif