/* f_0x100d59a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100d59a0(Guest* g)
{
    double d30;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 156u);

    COW_AT(100d59a0)
    wr32(sp0 - 0x74u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x74u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t1 = g->edx;
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x68u, 0x3f800000u);
    g->eax = rd32(self);
    g->edx = t1;
    t2 = rd32(self);
    t3 = cow_thiscall(g, rd32(t2 + 0x210u), self, 0);
    t4 = g->edx;
    wr32(sp0 - 0x78u, t3);
    wr32(sp0 - 0x7cu, sp0 - 0x64u);
    g->ecx = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x64u, t3);
    t5 = g->ecx;
    wr32(sp0 - 0x80u, 0xbf800000u);
    wr32(sp0 - 0x84u, sp0 - 0x64u);
    wr32(sp0 - 0x88u, sp0 - 0x64u);
    g->eax = sp0 - 0x64u;
    g->edx = sp0 - 0x64u;
    g->esp = sp0 - 0x7cu;
    t6 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x64u, sp0 - 0x64u, 0xbf800000u);
    t7 = g->edx;
    g->esp = sp0 - 0x74u;
    t8 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    g->edx = rd32(self);
    t9 = rd32(self);
    t10 = cow_thiscall(g, rd32(t9 + 0x1c0u), self, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x78u, t10);
    wr32(sp0 - 0x7cu, sp0 - 0x4cu);
    g->eax = sp0 - 0x4cu;
    g->edx = t12;
    t13 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x4cu, t10);
    t14 = g->edx;
    t15 = rd32(sp0 - 0x4cu);
    wr32(sp0 - 0x78u, t15);
    t16 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x40u, 1, t15);
    t17 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x78u, t17);
    g->edx = t17;
    cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t17);
    t18 = g->edx;
    t19 = rd32(sp0 - 0x44u);
    wr32(sp0 - 0x78u, t19);
    g->eax = t19;
    g->edx = t18;
    t20 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, t19);
    t21 = g->edx;
    wr32(sp0 - 0x78u, sp0 - 0x70u);
    t22 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x70u);
    t23 = g->ecx;
    wr32(sp0 - 0x78u, sp0 - 0x70u);
    cow_call_regs(g, COW_IMG(0x100274b0u), t22, g->ecx, g->edx, 1, 1, sp0 - 0x70u);
    wr32(sp0 - 0x7cu, sp0 - 0x70u);
    wr32(sp0 - 0x80u, sp0 - 0x64u);
    wr32(sp0 - 0x84u, sp0 - 0x58u);
    g->ecx = sp0 - 0x64u;
    g->edx = sp0 - 0x58u;
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0x58u, sp0 - 0x64u, sp0 - 0x70u);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x88u, sp0 - 0x58u);
    g->esp = sp0 - 0x84u;
    cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x58u, g->ecx, g->edx, 1, 1, sp0 - 0x58u);
    wr32(sp0 - 0x8cu, sp0 - 0x64u);
    wr32(sp0 - 0x90u, sp0 - 0x58u);
    wr32(sp0 - 0x94u, sp0 - 0x70u);
    g->eax = sp0 - 0x70u;
    g->edx = sp0 - 0x58u;
    g->esp = sp0 - 0x88u;
    t26 = cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0x70u, sp0 - 0x58u, sp0 - 0x64u);
    t27 = g->edx;
    wr32(sp0 - 0x98u, sp0 - 0x70u);
    g->esp = sp0 - 0x94u;
    cow_call_regs(g, COW_IMG(0x100274b0u), t26, g->ecx, g->edx, 1, 1, sp0 - 0x70u);
    t28 = rd32(sp0 - 0x50u);
    t29 = rd32(sp0 - 0x54u);
    d30 = (double)rdf32(sp0 - 0x58u);
    wrf32(arg1, (float)d30);
    wr32(arg1 + 8u, t28);
    wr32(arg1 + 4u, t29);
    t31 = rd32(sp0 - 0x64u);
    wr32(arg1 + 0xcu, 0u);
    wr32(arg1 + 0x10u, t31);
    t32 = rd32(sp0 - 0x60u);
    wr32(arg1 + 0x14u, t32);
    t33 = rd32(sp0 - 0x5cu);
    wr32(arg1 + 0x18u, t33);
    wr32(arg1 + 0x20u, 0u);
    wr32(arg1 + 0x24u, 0u);
    wr32(arg1 + 0x1cu, 0u);
    wr32(arg1 + 0x2cu, 0u);
    wr32(arg1 + 0x30u, 0u);
    wr32(arg1 + 0x34u, 0u);
    wr32(arg1 + 0x38u, 0u);
    wr32(arg1 + 0x28u, 0x3f800000u);
    wr32(arg1 + 0x3cu, 0x3f800000u);
    g->edx = 0x3f800000u;
    g->esp = sp0 - 0x74u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t34 = g->edx;
    g->esi = in_esi;
    g->edx = t34;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d59a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100d59a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
