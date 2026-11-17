/* f_0x102c5e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c5e30(Guest* g)
{
    double d17;
    double d19;
    double d20;
    double d21;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_14_d;
    uint32_t loc_24;
    double loc_c_d;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t2;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (rd32(arg1 + 0x68u) & 1u)
    {
        eax = rd32(arg1 + 0x68u);
        goto L_102c5e6f;
    }
    eax = rd32(arg1 + 0x68u);
    wr32(sp0 - 0x24u, COW_IMG(0x103c9290u));
    wr32(sp0 - 0x28u, arg1);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c9290u), in_edi, in_esi);
    t1 = g->edx;
    ecx = COW_IMG(0x103c9290u);
    edx = t1;
L_102c5e50: ;
    t6 = rd32(sp0 + 0xcu) + 1u;
    wr32(sp0 - 0x24u, t6);
    wr32(sp0 - 0x28u, arg1);
    g->eax = t6;
    t7 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x10u;
    t8 = cow_call_regs(g, COW_IMG(0x102c44bfu), g->eax, ecx, edx, 1, 6, arg1, t6, in_edi, in_esi, in_ebx, rd32(sp0 - 0x14u));
    t9 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        ecx = rd32(sp0 - 0x24u);
        edx = t9;
        esi = t8;
        edi = t7;
        goto L_102c5ea0;
    }
    eax = t8;
    ecx = rd32(sp0 - 0x24u);
    edx = t9;
    wr32(sp0 - 0x24u, COW_IMG(0x103c9264u));
    loc_24 = COW_IMG(0x103c9264u);
L_102c5f13: ;
    wr32(sp0 - 0x28u, arg1);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_24);
L_102c5f19: ;
L_102c5f80: ;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c5e6f: ;
    if ((eax & 4u) == 0u) goto L_102c5e7a;
    wr32(sp0 - 0x24u, COW_IMG(0x103c924cu));
    loc_24 = COW_IMG(0x103c924cu);
L_102c5e8c: ;
    wr32(sp0 - 0x28u, arg1);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_24);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x2cu, t5);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t4, 1, 5, arg1, t5, arg1, rd32(sp0 - 0x24u), in_edi);
L_102c5f7d: ;
    goto L_102c5f80;
L_102c5e7a: ;
    if (arg2 == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102c5e50;
    }
    if ((rd8(arg2 + 9u) & 0x40u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102c5e50;
    }
    wr32(sp0 - 0x24u, COW_IMG(0x103c9234u));
    eax = arg2;
    loc_24 = COW_IMG(0x103c9234u);
    goto L_102c5e8c;
L_102c5ea0: ;
    wr32(sp0 - 0x24u, edi);
    wr32(sp0 - 0x28u, esi);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x18u;
    t10 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, esi, edi, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, arg1);
    g->ecx = t11;
    g->esp = sp0 - 0x20u;
    t13 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t12, 1, 5, arg1, 0u, arg1, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        ecx = t14;
        edx = t15;
        goto L_102c5ec0;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    wr32(sp0 - 0x24u, esi);
    wr32(sp0 - 0x28u, arg1);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, arg1, esi);
    goto L_102c5f19;
L_102c5ec0: ;
    wr32(sp0 - 0x24u, sp0 + 4u);
    wr8(edi + esi, 0u);
    wr32(sp0 - 0x28u, esi + 1u);
    g->ebx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall_cdecl(g, COW_IMG(0x103173d1u), ecx, 3, esi + 1u, sp0 + 4u, rd32(sp0 - 0x20u));
    t16 = g->edx;
    d17 = cow_take_float(g);
    wrf64(sp0 - 0x14u, d17);
    if (rd8(arg1) == 0u)
    {
        edx = t16;
        edi = edi + esi;
        loc_14_d = d17;
        goto L_102c5ee6;
    }
    edx = t16;
    wr32(sp0 - 0x24u, COW_IMG(0x103c920cu));
    eax = arg1;
    ecx = sp0 + 4u;
    loc_24 = COW_IMG(0x103c920cu);
    goto L_102c5f13;
L_102c5ee6: ;
    if (rd8(esi) == 0u)
    {
        eax = esi;
        goto L_102c5ef3;
    }
    eax = esi;
L_102c5eed: ;
    if (rd8(eax + 1u) != 0u)
    {
        eax = eax + 1u;
        goto L_102c5eed;
    }
    eax = eax + 1u;
L_102c5ef3: ;
    wr32(sp0 - 0x24u, sp0 + 4u);
    wr32(sp0 - 0x28u, eax + 1u);
    wr32(sp0 + 0xcu, eax + 1u);
    g->ebx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall_cdecl(g, COW_IMG(0x103173d1u), sp0 + 4u, 3, eax + 1u, sp0 + 4u, rd32(sp0 - 0x20u));
    t18 = g->edx;
    d19 = cow_take_float(g);
    wrf64(sp0 - 0xcu, d19);
    if (rd8(arg1) == 0u)
    {
        edx = t18;
        loc_c_d = d19;
        goto L_102c5f1d;
    }
    edx = t18;
    wr32(sp0 - 0x24u, COW_IMG(0x103c91e4u));
    eax = arg1;
    ecx = sp0 + 4u;
    loc_24 = COW_IMG(0x103c91e4u);
    goto L_102c5f13;
L_102c5f1d: ;
    if (edi < rd32(sp0 + 0xcu))
    {
        eax = arg1;
        goto L_102c5f6b;
    }
    d20 = rdf64(sp0 - 0x14u);
    if (d20 <= rdf64(COW_IMG(0x1032a108u)))
    {
        eax = (arg1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, rdf64(COW_IMG(0x1032a108u)), 0u);
        goto L_102c5f6b;
    }
    eax = (arg1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, rdf64(COW_IMG(0x1032a108u)), 0u);
    if (loc_c_d <= rdf64(COW_IMG(0x1032a108u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_c_d, rdf64(COW_IMG(0x1032a108u)), 0u);
        goto L_102c5f6b;
    }
    wrf64(sp0 - 0x28u, loc_c_d);
    d21 = rdf64(sp0 - 0x14u);
    wrf64(sp0 - 0x30u, d21);
    wr32(sp0 - 0x34u, (uint32_t)(int8_t)rd8(esi));
    wr32(sp0 - 0x38u, arg2);
    wr32(sp0 - 0x3cu, arg1);
    g->eax = (uint32_t)(int8_t)rd8(esi);
    g->edx = edx;
    t22 = rd8(esi);
    g->esp = sp0 - 0x28u;
    t23 = cow_thiscall_cdecl(g, COW_IMG(0x102c8401u), sp0 + 4u, 5, arg1, arg2, (uint32_t)(int8_t)t22, cow_dlo(d21), cow_dhi(d21));
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x40u, esi);
    wr32(sp0 - 0x44u, arg1);
    g->esp = sp0 - 0x3cu;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t25, 1, 2, arg1, esi);
    goto L_102c5f80;
L_102c5f6b: ;
    wr32(sp0 - 0x24u, COW_IMG(0x103c91d0u));
    wr32(sp0 - 0x28u, arg1);
    g->eax = eax;
    g->ecx = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t26 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c91d0u));
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0x2cu, esi);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t28, 1, 2, arg1, esi);
    goto L_102c5f7d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c5e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c5e30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
