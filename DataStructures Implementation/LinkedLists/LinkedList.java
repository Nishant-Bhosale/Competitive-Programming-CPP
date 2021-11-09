package com.company;

public class LinkedListClass {
    public int size;
    public Node head;
    public Node tail;

    public Node createLL(int nodeValue){
        head = new Node();
        Node node = new Node();
        node.value = nodeValue;
        node.next = null;
        head = node;
        tail = node;
        size=1;
        return head;
    }

    public void insertNode(int nodeValue){
        if(head == null){
            createLL(nodeValue);
            return;
        }

        Node node = new Node();
        node.value = nodeValue;

        node.next = null;
        tail.next = node;
        tail = node;
        size++;

    }

    public void traverseLL(){
        Node tempNode = head;

        for(int i = 0; i < size; i++){
            System.out.print(tempNode.value);
            if(i != size - 1){
                System.out.print(" -> ");
            }
            tempNode = tempNode.next;
        }
        System.out.println();
    }
}
