/* f_0x10131840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10131840(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013184fu: self = g->ecx; zf = g->zf; goto E_1013184f;
    case 0x10131856u: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; goto E_10131856;
    case 0x10131868u: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; goto E_10131868;
    case 0x1013186du: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; goto E_1013186d;
    case 0x1013186fu: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; goto E_1013186f;
    case 0x10131878u: eax = g->eax; edx = g->edx; zf = g->zf; goto E_10131878;
    case 0x1013187bu: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; goto E_1013187b;
    case 0x10131886u: eax = g->eax; edx = g->edx; zf = g->zf; goto E_10131886;
    case 0x10131889u: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; goto E_10131889;
    case 0x1013189bu: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; goto E_1013189b;
    case 0x101318a0u: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; goto E_101318a0;
    case 0x101318a5u: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; goto E_101318a5;
    case 0x101318aeu: eax = g->eax; edx = g->edx; zf = g->zf; goto E_101318ae;
    case 0x101318b1u: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; goto E_101318b1;
    case 0x101318bcu: eax = g->eax; edx = g->edx; zf = g->zf; goto E_101318bc;
    case 0x101318bfu: eax = g->eax; self = g->ecx; zf = g->zf; goto E_101318bf;
    case 0x101318ccu: eax = g->eax; self = g->ecx; zf = g->zf; goto E_101318cc;
    case 0x101318d2u: eax = g->eax; self = g->ecx; zf = g->zf; goto E_101318d2;
    case 0x101318ddu: eax = g->eax; edx = g->edx; zf = g->zf; goto E_101318dd;
    case 0x101318e0u: eax = g->eax; self = g->ecx; zf = g->zf; goto E_101318e0;
    case 0x101318e6u: eax = g->eax; self = g->ecx; zf = g->zf; goto E_101318e6;
    case 0x101318f1u: eax = g->eax; edx = g->edx; zf = g->zf; goto E_101318f1;
    case 0x101318f4u: self = g->ecx; edx = g->edx; zf = g->zf; goto E_101318f4;
    case 0x10131901u: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; goto E_10131901;
    case 0x10131907u: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; goto E_10131907;
    case 0x10131912u: eax = g->eax; edx = g->edx; zf = g->zf; goto E_10131912;
    case 0x10131915u: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; goto E_10131915;
    case 0x1013191bu: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; goto E_1013191b;
    case 0x10131926u: eax = g->eax; edx = g->edx; zf = g->zf; goto E_10131926;
    default: break;
    }
#endif

    COW_AT(10131840)
    if ((uint32_t)(int16_t)arg1 - 1u > 3u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_10131926;
    }
    COW_AT(1013184f)
    t1 = rd32(COW_IMG(0x1013192cu) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10131856u: goto L_10131856;
    case 0x10131889u: goto L_10131889;
    case 0x101318bfu: goto L_101318bf;
    case 0x101318f4u: goto L_101318f4;
    default: rt_fatal(g, COW_IMG(0x1013184fu), "switch");
    }
    return 0;
L_10131856: ;
    COW_AT(10131856)
    if ((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) & 0x80000003u) >= 0)
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) & 0x80000003u;
        zf = ((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) & 0x80000003u) == 0u;
    }
    else
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) & 0x80000003u;
    COW_AT(10131868)
        zf = (edx - 1u | 0xfffffffcu) + 1u == 0u;
        edx = (edx - 1u | 0xfffffffcu) + 1u;
    }
    COW_AT(1013186d)
    if (zf) goto L_1013187b;
    COW_AT(1013186f)
    g->eax = eax + 1u;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax + 1u, 1u);
    eax = t8;
    COW_AT(10131878)
    return eax;
L_1013187b: ;
    COW_AT(1013187b)
    g->eax = eax - 3u;
    g->esp = sp0;
    t9 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax - 3u, 1u);
    eax = t9;
    COW_AT(10131886)
    return eax;
L_10131889: ;
    COW_AT(10131889)
    if ((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) & 0x80000003u) >= 0)
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) & 0x80000003u;
    }
    else
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) & 0x80000003u;
    COW_AT(1013189b)
        edx = (edx - 1u | 0xfffffffcu) + 1u;
    }
    COW_AT(101318a0)
    if (edx == 1u) goto L_101318b1;
    COW_AT(101318a5)
    g->eax = eax - 1u;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax - 1u, 1u);
    eax = t6;
    COW_AT(101318ae)
    return eax;
L_101318b1: ;
    COW_AT(101318b1)
    g->eax = eax + 3u;
    g->esp = sp0;
    t7 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax + 3u, 1u);
    eax = t7;
    COW_AT(101318bc)
    return eax;
L_101318bf: ;
    COW_AT(101318bf)
    if ((int16_t)rd16(rd32(self + 8u) + 0x4cu) < 1)
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        goto L_101318e0;
    }
    eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    COW_AT(101318cc)
    if ((int16_t)eax > 4) goto L_101318e6;
    COW_AT(101318d2)
    g->eax = eax + 0xcu;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax + 0xcu, 1u);
    eax = t4;
    COW_AT(101318dd)
    return eax;
L_101318e0: ;
    COW_AT(101318e0)
    if ((int16_t)eax <= 4) goto L_10131926;
L_101318e6: ;
    COW_AT(101318e6)
    g->eax = eax - 4u;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax - 4u, 1u);
    eax = t5;
    COW_AT(101318f1)
    return eax;
L_101318f4: ;
    COW_AT(101318f4)
    if ((int16_t)rd16(rd32(self + 8u) + 0x4cu) < 13)
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        edx = rd32(self + 8u);
        goto L_10131915;
    }
    eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    edx = rd32(self + 8u);
    COW_AT(10131901)
    if ((int16_t)eax > 16) goto L_10131915;
    COW_AT(10131907)
    g->eax = eax - 0xcu;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax - 0xcu, 1u);
    eax = t2;
    COW_AT(10131912)
    return eax;
L_10131915: ;
    COW_AT(10131915)
    if ((int16_t)eax <= 12)
    {
    COW_AT(1013191b)
        g->eax = eax + 4u;
        g->esp = sp0;
        t3 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax + 4u, 1u);
        eax = t3;
    }
L_10131926: ;
    COW_AT(10131926)
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10131840(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013184fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t zf;
        self = g->ecx;
        zf = g->zf;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10131856u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10131868u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1013186du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1013186fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10131878u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1013187bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10131886u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10131889u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1013189bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101318a0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101318a5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101318aeu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101318b1u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101318bcu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101318bfu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101318ccu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101318d2u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101318ddu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101318e0u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101318e6u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101318f1u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101318f4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10131901u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10131907u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10131912u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10131915u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1013191bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10131926u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10131840(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10131840(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
