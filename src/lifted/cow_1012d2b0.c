/* f_0x1012d2b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1012d2b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012d2cau: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d2ca;
    case 0x1012d2d1u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d2d1;
    case 0x1012d2deu: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d2de;
    case 0x1012d2e5u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d2e5;
    case 0x1012d2eeu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d2ee;
    case 0x1012d2f7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d2f7;
    case 0x1012d300u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d300;
    case 0x1012d305u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d305;
    case 0x1012d319u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d319;
    case 0x1012d32cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d32c;
    case 0x1012d341u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d341;
    case 0x1012d34bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d34b;
    case 0x1012d353u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d353;
    case 0x1012d35au: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d35a;
    case 0x1012d360u: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d360;
    case 0x1012d36au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d36a;
    case 0x1012d370u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d370;
    case 0x1012d384u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d384;
    case 0x1012d38au: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d38a;
    case 0x1012d394u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d394;
    case 0x1012d39au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d39a;
    case 0x1012d3aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d3ae;
    case 0x1012d3b4u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d3b4;
    case 0x1012d3bau: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d3ba;
    case 0x1012d3beu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d3be;
    case 0x1012d3c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d3c9;
    case 0x1012d3d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d3d9;
    case 0x1012d3e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d3e8;
    case 0x1012d3f1u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d3f1;
    case 0x1012d3f8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012d3f8;
    default: break;
    }
#endif

    COW_AT(1012d2b0)
    if ((uint32_t)(int16_t)arg1 - 3u > 3u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_1012d3e8;
    }
    COW_AT(1012d2ca)
    t1 = rd32(COW_IMG(0x1012d40cu) + (uint32_t)(int16_t)arg1 * 4u - 0xcu);
    switch (t1 - RD)
    {
    case 0x1012d2d1u: goto L_1012d2d1;
    case 0x1012d3d9u: eax = (uint32_t)(int16_t)arg1 - 3u; edx = in_edx; goto L_1012d3d9;
    case 0x1012d3f1u: goto L_1012d3f1;
    default: rt_fatal(g, COW_IMG(0x1012d2cau), "switch");
    }
    return 0;
L_1012d2d1: ;
    COW_AT(1012d2d1)
    if ((uint32_t)(int16_t)arg2 - 1u > 7u)
    {
        edx = in_edx;
        goto L_1012d3c9;
    }
    COW_AT(1012d2de)
    t2 = rd32(COW_IMG(0x1012d41cu) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t2 - RD)
    {
    case 0x1012d2e5u: goto L_1012d2e5;
    case 0x1012d2eeu: goto L_1012d2ee;
    case 0x1012d35au: goto L_1012d35a;
    case 0x1012d360u: goto L_1012d360;
    case 0x1012d38au: goto L_1012d38a;
    case 0x1012d3b4u: goto L_1012d3b4;
    case 0x1012d3bau: goto L_1012d3ba;
    case 0x1012d3f8u: eax = (uint32_t)(int16_t)arg2 - 1u; goto L_1012d3f8;
    default: rt_fatal(g, COW_IMG(0x1012d2deu), "switch");
    }
    return 0;
L_1012d2e5: ;
    COW_AT(1012d2e5)
    eax = (uint32_t)(int16_t)arg2 - 1u;
    edx = in_edx;
    loc_c = 0u;
    loc_10 = 2u;
L_1012d3be: ;
    COW_AT(1012d3be)
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101ad670u), rd32(COW_IMG(0x10662da4u)), 2, loc_10, loc_c);
    t22 = g->edx;
    edx = t22;
L_1012d3c9: ;
    COW_AT(1012d3c9)
    g->eax = rd32(rd32(COW_IMG(0x10662d40u)));
    g->edx = edx;
    t23 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0 - 8u;
    t24 = cow_thiscall(g, rd32(t23 + 0x24u), rd32(COW_IMG(0x10662d40u)), 1, COW_IMG(0x103d3c84u));
    t25 = g->edx;
    eax = t24;
    edx = t25;
L_1012d3d9: ;
    COW_AT(1012d3d9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f538u));
    t27 = g->edx;
    eax = t26;
    edx = t27;
L_1012d3e8: ;
    COW_AT(1012d3e8)
    wr16(self + 0x16u, (uint16_t)arg2);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1012d2ee: ;
    COW_AT(1012d2ee)
    if ((uint32_t)(int16_t)rd16(self + 0x14u) == 0xfffffffdu)
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x14u);
        goto L_1012d353;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x14u);
    COW_AT(1012d2f7)
    if (eax == 0xfffffffeu)
    {
        edx = in_edx;
        goto L_1012d3c9;
    }
    COW_AT(1012d300)
    if (eax == 0xffffffffu) goto L_1012d319;
    COW_AT(1012d305)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x1018d950u), rd32(COW_IMG(0x1066268cu)), 1, eax);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    loc_c = t15;
    loc_10 = 4u;
    goto L_1012d3be;
L_1012d319: ;
    COW_AT(1012d319)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, COW_IMG(0x101598b0u), rd32(COW_IMG(0x1057876cu)), 0);
    t18 = g->edx;
    if (t17 == 0u)
    {
        edx = t18;
        goto L_1012d3c9;
    }
    eax = t17;
    edx = t18;
    COW_AT(1012d32c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_thiscall(g, COW_IMG(0x101598b0u), rd32(COW_IMG(0x1057876cu)), 0);
    t20 = g->edx;
    if (rd16(t19 + 0x210u) == 0u)
    {
        eax = t19;
        edx = t20;
    COW_AT(1012d34b)
        loc_c = eax + 0x7cu;
        eax = eax + 0x7cu;
        loc_10 = 4u;
    }
    else
    {
        eax = t19;
        edx = t20;
    COW_AT(1012d341)
        loc_c = eax + 0x214u;
        eax = eax + 0x214u;
        loc_10 = 4u;
    }
    goto L_1012d3be;
L_1012d353: ;
    COW_AT(1012d353)
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037c50u), self, 0);
    t21 = g->edx;
    edx = t21;
    goto L_1012d3c9;
L_1012d35a: ;
    COW_AT(1012d35a)
    eax = (uint32_t)(int16_t)arg2 - 1u;
    edx = in_edx;
    loc_c = 0u;
    loc_10 = 5u;
    goto L_1012d3be;
L_1012d360: ;
    COW_AT(1012d360)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t10 = cow_stdcall(g, COW_IMG(0x100e3730u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint16_t)t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_1012d370;
    }
    eax = t10;
    edx = t12;
    COW_AT(1012d36a)
    loc_c = 0u;
    loc_10 = 6u;
    goto L_1012d3be;
L_1012d370: ;
    COW_AT(1012d370)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, 0u, 0u, 1u);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        edx = t14;
        goto L_1012d3c9;
    }
    eax = t13;
    edx = t14;
    COW_AT(1012d384)
    loc_c = 0u;
    loc_10 = 6u;
    goto L_1012d3be;
L_1012d38a: ;
    COW_AT(1012d38a)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t5 = cow_stdcall(g, COW_IMG(0x100e3730u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint16_t)t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_1012d39a;
    }
    eax = t5;
    edx = t7;
    COW_AT(1012d394)
    loc_c = 0u;
    loc_10 = 0xcu;
    goto L_1012d3be;
L_1012d39a: ;
    COW_AT(1012d39a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, 0u, 0u, 2u);
    t9 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        edx = t9;
        goto L_1012d3c9;
    }
    eax = t8;
    edx = t9;
    COW_AT(1012d3ae)
    loc_c = 0u;
    loc_10 = 0xcu;
    goto L_1012d3be;
L_1012d3b4: ;
    COW_AT(1012d3b4)
    eax = (uint32_t)(int16_t)arg2 - 1u;
    edx = in_edx;
    loc_c = 0u;
    loc_10 = 0xbu;
    goto L_1012d3be;
L_1012d3ba: ;
    COW_AT(1012d3ba)
    eax = (uint32_t)(int16_t)arg2 - 1u;
    edx = in_edx;
    loc_c = 0u;
    loc_10 = 3u;
    goto L_1012d3be;
L_1012d3f1: ;
    COW_AT(1012d3f1)
    if (rd16(self + 0x16u) != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_1012d3e8;
    }
    eax = (uint32_t)(int16_t)arg1 - 3u;
L_1012d3f8: ;
    COW_AT(1012d3f8)
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x1012d210u), eax, self, g->edx, 0, 2, 1u, 1u);
    t4 = g->edx;
    wr16(self + 0x16u, (uint16_t)arg2);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t4;
    return t3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012d2b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012d2cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->esi = self;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d2d1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d2deu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->esi = self;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d2e5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d2eeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d2f7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d300u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d305u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d319u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d32cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d341u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d34bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d353u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d35au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d360u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->esi = self;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d36au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d370u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d384u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d38au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->esi = self;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d394u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d39au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d3aeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d3b4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d3bau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d3beu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d3c9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d3d9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d3e8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d3f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012d3f8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1012d2b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1012d2b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
