/* f_0x1003c970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1003c970(Guest* g)
{
    double d26;
    double d3;
    uint32_t ecx;
    uint32_t edi;
    uint32_t loc_4c;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    if (rd8(self + 0x70u) == 0u) goto L_1003cac6;
    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 - 0x40u, in_edi);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    t1 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t2 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t1);
    wr32(sp0 - 0x4cu, t2);
    if (rd32(sp0 + 4u) != 0u)
    {
        ecx = rd32(sp0 + 4u) + 0x34u;
        edi = t2;
        loc_4c = t2;
    }
    else
    {
        edi = t2;
        loc_4c = t2;
        ecx = self + 0x30u;
    }
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x1003be10u), ecx, 3, loc_4c, 0u, 0u);
    d3 = cow_take_float(g);
    t4 = rd32(self + 0x98u);
    wr32(sp0 - 0x28u, t4);
    t5 = rd32(self + 0x94u);
    wr32(sp0 - 0x2cu, t5);
    t6 = rd32(self + 0x90u);
    wr32(sp0 - 0x30u, t6);
    wr32(sp0 - 0x44u, sp0 - 0x30u);
    wr32(sp0 - 0x24u, 0x3f800000u);
    wr32(sp0 - 0x48u, edi);
    wr32(sp0 - 0x4cu, sp0 - 0x30u);
    g->edx = sp0 - 0x30u;
    t7 = rd32(COW_IMG(0x1047cf7cu));
    cow_thiscall(g, rd32(rd32(t7) + 0x4cu), t7, 3, sp0 - 0x30u, edi, sp0 - 0x30u);
    t8 = g->ecx;
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t11 = g->edx;
    wr32(sp0 - 0x44u, sp0 - 0x30u);
    wr32(sp0 - 0x48u, t10 + 0x98u);
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, t10 + 0x98u, sp0 - 0x30u);
    wr8(t10 + 0x89u, 1u);
    t12 = rd32(self + 0x84u);
    wr32(sp0 - 0x2cu, t12);
    t13 = rd32(self + 0x88u);
    wr32(sp0 - 0x28u, t13);
    wr32(sp0 - 0x44u, sp0 - 0x30u);
    t14 = rd32(self + 0x80u);
    wr32(sp0 - 0x30u, t14);
    wr32(sp0 - 0x24u, 0x3f800000u);
    wr32(sp0 - 0x48u, edi);
    wr32(sp0 - 0x4cu, sp0 - 0x30u);
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t15 = rd32(COW_IMG(0x1047cf7cu));
    t16 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    cow_thiscall(g, rd32(t16 + 0x4cu), t15, 3, sp0 - 0x30u, edi, sp0 - 0x30u);
    t17 = g->ecx;
    t18 = g->edx;
    t19 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    wr32(sp0 - 0x44u, sp0 - 0x30u);
    wr32(sp0 - 0x48u, t19 + 0x8cu);
    g->ecx = sp0 - 0x30u;
    g->edx = t19 + 0x8cu;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, t19 + 0x8cu, sp0 - 0x30u);
    t20 = g->ecx;
    t21 = g->edx;
    wr8(t19 + 0x88u, 1u);
    t22 = rd32(self + 0x9cu);
    wr32(sp0 + 4u, t22);
    g->edx = t21;
    g->esp = sp0 - 0x48u;
    t23 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t24 = g->edx;
    t25 = rd32(sp0 + 4u);
    wr8(t23 + 0x8au, 1u);
    wr32(t23 + 0xa4u, t25);
    d26 = (double)(float)(double)rdf32(self + 0x8cu);
    wrf32(sp0 - 0x44u, (float)d26);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10015290u), 1, cow_f2bits(d26));
    t27 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t28 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t28 + 0xa90u, t27);
    wr32(t27 * 4u + t28 + 0xa10u, edi);
    return;
L_1003cac6: ;
    g->ecx = self;
    g->esp = sp0 - 0x38u;
    cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t29 = g->ecx;
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    g->ecx = t29;
    g->edx = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10021280u), 2, sp0 - 0x20u, sp0 - 0x10u);
    t30 = g->ecx;
    t31 = g->edx;
    g->esp = sp0 - 0x40u;
    t32 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    wr32(sp0 - 0x48u, t32 + 0x8cu);
    g->ecx = sp0 - 0x20u;
    g->edx = t32 + 0x8cu;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, t32 + 0x8cu, sp0 - 0x20u);
    t33 = g->ecx;
    t34 = g->edx;
    wr8(t32 + 0x88u, 1u);
    g->edx = t34;
    g->esp = sp0 - 0x48u;
    t35 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t36 = g->edx;
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    wr32(sp0 - 0x50u, t35 + 0x98u);
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, t35 + 0x98u, sp0 - 0x10u);
    wr8(t35 + 0x89u, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003c970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1003c970(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
