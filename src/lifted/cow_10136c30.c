/* f_0x10136c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10136c30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if ((int32_t)rd32(self + 0x24u) <= 4)
    {
        eax = rd32(self + 0x24u);
        edx = in_edx;
        loc_4 = self;
    }
    else
    {
        t1 = rd32(self + 0x58u);
        wr32(sp0 - 4u, t1);
        edx = in_edx;
        edi = 0u;
        loc_4 = t1;
L_10136c46: ;
        if (loc_4 == 0u)
        {
            eax = loc_4;
            goto L_10136c6c;
        }
        eax = loc_4;
        wr32(sp0 - 0x10u, sp0 - 4u);
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
        t2 = g->edx;
        if ((int32_t)(edi + 1u) < 4)
        {
            edx = t2;
            edi = edi + 1u;
            goto L_10136c46;
        }
        edx = t2;
        if (rd32(sp0 - 4u) == 0u)
        {
            eax = rd32(sp0 - 4u);
        }
        else
        {
            eax = rd32(sp0 - 4u);
            wr32(self + 0x58u, eax);
        }
    }
L_10136c6c: ;
    wr32(sp0 - 0x10u, arg1);
    g->eax = eax;
    g->edx = edx;
    t3 = rd32(self + 0x68u);
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x10126840u), t3, 1, arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd8(COW_IMG(0x10485a70u)) == 1u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        if ((uint16_t)arg1 == 6u)
        {
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
            t7 = rd32(self + 0x50u);
            wr32(sp0 - 0x10u, t7);
            g->eax = rd32(self + 0x64u);
            g->edx = t7;
            t8 = rd32(self + 0x64u);
            t9 = cow_thiscall(g, COW_IMG(0x10129290u), rd32(t8 + 0x18u), 1, t7);
            t10 = g->edx;
            g->edx = t10;
            t11 = cow_thiscall(g, COW_IMG(0x10126a00u), rd32(self + 0x68u), 0);
            t12 = g->edx;
            wr8(COW_IMG(0x10488208u), 2u);
            wr32(sp0 - 0x10u, 1u);
            t13 = rd32(self + 8u);
            wr32(sp0 - 0x14u, t13);
            cow_call_regs(g, COW_IMG(0x1015e790u), t11, COW_IMG(0x10621838u), g->edx, 0, 2, t13, 1u);
        }
    }
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10136c30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
