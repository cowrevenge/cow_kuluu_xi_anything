/* f_0x100afd10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100afd10(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100afd3cu: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afd3c;
    case 0x100afd43u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afd43;
    case 0x100afd5fu: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afd5f;
    case 0x100afd72u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afd72;
    case 0x100afd8du: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afd8d;
    case 0x100afda5u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afda5;
    case 0x100afdb0u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afdb0;
    case 0x100afdc8u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afdc8;
    case 0x100afdd3u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afdd3;
    case 0x100afdefu: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afdef;
    case 0x100afdfau: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afdfa;
    case 0x100afe16u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afe16;
    case 0x100afe21u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afe21;
    case 0x100afe39u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afe39;
    case 0x100afe51u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afe51;
    case 0x100afe60u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afe60;
    case 0x100afe6fu: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afe6f;
    case 0x100afe78u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afe78;
    case 0x100afe7eu: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100afe7e;
    default: break;
    }
#endif

    COW_AT(100afd10)
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t3 = g->edx;
    if ((rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 5u) & 0xfu) > 0xau)
    {
        eax = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 5u) & 0xfu;
        edx = t3;
        goto L_100afd5f;
    }
    eax = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 5u) & 0xfu;
    edx = t3;
    COW_AT(100afd3c)
    t4 = rd32(COW_IMG(0x100afe8cu) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x100afd43u: goto L_100afd43;
    case 0x100afd72u: goto L_100afd72;
    case 0x100afd8du: goto L_100afd8d;
    case 0x100afdb0u: goto L_100afdb0;
    case 0x100afdd3u: goto L_100afdd3;
    case 0x100afdfau: goto L_100afdfa;
    case 0x100afe21u: goto L_100afe21;
    case 0x100afe39u: goto L_100afe39;
    case 0x100afe51u: goto L_100afe51;
    case 0x100afe60u: goto L_100afe60;
    default: rt_fatal(g, COW_IMG(0x100afd3cu), "switch");
    }
    return;
L_100afd43: ;
    COW_AT(100afd43)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t39 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t40 = g->edx;
    g->edx = t40;
    t41 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t42 = g->edx;
    if (t41 == t39) goto L_100afe7e;
    eax = t41;
    edx = t42;
L_100afd5f: ;
    COW_AT(100afd5f)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t43 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 6u);
    wr16(self + 0x256u, (uint16_t)t43);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_100afd72: ;
    COW_AT(100afd72)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t35 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t36 = g->edx;
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t38 = g->edx;
    eax = t37;
    edx = t38;
    zf = t37 == t35;
L_100afe78: ;
    COW_AT(100afe78)
    if (zf) goto L_100afd5f;
L_100afe7e: ;
    COW_AT(100afe7e)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_100afd8d: ;
    COW_AT(100afd8d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t31 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t34 = g->edx;
    if ((int32_t)t33 <= (int32_t)t31)
    {
        eax = t33;
        edx = t34;
        goto L_100afd5f;
    }
    COW_AT(100afda5)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_100afdb0: ;
    COW_AT(100afdb0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t28 = g->edx;
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t30 = g->edx;
    if ((int32_t)t29 >= (int32_t)t27)
    {
        eax = t29;
        edx = t30;
        goto L_100afd5f;
    }
    COW_AT(100afdc8)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_100afdd3: ;
    COW_AT(100afdd3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t23 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t26 = g->edx;
    if ((int32_t)t25 < (int32_t)t23)
    {
        eax = t25;
        edx = t26;
        goto L_100afd5f;
    }
    COW_AT(100afdef)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_100afdfa: ;
    COW_AT(100afdfa)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t22 = g->edx;
    if ((int32_t)t21 > (int32_t)t19)
    {
        eax = t21;
        edx = t22;
        goto L_100afd5f;
    }
    COW_AT(100afe16)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_100afe21: ;
    COW_AT(100afe21)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    zf = t15 == t17;
    goto L_100afe78;
L_100afe39: ;
    COW_AT(100afe39)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    zf = (t11 | t13) == 0u;
    goto L_100afe78;
L_100afe51: ;
    COW_AT(100afe51)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    edi = t7;
    loc_c = 1u;
L_100afe6f: ;
    COW_AT(100afe6f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, loc_c);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    zf = (t9 & edi) == 0u;
    goto L_100afe78;
L_100afe60: ;
    COW_AT(100afe60)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    edi = ~t5;
    loc_c = 3u;
    goto L_100afe6f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100afd10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100afd3cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afd43u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afd5fu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afd72u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afd8du:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afda5u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afdb0u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afdc8u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afdd3u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afdefu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afdfau:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afe16u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afe21u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afe39u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afe51u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afe60u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afe6fu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100afe78u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100afe7eu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100afd10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100afd10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
