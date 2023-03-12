#include<iostream>
using namespace std;

int main(){
    int low=1, mid, high, count=1;
	char answer;
    cout << "Введите максимальное число: ";
    cin >> high;
    cout << "Загадайте число от 1 до " << n << endl;
    
    while(low <= high)	//пока границы не сжались
	{
        mid = (low + high)/2; // среднее между значениями 
        cout << "Это число " << mid << " ? (y/</>): ";        
        cin >> answer;

        if(answer == 'y')
		{
            cout << "Отлично, мы угадали число "<< mid << " с " << count << " попытки!"<< endl;
            return 0;
        }
        else if(answer == '<')
            high = mid - 1;	// ставим верхнюю планку до предыдущего среднего
		else if(answer == '>')
			low = mid + 1;	// ставим нижнюю планку после предыдущего среднего
        else{
            cout << "Некорректный ввод, попробуйте снова." << endl;
            count--; //уменьшаем счетчик попыток на одну профуканную попытку
            continue; // начнём цикл сначала
        }
        count++;	//увеличиваем счетчик попыток
    }
    cout << "Извините, но вы не смогли угадать число." << endl;
    return 0;
}
