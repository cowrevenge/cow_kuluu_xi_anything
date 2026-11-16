/* f_0x1011ff70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1011ff70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg19 = rd32(g->esp + 0x4cu);
    const uint32_t arg20 = rd32(g->esp + 0x50u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 4u, self + 4u);
    g->edx = in_edx;
    t1 = rd32(self + 0x14u);
    g->esp = sp0 - 0x1cu;
    t2 = cow_thiscall(g, COW_IMG(0x10126500u), self + 4u, 0);
    t3 = g->edx;
    wr32(sp0 - 8u, t2);
    if ((int32_t)t1 <= 0)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        edx = t3;
        esi = t1;
        wr32(sp0 - 0xcu, esi);
        edi = self + 4u;
        loc_c = esi;
L_1011ff9c: ;
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->eax = sp0 - 8u;
        g->esp = sp0 - 0x1cu;
        t4 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 8u);
        t5 = g->edx;
        if (t4 == 0u)
        {
            edx = t5;
        }
        else
        {
            eax = t4;
            wr32(sp0 - 0x20u, arg20);
            wr32(sp0 - 0x24u, arg19);
            esi = sp0 + 0xcu;
            edi = sp0 - 0x64u;
            ecx = 0x10u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0x68u, arg2);
            wr32(sp0 - 0x6cu, arg1);
            g->esp = sp0 - 0x1cu;
            cow_bridge_indirect(g, COW_IMG(0x1011ede0u), 0u, 20u, (const uint32_t[]){arg1, arg2, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), arg19, arg20}, eax, arg1, g->eax, 0u);
            t6 = g->edx;
            edx = t6;
            edi = rd32(sp0 - 4u);
        }
        t7 = rd32(sp0 - 0xcu) - 1u;
        wr32(sp0 - 0xcu, t7);
        if (rd32(sp0 - 0xcu) != 1u)
        {
            loc_c = t7;
            goto L_1011ff9c;
        }
        eax = t7;
    }
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011ff70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1011ff70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 80u);
}
/* COW_ADAPTER END */
