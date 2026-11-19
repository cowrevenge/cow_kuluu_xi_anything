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
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_14_d;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_4;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c5e43u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102c5e43;
    case 0x102c5e4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c5e4e;
    case 0x102c5e50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_4 = rd32(sp0 - 4u); goto E_102c5e50;
    case 0x102c5e5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_102c5e5d;
    case 0x102c5e65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_102c5e65;
    case 0x102c5e6fu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102c5e6f;
    case 0x102c5e73u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102c5e73;
    case 0x102c5e7au: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102c5e7a;
    case 0x102c5e81u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102c5e81;
    case 0x102c5e87u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102c5e87;
    case 0x102c5e8cu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102c5e8c;
    case 0x102c5e92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c5e92;
    case 0x102c5e9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c5e9b;
    case 0x102c5ea0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_102c5ea0;
    case 0x102c5ea8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c5ea8;
    case 0x102c5eb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c5eb0;
    case 0x102c5eb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c5eb7;
    case 0x102c5ebeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c5ebe;
    case 0x102c5ec0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c5ec0;
    case 0x102c5ed2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102c5ed2;
    case 0x102c5edfu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14_d = rdf64(sp0 - 0x14u); goto E_102c5edf;
    case 0x102c5ee6u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14_d = rdf64(sp0 - 0x14u); goto E_102c5ee6;
    case 0x102c5eedu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14_d = rdf64(sp0 - 0x14u); goto E_102c5eed;
    case 0x102c5ef3u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14_d = rdf64(sp0 - 0x14u); goto E_102c5ef3;
    case 0x102c5f01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102c5f01;
    case 0x102c5f0eu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c_d = rdf64(sp0 - 0xcu); goto E_102c5f0e;
    case 0x102c5f13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_14_d = rdf64(sp0 - 0x14u); loc_c_d = rdf64(sp0 - 0xcu); goto E_102c5f13;
    case 0x102c5f19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c5f19;
    case 0x102c5f1du: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c_d = rdf64(sp0 - 0xcu); goto E_102c5f1d;
    case 0x102c5f22u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c_d = rdf64(sp0 - 0xcu); goto E_102c5f22;
    case 0x102c5f32u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c_d = rdf64(sp0 - 0xcu); goto E_102c5f32;
    case 0x102c5f42u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c_d = rdf64(sp0 - 0xcu); goto E_102c5f42;
    case 0x102c5f5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c5f5f;
    case 0x102c5f66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c5f66;
    case 0x102c5f6bu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c_d = rdf64(sp0 - 0xcu); goto E_102c5f6b;
    case 0x102c5f76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_102c5f76;
    case 0x102c5f7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c5f7d;
    case 0x102c5f80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c5f80;
    default: break;
    }
#endif

    COW_AT(102c5e30)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x68u) & 1u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x68u);
        ebx = rd32(sp0 + 4u);
        goto L_102c5e6f;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x68u);
    ebx = rd32(sp0 + 4u);
    COW_AT(102c5e43)
    wr32(sp0 - 0x24u, COW_IMG(0x103c9290u));
    wr32(sp0 - 0x28u, ebx);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, ebx, COW_IMG(0x103c9290u), in_edi, in_esi);
    t1 = g->edx;
    edx = t1;
    COW_AT(102c5e4e)
    ecx = COW_IMG(0x103c9290u);
    loc_4 = rd32(sp0 - 4u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
L_102c5e50: ;
    COW_AT(102c5e50)
    t6 = rd32(sp0 + 0xcu) + 1u;
    wr32(sp0 - 0x24u, t6);
    wr32(sp0 - 0x28u, ebx);
    g->eax = t6;
    t7 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x10u;
    t8 = cow_call_regs(g, COW_IMG(0x102c44bfu), g->eax, ecx, edx, 1, 6, ebx, t6, loc_20, loc_1c, loc_18, rd32(sp0 - 0x14u));
    t9 = g->edx;
    eax = t8;
    edx = t9;
    edi = t7;
    loc_24 = rd32(sp0 - 0x24u);
    COW_AT(102c5e5d)
    if (eax != 0u)
    {
        ecx = loc_24;
        esi = eax;
        goto L_102c5ea0;
    }
    ecx = loc_24;
    COW_AT(102c5e65)
    wr32(sp0 - 0x24u, COW_IMG(0x103c9264u));
    loc_24 = COW_IMG(0x103c9264u);
L_102c5f13: ;
    COW_AT(102c5f13)
    wr32(sp0 - 0x28u, ebx);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, ebx, loc_24);
