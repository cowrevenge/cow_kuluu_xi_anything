/* f_0x1015bc40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1015bc40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_15b0;
    uint32_t loc_15b4;
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
    cow_frame(g, sp0, 5576u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015bc5du: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x15b4u); in_esi = rd32(sp0 - 0x15b0u); g->edi = rd32(sp0 - 0x15b4u); g->esi = rd32(sp0 - 0x15b0u); goto E_1015bc5d;
    case 0x1015bc6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1015bc6e;
    case 0x1015bc7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1015bc7e;
    case 0x1015bc87u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1015bc87;
    case 0x1015bc9du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1015bc9d;
    case 0x1015bcacu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1015bcac;
    case 0x1015bcc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1015bcc6;
    case 0x1015bcf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1015bcf0;
    case 0x1015bd20u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1015bd20;
    case 0x1015bd29u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_15b4 = rd32(sp0 - 0x15b4u); loc_15b0 = rd32(sp0 - 0x15b0u); goto E_1015bd29;
    case 0x1015bd2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_15b4 = rd32(sp0 - 0x15b4u); loc_15b0 = rd32(sp0 - 0x15b0u); goto E_1015bd2b;
    default: break;
    }
#endif

    COW_AT(1015bc40)
    wr32(sp0 - 0x15b0u, in_esi);
    wr32(sp0 - 0x15b4u, in_edi);
    if (arg1 == 0u)
    {
        edx = in_edx;
        loc_15b0 = in_esi;
        loc_15b4 = in_edi;
        goto L_1015bd29;
    }
    COW_AT(1015bc5d)
    wr32(sp0 - 0x15b8u, arg1);
    g->eax = 0x15acu;
    g->edx = in_edx;
    g->esp = sp0 - 0x15b4u;
    t1 = cow_cdecl(g, COW_IMG(0x10159fb0u), 1, arg1);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        loc_15b0 = in_esi;
        loc_15b4 = in_edi;
        goto L_1015bd2b;
    }
    eax = t1;
    edx = t2;
    COW_AT(1015bc6e)
    wr32(sp0 - 0x15b8u, 1u);
    wr32(sp0 - 0x15bcu, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x15b4u;
    t3 = cow_thiscall(g, COW_IMG(0x1015b970u), self, 2, arg1, 1u);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        ecx = t3;
        edx = t4;
        goto L_1015bc9d;
    }
    eax = t3;
    ecx = t3;
    edx = t4;
    COW_AT(1015bc7e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x15b4u;
    t5 = cow_thiscall(g, COW_IMG(0x1015b190u), ecx, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_1015bc9d;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(1015bc87)
    wr32(sp0 - 0x15b8u, 0u);
    wr32(sp0 - 0x15bcu, ecx);
    g->edx = edx;
    g->esp = sp0 - 0x15a8u;
    t8 = cow_call_regs(g, COW_IMG(0x10159ff0u), eax, ecx, g->edx, 1, 5, ecx, 0u, rd32(sp0 - 0x15b4u), rd32(sp0 - 0x15b0u), rd32(sp0 - 0x15acu));
    t9 = g->edx;
    g->esi = rd32(sp0 - 0x15b0u);
    g->edi = rd32(sp0 - 0x15b4u);
    g->edx = t9;
    return t8;
L_1015bc9d: ;
    COW_AT(1015bc9d)
    wr32(sp0 - 0x15b8u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x15b4u;
    t10 = cow_cdecl(g, COW_IMG(0x10159eb0u), 1, arg1);
    t11 = g->edx;
    if (t10 == 0u)
    {
        edx = t11;
        loc_15b0 = rd32(sp0 - 0x15b0u);
        loc_15b4 = rd32(sp0 - 0x15b4u);
        goto L_1015bd29;
    }
    eax = t10;
    edx = t11;
    edi = t10;
    COW_AT(1015bcac)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x15b4u;
    t12 = cow_thiscall(g, COW_IMG(0x1015af80u), sp0 - 0x15acu, 0);
    t13 = g->edx;
    wr32(sp0 - 0xfcu, arg1);
    if (rd32(COW_IMG(0x10662dccu)) == 0u)
    {
        eax = t12;
        edx = t13;
        goto L_1015bd20;
    }
    ecx = rd32(COW_IMG(0x10662dccu));
    COW_AT(1015bcc6)
    t14 = (arg1 * 5u + rd32(edi + 0xcu) * 5u - rd32(edi + 4u) * 5u) << 0xau;
    wr32(sp0 - 0x15b8u, t14);
    wr32(sp0 - 0x15bcu, 0x280u);
    wr32(sp0 - 0x15c0u, sp0 - 0x14fcu);
    wr32(sp0 - 0x15c4u, rd32(edi));
    g->eax = rd32(edi);
    g->edx = sp0 - 0x14fcu;
    t15 = rd32(edi);
    g->esp = sp0 - 0x15b4u;
    t16 = cow_thiscall(g, COW_IMG(0x101c4740u), ecx, 4, t15, sp0 - 0x14fcu, 0x280u, t14);
    t17 = g->edx;
    if ((int32_t)t16 < 0)
    {
        eax = t16;
        edx = t17;
        goto L_1015bd20;
    }
    eax = t16;
    edx = t17;
    COW_AT(1015bcf0)
    g->esp = sp0 - 0x15b4u;
    t18 = cow_call_regs(g, COW_IMG(0x1015b3c0u), eax, sp0 - 0x15acu, edx, 1, 0);
    t19 = g->edx;
    wr32(sp0 - 0x15b8u, 0u);
    wr32(sp0 - 0x15bcu, sp0 - 0x15acu);
    g->edx = t19;
    g->esp = sp0 - 0x15a8u;
    t20 = cow_call_regs(g, COW_IMG(0x10159ff0u), t18, sp0 - 0x15acu, g->edx, 1, 5, sp0 - 0x15acu, 0u, rd32(sp0 - 0x15b4u), rd32(sp0 - 0x15b0u), rd32(sp0 - 0x15acu));
    t21 = g->edx;
    g->esp = sp0 - 0x15b4u;
    cow_fastcall(g, COW_IMG(0x1015af60u), sp0 - 0x15acu, t21, 0);
    t22 = g->edx;
    g->esi = rd32(sp0 - 0x15b0u);
    g->edi = rd32(sp0 - 0x15b4u);
    g->edx = t22;
    return t20;
L_1015bd20: ;
    COW_AT(1015bd20)
    g->esp = sp0 - 0x15b4u;
    cow_fastcall(g, COW_IMG(0x1015af60u), sp0 - 0x15acu, edx, 0);
    t23 = g->edx;
    edx = t23;
    loc_15b0 = rd32(sp0 - 0x15b0u);
    loc_15b4 = rd32(sp0 - 0x15b4u);
L_1015bd29: ;
    COW_AT(1015bd29)
    eax = 0u;
L_1015bd2b: ;
    COW_AT(1015bd2b)
    g->esi = loc_15b0;
    g->edi = loc_15b4;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1015bc40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015bc5du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x15b4u);
        in_esi = rd32(sp0 - 0x15b0u);
        g->esp = sp0 - 0x15b4u;
        g->eax = 0x15acu;
        g->esi = arg1;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x1015bc6eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x15b4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1015bc7eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x15b4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1015bc87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x15b4u;
        (void)sp0;
        return 1;
    }
    case 0x1015bc9du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x15b4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1015bcacu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x15b4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1015bcc6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x15b4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1015bcf0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x15b4u;
        wr32(sp0 - 0x15c0u, sp0 - 0x14fcu);
        (void)sp0;
        return 1;
    }
    case 0x1015bd20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x15b4u;
        (void)sp0;
        return 1;
    }
    case 0x1015bd29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_15b0;
        uint32_t loc_15b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_15b4 = rd32(sp0 - 0x15b4u);
        loc_15b0 = rd32(sp0 - 0x15b0u);
        g->esp = sp0 - 0x15b4u;
        (void)sp0;
        return 1;
    }
    case 0x1015bd2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_15b0;
        uint32_t loc_15b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_15b4 = rd32(sp0 - 0x15b4u);
        loc_15b0 = rd32(sp0 - 0x15b0u);
        g->esp = sp0 - 0x15b4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1015bc40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1015bc40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
