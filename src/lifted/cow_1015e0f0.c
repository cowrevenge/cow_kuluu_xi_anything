/* f_0x1015e0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1015e0f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015e112u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1015e112;
    case 0x1015e11fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_1015e11f;
    case 0x1015e123u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1015e123;
    case 0x1015e13bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e13b;
    case 0x1015e147u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e147;
    case 0x1015e156u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e156;
    case 0x1015e163u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e163;
    case 0x1015e171u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e171;
    case 0x1015e17fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e17f;
    case 0x1015e188u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e188;
    case 0x1015e18du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e18d;
    case 0x1015e198u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e198;
    case 0x1015e1a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e1a3;
    case 0x1015e1adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e1ad;
    case 0x1015e1b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e1b6;
    case 0x1015e1b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e1b9;
    case 0x1015e1c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e1c1;
    case 0x1015e1d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_1015e1d0;
    case 0x1015e1ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e1eb;
    case 0x1015e1efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e1ef;
    case 0x1015e1f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e1f1;
    case 0x1015e1f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e1f5;
    case 0x1015e1fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e1fa;
    case 0x1015e1fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e1fc;
    case 0x1015e201u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e201;
    case 0x1015e203u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e203;
    case 0x1015e20fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e20f;
    case 0x1015e213u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e213;
    case 0x1015e215u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e215;
    case 0x1015e21au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e21a;
    case 0x1015e21cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e21c;
    case 0x1015e221u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e221;
    case 0x1015e223u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e223;
    case 0x1015e225u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e225;
    case 0x1015e227u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1015e227;
    case 0x1015e229u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_1015e229;
    case 0x1015e22bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_1015e22b;
    case 0x1015e23cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_1015e23c;
    case 0x1015e23du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1015e23d;
    default: break;
    }
#endif

    COW_AT(1015e0f0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    t1 = rd32(rd32(COW_IMG(0x10456a28u)));
    wr32(sp0 - 4u, t1);
    if (rd8(COW_IMG(0x103722d8u)) == 0u)
    {
        eax = (rd32(COW_IMG(0x10456a28u)) & 0xffffff00u) | rd8(COW_IMG(0x103722d8u));
        ebx = in_ebx & 0xffffff00u;
        edi = in_edi;
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        goto L_1015e23d;
    }
    esi = t1;
    loc_4 = t1;
    COW_AT(1015e112)
    wr32(sp0 - 0x18u, in_edi);
    eax = COW_IMG(0x103722d8u);
    edx = in_edx;
    ebx = in_ebx & 0xffffff00u;
    edi = COW_IMG(0x10372300u);
    loc_c = in_ebx;
    loc_10 = in_ebp;
    loc_14 = in_esi;
    loc_18 = in_edi;
L_1015e123: ;
    COW_AT(1015e123)
    wr32(sp0 - 0x1cu, 0x10u);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, eax);
    g->eax = eax;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x10312980u), 5, eax, arg1, 0x10u, loc_18, loc_14);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_1015e22b;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(1015e13b)
    if (esi > 0xe0u) goto L_1015e22b;
    COW_AT(1015e147)
    t5 = rd32(COW_IMG(0x1015e248u) + rd8(COW_IMG(0x1015e260u) + esi) * 4u);
    edx = rd8(COW_IMG(0x1015e260u) + esi);
    switch (t5 - RD)
    {
    case 0x1015e156u: goto L_1015e156;
    case 0x1015e203u: goto L_1015e203;
    case 0x1015e215u: goto L_1015e215;
    case 0x1015e21cu: goto L_1015e21c;
    case 0x1015e223u: goto L_1015e223;
    case 0x1015e22bu: goto L_1015e22b;
    default: rt_fatal(g, COW_IMG(0x1015e14fu), "switch");
    }
    return 0;
L_1015e11f: ;
    COW_AT(1015e11f)
    esi = rd32(sp0 - 4u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_4 = rd32(sp0 - 4u);
    loc_18 = rd32(sp0 - 0x18u);
    goto L_1015e123;
L_1015e156: ;
    COW_AT(1015e156)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_1015e22b;
    eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(1015e163)
    if (rd8(self + 0xaeu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xaeu);
        goto L_1015e223;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xaeu);
    COW_AT(1015e171)
    wr32(sp0 - 0x1cu, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t6 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        ecx = t7;
        edx = t8;
        goto L_1015e18d;
    }
    ecx = t7;
    edx = t8;
    COW_AT(1015e17f)
    if ((rd8(edi) & 4u) == 0u) goto L_1015e22b;
    COW_AT(1015e188)
L_1015e229: ;
    COW_AT(1015e229)
    ebx = (ebx & 0xffffff00u) | 1u;
L_1015e22b: ;
    COW_AT(1015e22b)
    if (rd8(edi + 4u) != 0u)
    {
        eax = edi + 4u;
        edi = edi + 0x2cu;
        goto L_1015e11f;
    }
    eax = edi + 4u;
    COW_AT(1015e23c)
    edi = rd32(sp0 - 0x18u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_1015e23d: ;
    COW_AT(1015e23d)
    g->ebx = loc_c;
    g->esi = loc_14;
    g->edi = edi;
    g->ebp = loc_10;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
L_1015e18d: ;
    COW_AT(1015e18d)
    if (!(rd8(edi) & 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(edi);
        goto L_1015e22b;
    }
    ecx = (ecx & 0xffffff00u) | rd8(edi);
    COW_AT(1015e198)
    if ((int8_t)rd32(edi - 4u) < 0)
    {
        edx = rd32(edi - 4u);
        goto L_1015e229;
    }
    edx = rd32(edi - 4u);
    COW_AT(1015e1a3)
    if (rd32(COW_IMG(0x1057876cu)) == 0u) goto L_1015e22b;
    esi = rd32(COW_IMG(0x1057876cu));
    COW_AT(1015e1ad)
    if (rd16(esi + 0x68u) == 1u) goto L_1015e1fc;
    eax = rd16(esi + 0x68u) - 1u;
    COW_AT(1015e1b6)
    if (eax == 1u) goto L_1015e1f5;
    eax = eax - 1u;
    COW_AT(1015e1b9)
    if ((edx & 0x40000u) == 0u) goto L_1015e229;
    COW_AT(1015e1c1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t9 = cow_thiscall(g, COW_IMG(0x10126510u), self, 0);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 8u, t9);
    if (t9 == 0u)
    {
        ecx = t10;
        edx = t11;
        goto L_1015e229;
    }
    edx = t11;
    loc_8 = t9;
L_1015e1d0: ;
    COW_AT(1015e1d0)
    wr32(sp0 - 0x1cu, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0x18u;
    t12 = cow_call_regs(g, COW_IMG(0x10126550u), g->eax, g->ecx, edx, 0, 1, sp0 - 8u);
    t13 = g->edx;
    if ((rd32(t12 + 0x34u) & 0x20000u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        ecx = rd32(t12 + 0x34u);
        edx = t13;
        goto L_1015e1f1;
    }
    eax = rd32(sp0 - 8u);
    ecx = rd32(t12 + 0x34u);
    edx = t13;
    COW_AT(1015e1eb)
    if (eax != 0u)
    {
        loc_8 = rd32(sp0 - 8u);
        goto L_1015e1d0;
    }
    COW_AT(1015e1ef)
    goto L_1015e229;
L_1015e1f1: ;
    COW_AT(1015e1f1)
    zf = eax == 0u;
L_1015e227: ;
    COW_AT(1015e227)
    if (!zf) goto L_1015e22b;
    goto L_1015e229;
L_1015e1f5: ;
    COW_AT(1015e1f5)
    if ((ecx & 0x10u) == 0u) goto L_1015e22b;
    COW_AT(1015e1fa)
    goto L_1015e229;
L_1015e1fc: ;
    COW_AT(1015e1fc)
    if ((ecx & 0x20u) == 0u) goto L_1015e22b;
    COW_AT(1015e201)
    goto L_1015e229;
L_1015e203: ;
    COW_AT(1015e203)
    if (rd8(self + 0xaeu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi);
        goto L_1015e225;
    }
    eax = (eax & 0xffffff00u) | rd8(edi);
    COW_AT(1015e20f)
    if ((eax & 0x40u) == 0u) goto L_1015e22b;
    COW_AT(1015e213)
    goto L_1015e229;
L_1015e215: ;
    COW_AT(1015e215)
    if ((rd8(edi) & 8u) == 0u) goto L_1015e22b;
    COW_AT(1015e21a)
    goto L_1015e229;
L_1015e21c: ;
    COW_AT(1015e21c)
    if (!(rd8(edi) & 1u)) goto L_1015e22b;
    COW_AT(1015e221)
    goto L_1015e229;
L_1015e223: ;
    COW_AT(1015e223)
    eax = (eax & 0xffffff00u) | rd8(edi);
L_1015e225: ;
    COW_AT(1015e225)
    zf = (uint8_t)((uint8_t)eax - 0xffu) == 0u;
    goto L_1015e227;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1015e0f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015e112u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x1015e11fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e123u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e13bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e147u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e156u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e163u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e171u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e17fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e188u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e18du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e198u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e1a3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e1adu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e1b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e1b9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e1c1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e1d0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e1ebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015e1efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015e1f1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015e1f5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e1fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e1fcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e201u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e203u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e20fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e213u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e215u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e21au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e21cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e221u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e223u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e225u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e227u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e229u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e22bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e23cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1015e23du:
    {
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
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1015e0f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1015e0f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