L_102c5f19: ;
    COW_AT(102c5f19)
L_102c5f80: ;
    COW_AT(102c5f80)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c5e6f: ;
    COW_AT(102c5e6f)
    if ((eax & 4u) == 0u) goto L_102c5e7a;
    COW_AT(102c5e73)
    wr32(sp0 - 0x24u, COW_IMG(0x103c924cu));
    loc_24 = COW_IMG(0x103c924cu);
L_102c5e8c: ;
    COW_AT(102c5e8c)
    wr32(sp0 - 0x28u, ebx);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, ebx, loc_24);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(102c5e92)
    t5 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x2cu, t5);
    wr32(sp0 - 0x30u, ebx);
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, ebx, t5, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    COW_AT(102c5e9b)
L_102c5f7d: ;
    COW_AT(102c5f7d)
    goto L_102c5f80;
L_102c5e7a: ;
    COW_AT(102c5e7a)
    if (rd32(sp0 + 8u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_18 = in_ebx;
        loc_1c = in_esi;
        loc_20 = in_edi;
        goto L_102c5e50;
    }
    eax = rd32(sp0 + 8u);
    COW_AT(102c5e81)
    if ((rd8(eax + 9u) & 0x40u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_18 = in_ebx;
        loc_1c = in_esi;
        loc_20 = in_edi;
        goto L_102c5e50;
    }
    COW_AT(102c5e87)
    wr32(sp0 - 0x24u, COW_IMG(0x103c9234u));
    loc_24 = COW_IMG(0x103c9234u);
    goto L_102c5e8c;
L_102c5ea0: ;
    COW_AT(102c5ea0)
    wr32(sp0 - 0x24u, edi);
    wr32(sp0 - 0x28u, esi);
    wr32(sp0 - 0x2cu, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x18u;
    t10 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, ebx, esi, edi, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(102c5ea8)
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x20u;
    t13 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, ebx, 0u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(102c5eb0)
    if (eax == 0u) goto L_102c5ec0;
    COW_AT(102c5eb7)
    wr32(sp0 - 0x24u, esi);
    wr32(sp0 - 0x28u, ebx);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, ebx, esi);
    COW_AT(102c5ebe)
    goto L_102c5f19;
L_102c5ec0: ;
    COW_AT(102c5ec0)
    wr32(sp0 - 0x24u, sp0 + 4u);
    wr8(edi + esi, 0u);
    wr32(sp0 - 0x28u, esi + 1u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall_cdecl(g, COW_IMG(0x103173d1u), ecx, 3, esi + 1u, sp0 + 4u, rd32(sp0 - 0x20u));
    t16 = g->edx;
    d17 = cow_take_float(g);
    edx = t16;
    edi = edi + esi;
    x0 = d17;
    COW_AT(102c5ed2)
    wrf64(sp0 - 0x14u, x0);
    if (rd8(rd32(sp0 + 4u)) == 0u)
    {
        loc_14_d = x0;
        goto L_102c5ee6;
    }
    eax = rd32(sp0 + 4u);
    COW_AT(102c5edf)
    wr32(sp0 - 0x24u, COW_IMG(0x103c920cu));
    ecx = sp0 + 4u;
    loc_24 = COW_IMG(0x103c920cu);
    goto L_102c5f13;
L_102c5ee6: ;
    COW_AT(102c5ee6)
    if (rd8(esi) == 0u)
    {
        eax = esi;
        goto L_102c5ef3;
    }
    eax = esi;
L_102c5eed: ;
    COW_AT(102c5eed)
    if (rd8(eax + 1u) != 0u)
    {
        eax = eax + 1u;
        goto L_102c5eed;
    }
    eax = eax + 1u;
L_102c5ef3: ;
    COW_AT(102c5ef3)
    wr32(sp0 - 0x24u, sp0 + 4u);
    wr32(sp0 - 0x28u, eax + 1u);
    wr32(sp0 + 0xcu, eax + 1u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall_cdecl(g, COW_IMG(0x103173d1u), sp0 + 4u, 3, eax + 1u, sp0 + 4u, rd32(sp0 - 0x20u));
    t18 = g->edx;
    d19 = cow_take_float(g);
    edx = t18;
    x0 = d19;
    COW_AT(102c5f01)
    wrf64(sp0 - 0xcu, x0);
    if (rd8(rd32(sp0 + 4u)) == 0u)
    {
        eax = rd32(sp0 + 4u);
        loc_c_d = x0;
        goto L_102c5f1d;
    }
    eax = rd32(sp0 + 4u);
    COW_AT(102c5f0e)
    wr32(sp0 - 0x24u, COW_IMG(0x103c91e4u));
    ecx = sp0 + 4u;
    loc_24 = COW_IMG(0x103c91e4u);
    goto L_102c5f13;
L_102c5f1d: ;
    COW_AT(102c5f1d)
    if (edi < rd32(sp0 + 0xcu)) goto L_102c5f6b;
    COW_AT(102c5f22)
    d20 = rdf64(sp0 - 0x14u);
    if (d20 <= rdf64(COW_IMG(0x1032a108u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, rdf64(COW_IMG(0x1032a108u)), 0u);
        goto L_102c5f6b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, rdf64(COW_IMG(0x1032a108u)), 0u);
    COW_AT(102c5f32)
    if (loc_c_d <= rdf64(COW_IMG(0x1032a108u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_c_d, rdf64(COW_IMG(0x1032a108u)), 0u);
        goto L_102c5f6b;
    }
    COW_AT(102c5f42)
    wrf64(sp0 - 0x28u, loc_c_d);
    d21 = rdf64(sp0 - 0x14u);
    wrf64(sp0 - 0x30u, d21);
    wr32(sp0 - 0x34u, (uint32_t)(int8_t)rd8(esi));
    t22 = rd32(sp0 + 8u);
    wr32(sp0 - 0x38u, t22);
    wr32(sp0 - 0x3cu, ebx);
    g->eax = (uint32_t)(int8_t)rd8(esi);
    g->edx = edx;
    t23 = rd8(esi);
    g->esp = sp0 - 0x28u;
    t24 = cow_thiscall_cdecl(g, COW_IMG(0x102c8401u), sp0 + 4u, 5, ebx, t22, (uint32_t)(int8_t)t23, cow_dlo(d21), cow_dhi(d21));
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    COW_AT(102c5f5f)
    wr32(sp0 - 0x40u, esi);
    wr32(sp0 - 0x44u, ebx);
    g->esp = sp0 - 0x3cu;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, ebx, esi);
    COW_AT(102c5f66)
    goto L_102c5f80;
L_102c5f6b: ;
    COW_AT(102c5f6b)
    wr32(sp0 - 0x24u, COW_IMG(0x103c91d0u));
    wr32(sp0 - 0x28u, ebx);
    g->eax = eax;
    g->ecx = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t27 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, ebx, COW_IMG(0x103c91d0u));
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(102c5f76)
    wr32(sp0 - 0x2cu, esi);
    wr32(sp0 - 0x30u, ebx);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, ebx, esi);
    goto L_102c5f7d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c5e30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c5e43u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5e4eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, COW_IMG(0x103c9290u));
        (void)sp0;
        return 1;
    }
    case 0x102c5e50u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5e5du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5e65u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5e6fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5e73u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5e7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5e81u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5e87u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5e8cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_24;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5e92u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5e9bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5ea0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5ea8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5eb0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5eb7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5ebeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5ec0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5ed2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c5edfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_14_d;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14_d = rdf64(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c5ee6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_14_d;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14_d = rdf64(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c5eedu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_14_d;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14_d = rdf64(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c5ef3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_14_d;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14_d = rdf64(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c5f01u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c5f0eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_c_d;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c5f13u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_14_d;
        uint32_t loc_24;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14_d = rdf64(sp0 - 0x14u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5f19u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5f1du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_c_d;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c5f22u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_c_d;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c5f32u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_c_d;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c5f42u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_c_d;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c5f5fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5f66u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5f6bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_c_d;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102c5f76u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5f7du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5f80u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c5e30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c5e30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
