/* f_0x100cee40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100cee40(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
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
    uint32_t t19;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0xffffffffu);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x1cu, t1);
    wr32(sp0 - 0x20u, 7u);
    wr32(sp0 - 0x24u, sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x100ce480u), self, 6, sp0 + 4u, 7u, t1, 0xffffffffu, 0u, 0u);
    t2 = g->edx;
    if (rd32(sp0 + 4u) == 0u)
    {
        edx = t2;
        edi = t1;
        goto L_100cee8c;
    }
    eax = rd32(sp0 + 4u);
    wr32(sp0 - 0x10u, arg3);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, self);
    wr32(sp0 - 0x20u, eax);
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 0x1cu;
    t3 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, eax);
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x10056c70u), t3, t3, g->edx, 0, 4, self, arg2, 0u, arg3);
    t6 = g->edx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_100cee8c: ;
    wr32(sp0 - 0x10u, edi);
    wr32(sp0 - 0x14u, 7u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    t7 = rd32(rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u));
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x100724c0u), t7, t7, g->edx, 0, 3, sp0 - 4u, 7u, edi);
    t9 = g->edx;
    t10 = rd32(t8);
    wr32(sp0 + 4u, t10);
    if (t10 == 0u)
    {
        eax = t10;
        edx = t9;
        goto L_100ceeda;
    }
    eax = t10;
    wr32(sp0 - 0x10u, arg3);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, self);
    wr32(sp0 - 0x20u, eax);
    g->eax = eax;
    g->edx = arg3;
    g->esp = sp0 - 0x1cu;
    t11 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, eax);
    t12 = g->edx;
    g->edx = t12;
    g->esp = sp0 - 0xcu;
    t13 = cow_call_regs(g, COW_IMG(0x10056c70u), t11, t11, g->edx, 0, 4, self, arg2, 0u, arg3);
    t14 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t14;
    return (t13 & 0xffffff00u) | 1u;
L_100ceeda: ;
    if (arg3 != 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t15 = cow_call_regs(g, COW_IMG(0x1018c620u), eax, arg3, g->edx, 1, 0);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(sp0 - 0x10u, arg3);
        t18 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t16, t17, 1, 1, arg3);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cee40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100cee40(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
