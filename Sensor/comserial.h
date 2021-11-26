

extern void UART_init(long USART_BAUDRATE);
extern unsigned char UART_RxChar();
extern void UART_TxChar(char ch);
extern void UART_SendString(char *str);