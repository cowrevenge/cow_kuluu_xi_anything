/* f_0x10145850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10145850(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x100f0fa0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        ebx = t1;
        edi = 1u;
L_10145865: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_cdecl(g, COW_IMG(0x100f0fb0u), 1, edi);
        t5 = g->ecx;
        t6 = g->edx;
        wr8(edi + self + 0x1cu, (uint8_t)t4);
        if ((int32_t)(edi + 1u) < 24)
        {
            ecx = t5;
            edx = t6;
            edi = edi + 1u;
            goto L_10145865;
        }
        edx = t6;
        t7 = rd32(COW_IMG(0x10485640u));
        wr8(self + (uint8_t)t7 + 0x1cu, (uint8_t)(t7 >> 8u));
        wr8(self + 0x34u, rd8(COW_IMG(0x10485640u)));
        wr8(self + 0x35u, rd8(COW_IMG(0x10485642u)));
        t8 = rd32(ebx + 8u);
        wr32(self + 0x18u, t8);
        edi = 1u;
        cf = 0u;
        pf = PARITY((uint8_t)t7);
        zf = (uint8_t)t7 == 0u;
        sf = (int32_t)(uint8_t)t7 < 0;
        of = 0u;
L_101458a5: ;
        if ((rd32(self + 0x18u) & 1u << (edi & 0x1fu)) != 0u)
        {
            eax = rd32(self + 0x18u);
            edx = 1u << (edi & 0x1fu);
        }
        else
        {
            eax = rd32(self + 0x18u);
            edx = 1u << (edi & 0x1fu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t9 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, edi);
            t10 = g->edx;
            eax = t9;
            edx = t10;
        }
        if ((int32_t)(edi + 1u) < 24)
        {
            cf = edi + 1u < 0x18u;
            pf = PARITY((uint8_t)(edi - 0x17u));
            zf = edi == 0x17u;
            sf = (int32_t)(edi - 0x17u) < 0;
            of = ((edi + 1u ^ 0x18u) & (edi + 1u ^ edi - 0x17u)) >> 0x1fu;
            edi = edi + 1u;
            goto L_101458a5;
        }
        edi = edi + 1u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t11 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, edi);
        t12 = g->edx;
        g->edx = t12;
        t13 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, edi + 1u);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10145850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10145850(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
