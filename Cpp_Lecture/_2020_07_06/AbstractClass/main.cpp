#include "EmployeeManager.h"

void main()
{
	EmployeeManager em;
	while (1)
	{
		em.showMenu();
		int sel = em.getSelNum();
		if (sel == 3) break;
		switch (sel)
		{
		case 1:
			em.insertEmployee();
			break;
		case 2:
			em.showAllEmployee();
			break;
		}
	}
}