#pragma once

class Time
{
	string name;
	int h_e[10], m_e[10],h_k[10],m_k[10];
	int t_count = 0;
public:
	static int p_count;
	CString getName()
	{
		return CString(name.c_str());
	}
	void setName(CString n)
	{
		name = string(CT2CA(n));
    }
	void setTime(int h_e, int m_e,int h_k,int m_k)
	{
		if (this->t_count == 10)
			return;
		this->h_e[this->t_count] = h_e;
		this->m_e[this->t_count] = m_e;
		this->h_k[this->t_count] = h_k;
		this->m_k[this->t_count] = m_k;
		this->t_count++;
	}
	string Takhir()
	{
		int h=0, m=0;
		for (int i = 0; i < 10; i++)
		{
			if (h_e[i] >= 8)
			{
				h += h_e[i] - 8;
				m += m_e[i];
				if (m >= 60)
				{
					m -= 60;
					h++;
				}

			}
		}
		return to_string(h) + ':' + to_string(m);
	}
	string ezafekar()
	{
		int h=0, m=0;
		for (int i = 0; i < 10; i++)
		{
			if (h_k[i] >= 17)
			{
				h += h_k[i] - 17;
				m += m_k[i];
				if (m >= 60)
				{
					h++;
					m -= 60;
				}
			}
		}
		return to_string(h) + ':' + to_string(m);
	}
};
