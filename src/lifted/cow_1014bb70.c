/* f_0x1014bb70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014bb70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
    }
    else
    {
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_stdcall(g, COW_IMG(0x1014b630u), 0);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 != 0u)
        {
            ecx = t2;
            edx = t3;
        }
        else
        {
            ecx = t2;
            edx = t3;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_stdcall(g, COW_IMG(0x100e5110u), 0);
            t4 = g->ecx;
            t5 = g->edx;
            ecx = t4;
            edx = t5;
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t6 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 0u);
        t7 = g->ecx;
        t8 = g->edx;
        if ((uint8_t)t6 == 0u)
        {
            eax = t6;
            edx = t8;
            goto L_1014bba7;
        }
        ecx = t7;
        edx = t8;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t9 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
        t10 = g->edx;
        if ((uint8_t)t9 != 0u)
        {
            eax = t9;
            edx = t10;
            goto L_1014bba7;
        }
        eax = t9;
        edx = t10;
        wr8(self + 0x5bu, 1u);
L_1014bbab: ;
        wr8(self + 0x5au, 0u);
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x1014bdb0u), self, 0);
        t11 = g->edx;
        t12 = rd32(COW_IMG(0x104dfd98u));
        wr32(t12 + 0x2d678u, COW_IMG(0x1014bbd0u));
        wr8(COW_IMG(0x1057844du), 0u);
        eax = t12;
        edx = t11;
    }
    g->edx = edx;
    return eax;
L_1014bba7: ;
    wr8(self + 0x5bu, 0u);
    goto L_1014bbab;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014bb70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014bb70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
