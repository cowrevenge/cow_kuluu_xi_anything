/* f_0x101443c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101443c0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x18u) == 1u)
    {
        eax = rd32(self + 0x18u) - 1u;
        t2 = rd8(self + 0x14u);
        wr8(self + 0x14u, (uint8_t)((uint8_t)arg1 + t2));
        if ((int8_t)((uint8_t)arg1 + t2) < (int8_t)rd8(self + 0x15u))
        {
            eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)arg1 + t2);
        }
        else
        {
            eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)arg1 + t2);
            wr8(self + 0x15u, (uint8_t)eax);
        }
    }
    else
    {
        eax = rd32(self + 0x18u) - 1u;
        if (eax != 1u)
        {
            eax = eax - 1u;
        }
        else
        {
            eax = eax - 1u;
            t1 = rd8(self + 0x15u);
            wr8(self + 0x15u, (uint8_t)((uint8_t)arg1 + t1));
            if ((int8_t)((uint8_t)arg1 + t1) < 50)
            {
                eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)arg1 + t1);
            }
            else
            {
                eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)arg1 + t1);
                wr8(self + 0x15u, 0x32u);
            }
        }
    }
    if ((int8_t)rd8(self + 0x15u) <= 50)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x15u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x15u);
        wr8(self + 0x15u, 0x32u);
    }
    if ((int8_t)rd8(self + 0x14u) > (int8_t)rd8(self + 0x15u))
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x15u);
        wr8(self + 0x14u, (uint8_t)eax);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101443c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101443c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
