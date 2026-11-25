/* f_0x1023d050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1023d050(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023d05eu: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d05e;
    case 0x1023d069u: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d069;
    case 0x1023d070u: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d070;
    case 0x1023d07cu: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d07c;
    case 0x1023d07fu: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d07f;
    case 0x1023d089u: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d089;
    case 0x1023d090u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d090;
    case 0x1023d095u: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d095;
    case 0x1023d09fu: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d09f;
    case 0x1023d0a9u: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d0a9;
    case 0x1023d0b5u: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d0b5;
    case 0x1023d0c1u: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d0c1;
    case 0x1023d0c4u: eax = g->eax; self = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d0c4;
    case 0x1023d0deu: eax = g->eax; self = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d0de;
    case 0x1023d0e3u: eax = g->eax; self = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d0e3;
    case 0x1023d0efu: eax = g->eax; self = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d0ef;
    case 0x1023d0fbu: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d0fb;
    case 0x1023d100u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d100;
    case 0x1023d105u: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d105;
    case 0x1023d142u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d142;
    case 0x1023d147u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d147;
    case 0x1023d14cu: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d14c;
    case 0x1023d15au: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023d15a;
    default: break;
    }
#endif

    COW_AT(1023d050)
    if (rd32(self + 0x30u) == 1u)
    {
        eax = rd32(self + 0x30u);
        edx = 1u;
        goto L_1023d090;
    }
    COW_AT(1023d05e)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = 1u;
        goto L_1023d090;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    COW_AT(1023d069)
    t1 = rd32(COW_IMG(0x1023d174u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1023d070u: goto L_1023d070;
    case 0x1023d090u: edx = 1u; goto L_1023d090;
    case 0x1023d0b5u: goto L_1023d0b5;
    case 0x1023d0fbu: goto L_1023d0fb;
    case 0x1023d105u: goto L_1023d105;
    case 0x1023d14cu: goto L_1023d14c;
    default: rt_fatal(g, COW_IMG(0x1023d069u), "switch");
    }
    return 0;
L_1023d070: ;
    COW_AT(1023d070)
    if ((uint32_t)(int8_t)rd8(self + 0xa5e0u) == 2u) goto L_1023d095;
    eax = (uint32_t)(int8_t)rd8(self + 0xa5e0u) - 2u;
    COW_AT(1023d07c)
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = 1u;
        goto L_1023d090;
    }
    COW_AT(1023d07f)
    if (rd32(self + 0xa5d8u) == 0u) goto L_1023d09f;
    eax = rd32(self + 0xa5d8u);
L_1023d089: ;
    COW_AT(1023d089)
    wr32(self + 0xa5d8u, eax - 1u);
    eax = eax - 1u;
    edx = 1u;
L_1023d090: ;
    COW_AT(1023d090)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1023d095: ;
    COW_AT(1023d095)
    if (rd32(self + 0xa5d8u) != 0u)
    {
        eax = rd32(self + 0xa5d8u);
        goto L_1023d089;
    }
L_1023d09f: ;
    COW_AT(1023d09f)
    if ((int32_t)rd32(self + 0xa5d4u) <= 0)
    {
        eax = rd32(self + 0xa5d4u);
        edx = 1u;
        goto L_1023d090;
    }
    eax = rd32(self + 0xa5d4u);
    COW_AT(1023d0a9)
    wr32(self + 0xa5d4u, eax - 1u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = 1u;
    return eax - 1u;
L_1023d0b5: ;
    COW_AT(1023d0b5)
    if ((uint32_t)(int8_t)rd8(self + 0xa5e0u) == 2u) goto L_1023d0c4;
    eax = (uint32_t)(int8_t)rd8(self + 0xa5e0u) - 2u;
    COW_AT(1023d0c1)
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = 1u;
        goto L_1023d090;
    }
L_1023d0c4: ;
    COW_AT(1023d0c4)
    if (rd32(self + 0xa5d4u) + rd32(self + 0xa5d8u) == rd32(self + 0xa5dcu) - 1u)
    {
        eax = rd32(self + 0xa5d8u);
        edx = rd32(self + 0xa5d4u);
        goto L_1023d090;
    }
    eax = rd32(self + 0xa5d8u);
    edx = rd32(self + 0xa5d4u);
    COW_AT(1023d0de)
    if (eax != 8u) goto L_1023d0ef;
    COW_AT(1023d0e3)
    wr32(self + 0xa5d4u, edx + 1u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx + 1u;
    return eax;
L_1023d0ef: ;
    COW_AT(1023d0ef)
    wr32(self + 0xa5d8u, eax + 1u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax + 1u;
L_1023d0fb: ;
    COW_AT(1023d0fb)
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(1023d100)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1023d105: ;
    COW_AT(1023d105)
    t3 = rd32(self + 8u);
    wr32(self + 0x30u, 1u);
    wr8(t3 + 0x5du, 1u);
    t4 = rd16(sp0 + 8u);
    wr32(self + 0xa640u, 0xffffffffu);
    t5 = (uint32_t)(int16_t)t4 - 1u;
    wr32(self + 0x14u, t5);
    wr32(self + 0xa644u, 0xffffffffu);
    eax = COW_IMG(0x10376470u);
    ecx = self;
L_1023d133: ;
    COW_AT(1023d133)
    t6 = rd8(eax);
    wr8(eax + self - COW_IMG(0x10376470u) + 0xa754u, (uint8_t)t6);
    if ((uint8_t)t6 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t6;
        goto L_1023d133;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t6;
    COW_AT(1023d13d)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = self + 0xa754u - COW_IMG(0x10376470u);
    g->esp = sp0 - 8u;
    t7 = cow_stdcall(g, COW_IMG(0x1031091eu), 0);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(1023d142)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(1023d147)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1023d14c: ;
    COW_AT(1023d14c)
    if (rd8(self + 0xa5e1u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xa5e1u);
        edx = 1u;
        goto L_1023d090;
    }
    COW_AT(1023d15a)
    t2 = rd32(self);
    wr32(sp0 + 8u, 2u);
    wr32(sp0 + 4u, 5u);
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = 1u;
    return cow_tailcall(g, rd32(t2 + 0x18u), t2, self, 1u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023d050(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023d05eu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d069u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d070u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d07cu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d07fu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d089u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d090u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1023d095u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d09fu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d0a9u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d0b5u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d0c1u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d0c4u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1023d0deu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1023d0e3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1023d0efu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1023d0fbu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d100u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1023d105u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d142u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1023d147u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1023d14cu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d15au:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1023d133: holds self, which no location here says
     1023d13d: holds self, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1023d050(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023d050(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
