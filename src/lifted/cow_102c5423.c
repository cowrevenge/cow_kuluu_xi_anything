/* f_0x102c5423 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c5423(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c5433u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c5433;
    case 0x102c543eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102c543e;
    case 0x102c5440u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102c5440;
    case 0x102c5466u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_102c5466;
    case 0x102c5474u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c5474;
    case 0x102c5478u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c5478;
    case 0x102c547fu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c547f;
    case 0x102c5483u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c5483;
    case 0x102c5490u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c5490;
    case 0x102c5497u: self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c5497;
    case 0x102c549du: self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c549d;
    case 0x102c54a2u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c54a2;
    case 0x102c54b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_102c54b6;
    case 0x102c54c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_102c54c3;
    case 0x102c54c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_102c54c9;
    case 0x102c54ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_102c54ce;
    case 0x102c54dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_102c54df;
    case 0x102c54e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_102c54e6;
    case 0x102c54f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_102c54f5;
    case 0x102c551cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); goto E_102c551c;
    case 0x102c5521u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); goto E_102c5521;
    case 0x102c5541u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); goto E_102c5541;
    case 0x102c5545u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); goto E_102c5545;
    case 0x102c5547u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); goto E_102c5547;
    case 0x102c5555u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); goto E_102c5555;
    case 0x102c5570u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); goto E_102c5570;
    case 0x102c557cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); goto E_102c557c;
    case 0x102c5582u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); goto E_102c5582;
    case 0x102c5585u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); goto E_102c5585;
    default: break;
    }
#endif

    COW_AT(102c5423)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x68u) & 1u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x68u);
        ebx = rd32(sp0 + 4u);
        goto L_102c5474;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x68u);
    ebx = rd32(sp0 + 4u);
    COW_AT(102c5433)
    wr32(sp0 - 0x14u, COW_IMG(0x103c8d98u));
    wr32(sp0 - 0x18u, ebx);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, ebx, COW_IMG(0x103c8d98u), in_edi, in_esi);
    t1 = g->edx;
    edx = t1;
    loc_14 = COW_IMG(0x103c8d98u);
L_102c543e: ;
    COW_AT(102c543e)
    ecx = loc_14;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_102c5440: ;
    COW_AT(102c5440)
    wr32(sp0 - 0x14u, arg3 + 1u);
    wr32(sp0 - 0x18u, ebx);
    g->eax = arg3 + 1u;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 3, ebx, arg3 + 1u, loc_10);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x20u, t6);
    wr32(sp0 - 0x24u, ebx);
    g->ecx = t7;
    g->esp = sp0 - 0x10u;
    t9 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, t8, 1, 5, ebx, t6, arg3, rd32(sp0 - 0x18u), arg3 + 1u);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, ebx);
    g->ecx = t10;
    g->esp = sp0 - 0x18u;
    t12 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t11, 1, 5, ebx, 0u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), arg3);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u)
    {
        ecx = t13;
        edx = t14;
        edi = t6;
        goto L_102c54b6;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    edi = t6;
    COW_AT(102c5466)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, ebx);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, ebx, edi);
L_102c5585: ;
    COW_AT(102c5585)
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c5474: ;
    COW_AT(102c5474)
    if ((eax & 4u) == 0u) goto L_102c547f;
    COW_AT(102c5478)
    wr32(sp0 - 0x14u, COW_IMG(0x103c8d80u));
    loc_14 = COW_IMG(0x103c8d80u);
L_102c54a2: ;
    COW_AT(102c54a2)
    wr32(sp0 - 0x18u, ebx);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, ebx, loc_14);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x20u, ebx);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t5, 1, 5, ebx, arg3, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), in_edi);
L_102c5582: ;
    COW_AT(102c5582)
    goto L_102c5585;
L_102c547f: ;
    COW_AT(102c547f)
    if ((eax & 2u) == 0u) goto L_102c5490;
    COW_AT(102c5483)
    wr32(sp0 - 0x14u, COW_IMG(0x103c8d68u));
    wr32(sp0 - 0x18u, ebx);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, ebx, COW_IMG(0x103c8d68u));
    t2 = g->edx;
    edx = t2;
    loc_14 = COW_IMG(0x103c8d68u);
    goto L_102c543e;
L_102c5490: ;
    COW_AT(102c5490)
    if (arg2 == 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_102c5440;
    }
    COW_AT(102c5497)
    if ((rd8(arg2 + 9u) & 0x10u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_102c5440;
    }
    COW_AT(102c549d)
    wr32(sp0 - 0x14u, COW_IMG(0x103c8d50u));
    eax = arg2;
    loc_14 = COW_IMG(0x103c8d50u);
    goto L_102c54a2;
L_102c54b6: ;
    COW_AT(102c54b6)
    wr8(arg3 + edi, 0u);
    if (rd8(edi) == 0u)
    {
        eax = arg3 + edi;
        esi = edi;
        goto L_102c54c9;
    }
    eax = arg3 + edi;
    esi = edi;
L_102c54c3: ;
    COW_AT(102c54c3)
    if (rd8(esi + 1u) != 0u)
    {
        esi = esi + 1u;
        goto L_102c54c3;
    }
    esi = esi + 1u;
L_102c54c9: ;
    COW_AT(102c54c9)
    if (esi + 1u < eax)
    {
        esi = esi + 1u;
        goto L_102c54df;
    }
    COW_AT(102c54ce)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t15 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, ebx, edi);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x1cu, COW_IMG(0x103c8d38u));
    eax = t15;
    ecx = t16;
    edx = t17;
    loc_1c = COW_IMG(0x103c8d38u);
L_102c557c: ;
    COW_AT(102c557c)
    wr32(sp0 - 0x20u, ebx);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, ebx, loc_1c);
    goto L_102c5582;
L_102c54df: ;
    COW_AT(102c54df)
    if (rd8(esi) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        esi = esi + 1u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        esi = esi + 1u;
    COW_AT(102c54e6)
        wr32(sp0 - 0x14u, COW_IMG(0x103c8d08u));
        wr32(sp0 - 0x18u, ebx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t18 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, ebx, COW_IMG(0x103c8d08u));
        t19 = g->edx;
        eax = t18 & 0xffffff00u;
        edx = t19;
    }
    COW_AT(102c54f5)
    wr32(sp0 - 0x14u, sp0 + 0xcu);
    wr32(sp0 - 0x18u, esi - edi);
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, (uint8_t)eax);
    wr32(sp0 - 0x28u, ebx);
    wr32(sp0 + 4u, (uint8_t)eax);
    g->eax = (uint8_t)eax;
    g->ecx = sp0 + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t20 = cow_cdecl(g, COW_IMG(0x102c46a3u), 6, ebx, (uint8_t)eax, edi, arg3, esi - edi, sp0 + 0xcu);
    t21 = g->ecx;
    t22 = g->edx;
    if (esi - edi > arg3)
    {
        eax = arg3 - (esi - edi);
        ecx = t21;
        edx = t22;
        edi = t20;
        goto L_102c5570;
    }
    eax = arg3 - (esi - edi);
    ecx = t21;
    edx = t22;
    esi = esi - edi;
    edi = t20;
    COW_AT(102c551c)
    if (eax < 4u) goto L_102c5570;
    COW_AT(102c5521)
    if (((((uint32_t)rd8(edi + esi) << 8u | rd8(edi + esi + 1u)) << 8u | rd8(edi + esi + 2u)) << 8u | rd8(edi + esi + 3u)) >= eax)
    {
        ecx = edi + esi;
        edx = (((uint32_t)rd8(edi + esi) << 8u | rd8(edi + esi + 1u)) << 8u | rd8(edi + esi + 2u)) << 8u | rd8(edi + esi + 3u);
        cf = ((((uint32_t)rd8(edi + esi) << 8u | rd8(edi + esi + 1u)) << 8u | rd8(edi + esi + 2u)) << 8u | rd8(edi + esi + 3u)) < eax;
        zf = ((((uint32_t)rd8(edi + esi) << 8u | rd8(edi + esi + 1u)) << 8u | rd8(edi + esi + 2u)) << 8u | rd8(edi + esi + 3u)) == eax;
    }
    else
    {
        ecx = edi + esi;
        edx = (((uint32_t)rd8(edi + esi) << 8u | rd8(edi + esi + 1u)) << 8u | rd8(edi + esi + 2u)) << 8u | rd8(edi + esi + 3u);
    COW_AT(102c5541)
        eax = edx;
        cf = 0u;
        zf = 1u;
    }
    COW_AT(102c5545)
    if (cf || zf) goto L_102c5555;
    COW_AT(102c5547)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t23 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, ebx, edi);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x1cu, COW_IMG(0x103c8ce4u));
    eax = t23;
    ecx = t24;
    edx = t25;
    loc_1c = COW_IMG(0x103c8ce4u);
    goto L_102c557c;
L_102c5555: ;
    COW_AT(102c5555)
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, ecx);
    t26 = rd32(sp0 + 4u);
    wr32(sp0 - 0x1cu, t26);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t27 = cow_cdecl(g, COW_IMG(0x102c85f7u), 6, ebx, arg2, edi, t26, ecx, eax);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(sp0 - 0x2cu, edi);
    wr32(sp0 - 0x30u, ebx);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t29, 1, 2, ebx, edi);
    goto L_102c5585;
L_102c5570: ;
    COW_AT(102c5570)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t30 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, ebx, edi);
    t31 = g->ecx;
    t32 = g->edx;
    wr32(sp0 - 0x1cu, COW_IMG(0x103c8cb8u));
    eax = t30;
    ecx = t31;
    edx = t32;
    loc_1c = COW_IMG(0x103c8cb8u);
    goto L_102c557c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c5423(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c5433u:
    {
        uint32_t cf;
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
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c543eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5440u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5466u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5474u:
    {
        uint32_t cf;
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
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5478u:
    {
        uint32_t cf;
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
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c547fu:
    {
        uint32_t cf;
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
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5483u:
    {
        uint32_t cf;
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
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5490u:
    {
        uint32_t cf;
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
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5497u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c549du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c54a2u:
    {
        uint32_t cf;
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
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c54b6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102c54c3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c54c9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c54ceu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c54dfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c54e6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c54f5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c551cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c5521u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c5541u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c5545u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c5547u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c5555u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c5570u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c557cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5582u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5585u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c5423(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c5423(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
