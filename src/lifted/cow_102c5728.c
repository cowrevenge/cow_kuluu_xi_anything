/* f_0x102c5728 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c5728(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_11c;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 308u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c5741u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c5741;
    case 0x102c574eu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c574e;
    case 0x102c575cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c575c;
    case 0x102c5765u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c5765;
    case 0x102c5774u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c5774;
    case 0x102c5778u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c5778;
    case 0x102c5782u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c5782;
    case 0x102c5786u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c5786;
    case 0x102c578cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c578c;
    case 0x102c5796u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c5796;
    case 0x102c57a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c57a1;
    case 0x102c57b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c57b2;
    case 0x102c57b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c57b6;
    case 0x102c57c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c57c7;
    case 0x102c57e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c57e4;
    case 0x102c57e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c57e8;
    case 0x102c57eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c57ee;
    case 0x102c5838u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c5838;
    case 0x102c583cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c583c;
    case 0x102c5842u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c5842;
    case 0x102c5849u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c5849;
    case 0x102c5871u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); goto E_102c5871;
    case 0x102c587fu: eax = g->eax; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); goto E_102c587f;
    case 0x102c58a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c58a1;
    case 0x102c58a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102c58a6;
    case 0x102c58afu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); goto E_102c58af;
    case 0x102c58b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_11c = rd32(sp0 - 0x11cu); goto E_102c58b8;
    default: break;
    }
#endif

    COW_AT(102c5728)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x110u, in_ebx);
    wr32(sp0 - 0x114u, in_esi);
    wr32(sp0 - 0x118u, in_edi);
    if (rd32(arg1 + 0x68u) & 1u)
    {
        eax = rd32(arg1 + 0x68u);
        goto L_102c5774;
    }
    eax = rd32(arg1 + 0x68u);
    COW_AT(102c5741)
    wr32(sp0 - 0x11cu, COW_IMG(0x103c8ec8u));
    wr32(sp0 - 0x120u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x110u;
    t1 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c8ec8u), in_edi, in_esi);
    t2 = g->edx;
    eax = t1;
    ecx = COW_IMG(0x103c8ec8u);
    edx = t2;
L_102c574e: ;
    COW_AT(102c574e)
    if (rd8(arg1 + 0x126u) != 3u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x126u);
        goto L_102c57e4;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 0x126u);
    COW_AT(102c575c)
    if ((rd8(arg1 + 0x68u) & 2u) != 0u) goto L_102c5796;
    COW_AT(102c5765)
    wr32(sp0 - 0x11cu, COW_IMG(0x103c8eacu));
    wr32(sp0 - 0x120u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t3 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8eacu));
    t4 = g->edx;
    eax = t3;
    ecx = COW_IMG(0x103c8eacu);
    edx = t4;
L_102c57b2: ;
    COW_AT(102c57b2)
    if (arg3 != 0u) goto L_102c57c7;
    COW_AT(102c57b6)
    wr32(sp0 - 0x11cu, COW_IMG(0x103c8e48u));
    wr32(sp0 - 0x120u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t8 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8e48u));
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x124u, arg3);
    eax = t8;
    ecx = t9;
    edx = t10;
    loc_11c = COW_IMG(0x103c8e48u);
L_102c58af: ;
    COW_AT(102c58af)
    wr32(sp0 - 0x128u, arg1);
    g->esp = sp0 - 0x114u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, arg1, arg3, rd32(sp0 - 0x120u), loc_11c, rd32(sp0 - 0x118u));
L_102c58b8: ;
    COW_AT(102c58b8)
    g->ebx = rd32(sp0 - 0x110u);
    g->esi = rd32(sp0 - 0x114u);
    g->edi = rd32(sp0 - 0x118u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c5774: ;
    COW_AT(102c5774)
    if ((eax & 4u) == 0u) goto L_102c5782;
    COW_AT(102c5778)
    wr32(sp0 - 0x11cu, COW_IMG(0x103c8e94u));
    ecx = self;
    edx = in_edx;
    loc_11c = COW_IMG(0x103c8e94u);
L_102c58a6: ;
    COW_AT(102c58a6)
    wr32(sp0 - 0x120u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t33 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_11c);
    t34 = g->ecx;
    t35 = g->edx;
    wr32(sp0 - 0x124u, arg3);
    eax = t33;
    ecx = t34;
    edx = t35;
    loc_11c = rd32(sp0 - 0x11cu);
    goto L_102c58af;
L_102c5782: ;
    COW_AT(102c5782)
    if (arg2 == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102c574e;
    }
    COW_AT(102c5786)
    if ((rd8(arg2 + 8u) & 0x10u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102c574e;
    }
    COW_AT(102c578c)
    wr32(sp0 - 0x11cu, COW_IMG(0x103c8e7cu));
    ecx = self;
    edx = in_edx;
    loc_11c = COW_IMG(0x103c8e7cu);
    goto L_102c58a6;
L_102c5796: ;
    COW_AT(102c5796)
    if (arg3 <= rd16(arg1 + 0x118u))
    {
        eax = rd16(arg1 + 0x118u);
        goto L_102c57b2;
    }
    eax = rd16(arg1 + 0x118u);
    COW_AT(102c57a1)
    wr32(sp0 - 0x11cu, COW_IMG(0x103c8e60u));
    wr32(sp0 - 0x120u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t5 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8e60u));
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x124u, arg3);
    eax = t5;
    ecx = t6;
    edx = t7;
    loc_11c = COW_IMG(0x103c8e60u);
    goto L_102c58af;
L_102c57c7: ;
    COW_AT(102c57c7)
    wr32(sp0 - 0x11cu, arg3);
    wr32(sp0 - 0x120u, sp0 - 0x10cu);
    wr32(sp0 - 0x124u, arg1);
    g->eax = sp0 - 0x10cu;
    g->ecx = ecx;
    g->esp = sp0 - 0x110u;
    t11 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 - 0x10cu, arg3, in_edi, in_esi);
    t12 = g->ecx;
    t13 = g->edx;
    wr16(arg1 + 0x11au, (uint16_t)arg3);
    eax = t11;
    ecx = t12;
    edx = t13;
L_102c5871: ;
    COW_AT(102c5871)
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x120u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x10cu;
    t30 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, arg1, 0u, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
    t31 = g->edx;
    if (t30 == 0u)
    {
        edx = t31;
    COW_AT(102c587f)
        wr32(sp0 - 0x11cu, arg1 + 0x18cu);
        t32 = rd16(arg1 + 0x11au);
        wr32(sp0 - 0x120u, t32);
        wr32(sp0 - 0x124u, sp0 - 0x10cu);
        wr32(sp0 - 0x128u, arg2);
        wr32(sp0 - 0x12cu, arg1);
        g->esp = sp0 - 0x118u;
        cow_call_regs(g, COW_IMG(0x102c88a1u), sp0 - 0x10cu, 0u, edx, 1, 5, arg1, arg2, sp0 - 0x10cu, t32, arg1 + 0x18cu);
    }
    goto L_102c58b8;
L_102c57e4: ;
    COW_AT(102c57e4)
    if ((uint8_t)eax != 2u) goto L_102c5838;
    COW_AT(102c57e8)
    if (arg3 != 6u) goto L_102c5842;
    COW_AT(102c57ee)
    wr32(sp0 - 0x11cu, 6u);
    wr32(sp0 - 0x120u, sp0 - 0xcu);
    wr32(sp0 - 0x124u, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0x110u;
    cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 - 0xcu, 6u, in_edi, in_esi);
    t14 = g->ecx;
    t15 = g->edx;
    wr16(arg1 + 0x11au, 1u);
    wr32(sp0 - 0x128u, sp0 - 0xcu);
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x124u;
    t16 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 - 0xcu, g->ecx, g->edx, 1, 1, sp0 - 0xcu);
    t17 = g->ecx;
    t18 = g->edx;
    wr16(arg1 + 0x18eu, (uint16_t)t16);
    wr32(sp0 - 0x12cu, sp0 - 0xau);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x128u;
    t19 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 - 0xau, g->ecx, g->edx, 1, 1, sp0 - 0xau);
    t20 = g->ecx;
    t21 = g->edx;
    wr16(arg1 + 0x190u, (uint16_t)t19);
    wr32(sp0 - 0x130u, sp0 - 8u);
    g->ecx = t20;
    g->edx = t21;
    g->esp = sp0 - 0x12cu;
    t22 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 - 8u, g->ecx, g->edx, 1, 1, sp0 - 8u);
    t23 = g->ecx;
    t24 = g->edx;
    wr16(arg1 + 0x192u, (uint16_t)t22);
    eax = t22;
    ecx = t23;
    edx = t24;
    goto L_102c5871;
L_102c5838: ;
    COW_AT(102c5838)
    if ((uint8_t)eax != 0u) goto L_102c58a1;
    COW_AT(102c583c)
    if (arg3 == 2u) goto L_102c5849;
L_102c5842: ;
    COW_AT(102c5842)
    wr32(sp0 - 0x11cu, COW_IMG(0x103c8e60u));
    loc_11c = COW_IMG(0x103c8e60u);
    goto L_102c58a6;
L_102c5849: ;
    COW_AT(102c5849)
    wr32(sp0 - 0x11cu, 2u);
    wr32(sp0 - 0x120u, sp0 - 0xcu);
    wr32(sp0 - 0x124u, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0x110u;
    cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 - 0xcu, 2u, in_edi, in_esi);
    t25 = g->ecx;
    t26 = g->edx;
    wr16(arg1 + 0x11au, 1u);
    wr32(sp0 - 0x128u, sp0 - 0xcu);
    g->ecx = t25;
    g->edx = t26;
    g->esp = sp0 - 0x124u;
    t27 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 - 0xcu, g->ecx, g->edx, 1, 1, sp0 - 0xcu);
    t28 = g->ecx;
    t29 = g->edx;
    wr16(arg1 + 0x194u, (uint16_t)t27);
    eax = t27;
    ecx = t28;
    edx = t29;
    goto L_102c5871;
L_102c58a1: ;
    COW_AT(102c58a1)
    wr32(sp0 - 0x11cu, COW_IMG(0x103c8e1cu));
    loc_11c = COW_IMG(0x103c8e1cu);
    goto L_102c58a6;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c5728(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c5741u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c574eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c575cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5765u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102c5774u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5778u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5782u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5786u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c578cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5796u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102c57a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102c57b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102c57b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102c57c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102c57e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c57e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c57eeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5838u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c583cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5842u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5849u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c5871u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x118u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c587fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_11c;
        eax = g->eax;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x118u;
        g->ecx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c58a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c58a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x11cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c58afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x124u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x124u, arg3);
        (void)sp0;
        return 1;
    }
    case 0x102c58b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x118u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c5728(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c5728(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
