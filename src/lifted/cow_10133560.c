/* f_0x10133560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10133560(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f5b4u));
    t2 = g->edx;
    if (rd8(self + 0x14fu) == 0xffu)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        edx = t2;
        if ((int16_t)rd16(rd32(self + 8u) + 0x58u) < 1)
        {
            eax = rd32(self + 8u);
            goto L_101335bf;
        }
        esi = 1u;
L_1013358a: ;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t3 = cow_stdcall(g, COW_IMG(0x10131680u), 1, esi);
        t4 = g->edx;
        if ((int16_t)t3 >= 0)
        {
            eax = t3;
            edx = t4;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t5 = cow_cdecl(g, COW_IMG(0x100fe860u), 1, (uint32_t)(int16_t)eax);
            t6 = g->edx;
            if (t5 == 8u)
            {
                eax = t5;
                edx = t6;
                g->esp = sp0 - 8u;
                cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, esi);
            }
        }
        if ((int32_t)(esi + 1u) <= (int16_t)rd16(rd32(self + 8u) + 0x58u))
        {
            edx = rd32(self + 8u);
            esi = esi + 1u;
            goto L_1013358a;
        }
        eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
L_101335bf: ;
        t7 = rd32(self + 0x150u);
        t8 = (uint32_t)(int8_t)rd8(self + 0x14fu);
        g->eax = eax;
        g->edx = t8;
        g->esp = sp0 - 8u;
        t9 = cow_thiscall(g, COW_IMG(0x101d3380u), rd32(COW_IMG(0x106631d4u)), 3, 4u, t8, t7);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10133560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10133560(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
