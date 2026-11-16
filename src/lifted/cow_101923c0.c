/* f_0x101923c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101923c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    eax = in_eax;
    edx = in_edx;
    esi = 1u;
L_101923c9: ;
    g->edi = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, esi, 0u);
    t2 = g->edx;
    if ((int32_t)(esi + 1u) < 13)
    {
        eax = t1;
        edx = t2;
        esi = esi + 1u;
        goto L_101923c9;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    t3 = rd32(self + 0x18u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10190bb0u), t3, 0);
    t4 = g->ecx;
    t5 = g->edx;
    t6 = (t4 & 0xffff0000u) | rd16(rd32(self + 0x18u) + 0x14u);
    cow_call_regs(g, COW_IMG(0x10118db0u), rd32(self + 0x18u), rd32(self + 8u), g->edx, 0, 2, t6, 0u);
    if (rd32(rd32(self + 0x18u) + 0x14u) == 0xau)
    {
        edx = rd32(self + 0x18u);
    }
    else
    {
        edx = rd32(self + 0x18u);
        if (rd32(rd32(COW_IMG(0x106626a4u)) + 8u) != 0u)
        {
            eax = rd32(COW_IMG(0x106626a4u));
        }
        else
        {
            eax = rd32(COW_IMG(0x106626a4u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t7 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103798a4u), 1u, 0u);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
        t9 = rd32(self + 8u);
        g->esp = sp0 - 8u;
        cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, t9, 0u);
        t10 = g->edx;
        edx = t10;
    }
    if (rd32(rd32(COW_IMG(0x1066269cu)) + 0x2cu) == 0u)
    {
        eax = rd32(COW_IMG(0x1066269cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x1066269cu));
        ecx = rd32(rd32(COW_IMG(0x1066269cu)) + 0x2cu);
        t11 = rd32(eax + 0x28u);
        g->edx = ecx;
        g->esp = sp0 - 8u;
        t12 = cow_call_regs(g, COW_IMG(0x10119110u), t11, rd32(self + 8u), g->edx, 0, 2, t11, ecx);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101923c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101923c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
