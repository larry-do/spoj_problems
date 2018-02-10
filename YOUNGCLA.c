#include <stdio.h>
#include <string.h>
int main()
{
	int n; scanf("%d", &n);
	char s[20], s_min[20], s_max[20];
	int d, d_min, d_max, m, m_min, m_max, y, y_min, y_max;
	scanf("%s%d%d%d", s, &d, &m, &y);
	strcpy(s_min, s); strcpy(s_max, s);
	d_min = d; d_max = d;
	m_min = m; m_max = m;
	y_min = y; y_max = y;
	int i;
	for(i = 1; i < n; i++){
		scanf("%s%d%d%d", s, &d, &m, &y);
		if(y > y_min){
			strcpy(s_min, s); d_min = d; m_min = m; y_min = y;
		}
		if(y < y_max){
			strcpy(s_max, s); d_max = d; m_max = m; y_max = y;
		}
		if(y == y_min){
			if(m > m_min){
				strcpy(s_min, s); d_min = d; m_min = m; y_min = y;
			}
			if(m == m_min){
				if(d > d_min){
					strcpy(s_min, s); d_min = d; m_min = m; y_min = y;
				}
			}
		}
		if(y == y_max){
			if(m < m_max){
				strcpy(s_max, s); d_max = d; m_max = m; y_max = y;
			}
			if(m == m_max){
				if(d < d_max){
					strcpy(s_max, s); d_max = d; m_max = m; y_max = y;
				}
			}
		}
	}
	printf("%s\n%s", s_min, s_max);
    return 0;
}