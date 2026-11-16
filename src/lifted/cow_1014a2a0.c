/* f_0x1014a2a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014a2a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
        eax = rd32(COW_IMG(0x104dfd98u));
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_stdcall(g, COW_IMG(0x1014a280u), 0);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 != 0u)
        {
            eax = t1;
            edx = t3;
        }
        else
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t4 = cow_stdcall(g, COW_IMG(0x100e4fa0u), 0);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
        g->eax = eax;
        g->esp = sp0 - 8u;
        t6 = cow_fastcall(g, COW_IMG(0x101ec220u), rd32(COW_IMG(0x106636a0u)), edx, 4, 0xfffffc19u, 0xfffffc19u, 0u, 0u);
        t7 = g->edx;
        t8 = rd32(COW_IMG(0x10578428u));
        t9 = cow_fastcall(g, COW_IMG(0x101611a0u), t8, t7, 0);
        t10 = g->ecx;
        t11 = g->edx;
        g->ecx = t10;
        g->edx = t11;
        t12 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 0u);
        t13 = g->ecx;
        t14 = g->edx;
        if ((uint8_t)t12 == 0u)
        {
            eax = t12;
            edx = t14;
            goto L_1014a2fb;
        }
        eax = t12;
        ecx = t13;
        edx = t14;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t15 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
        t16 = g->edx;
        if ((uint8_t)t15 != 0u)
        {
            eax = t15;
            edx = t16;
            goto L_1014a2fb;
        }
        eax = t15;
        edx = t16;
        wr8(self + 0x59u, 1u);
L_1014a2fe: ;
        wr8(self + 0x58u, 0u);
        wr8(self + 0x54u, 0u);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x1014a650u), self, 1, 0u);
        t17 = g->edx;
        t18 = rd32(COW_IMG(0x104dfd98u));
        wr32(t18 + 0x2d610u, COW_IMG(0x1014a330u));
        wr8(COW_IMG(0x1057844cu), 0u);
        eax = t18;
        edx = t17;
    }
    g->edx = edx;
    return eax;
L_1014a2fb: ;
    wr8(self + 0x59u, 0u);
    goto L_1014a2fe;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014a2a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014a2a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
