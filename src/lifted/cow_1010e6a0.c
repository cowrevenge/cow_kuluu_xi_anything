/* f_0x1010e6a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1010e6a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    t1 = rd32(self + 0x18u);
    wr32(t1 + 8u, 0u);
    if (rd8(self + 4u) != 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 4u);
    }
    else
    {
        if (rd32(self + 0x10u) == 0u)
        {
            eax = rd32(self + 0x10u);
            goto L_1010e6c9;
        }
        eax = rd32(self + 0x10u);
L_1010e6bc: ;
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_1010e6bc;
        }
        eax = rd32(eax + 8u);
    }
L_1010e6c9: ;
    if (rd32(self + 0x10u) != 0u)
    {
        esi = rd32(self + 0x10u);
        edx = in_edx;
L_1010e6d2: ;
        t2 = rd32(esi + 8u);
        wr32(esi + 8u, 0u);
        if (rd32(esi) == 0u)
        {
            ebp = t2;
        }
        else
        {
            ebp = t2;
            edi = rd32(esi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t3 = cow_thiscall(g, COW_IMG(0x101090a0u), edi + 0x18u, 0);
            t4 = g->ecx;
            t5 = g->edx;
            t6 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t4, t5, 1, 1, edi);
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
        t8 = rd32(esi + 8u);
        wr32(esi, 0xefefefefu);
        if (t8 == 0u)
        {
            ecx = t8;
        }
        else
        {
            ecx = t8;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t9 = cow_thiscall(g, COW_IMG(0x1010e370u), ecx, 1, 1u);
            t10 = g->ecx;
            t11 = g->edx;
            eax = t9;
            ecx = t10;
            edx = t11;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t12 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
        t13 = g->edx;
        if (ebp != 0u)
        {
            eax = t12;
            edx = t13;
            esi = ebp;
            goto L_1010e6d2;
        }
    }
    wr32(self + 0x10u, self + 0x14u);
    wr32(self + 0x18u, self + 8u);
    wr16(self + 6u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010e6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010e6a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
