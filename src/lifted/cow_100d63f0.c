/* f_0x100d63f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100d63f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x1e4u), self, 0);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        edx = t3;
        if (rd32(self + 0x764u) != 0u)
        {
            ecx = rd32(self + 0x764u);
            edx = edx & 0xffffff00u;
        }
        else
        {
            ecx = rd32(self + 0x764u);
            edx = edx & 0xffffff00u;
            edx = (edx & 0xffffff00u) | 1u;
        }
        if (rd32(self + 0x764u) == 0u)
        {
            eax = rd32(self + 0x764u);
            goto L_100d6452;
        }
        eax = rd32(self + 0x764u);
        if (rd32(eax) == 0u) goto L_100d6452;
        if (arg1 == rd32(rd32(ecx) + 0x28u)) goto L_100d6452;
        if (rd32(self + 0x764u) == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = rd32(self + 0x764u);
            eax = rd32(eax);
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x10071ec0u), eax, 0);
        t5 = g->edx;
        wr32(self + 0x764u, 0u);
        eax = t4;
        edx = t5;
L_100d6456: ;
        if (arg1 == 0u)
        {
            ecx = 0u;
        }
        else
        {
            ecx = rd32(arg1);
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t6 = cow_thiscall(g, COW_IMG(0x100536c0u), ecx, 3, self, self, 1u);
        t7 = g->edx;
        wr32(t6 + 0x64u, self);
        g->edx = t7;
        cow_call_regs(g, COW_IMG(0x10071e90u), t6, t6, g->edx, 1, 0);
        t8 = g->edx;
        t9 = rd32(t6 + 0x14u);
        wr32(self + 0x764u, t9);
        eax = t9;
        edx = t8;
        esi = t6;
L_100d6490: ;
        wr32(esi + 0xccu, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t10 = cow_thiscall(g, COW_IMG(0x100531d0u), esi, 0);
        t11 = g->edx;
        wr32(esi + 0xd0u, 0x461c4000u);
        wr32(esi + 0xc8u, 0u);
        cow_call_regs(g, COW_IMG(0x100496f0u), t10, esi, g->edx, 0, 1, 0u);
        wr32(esi + 0xc8u, 0x461c4400u);
    }
    return;
L_100d6452: ;
    if ((uint8_t)edx == 0u) goto L_100d6480;
    goto L_100d6456;
L_100d6480: ;
    if (rd32(self + 0x764u) == 0u)
    {
        esi = 0u;
    }
    else
    {
        edi = rd32(self + 0x764u);
        esi = rd32(edi);
    }
    goto L_100d6490;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d63f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d63f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
