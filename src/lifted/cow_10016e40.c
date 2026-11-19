/* f_0x10016e40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10016e40(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 276u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10016e53u: eax = g->eax; ecx = g->ecx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016e53;
    case 0x10016e5du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016e5d;
    case 0x10016ea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016ea2;
    case 0x10016ee5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016ee5;
    case 0x10016ef4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016ef4;
    case 0x10016efdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016efd;
    default: break;
    }
#endif

    COW_AT(10016e40)
    eax = arg2;
    ecx = self;
L_10016e53: ;
    COW_AT(10016e53)
    t1 = rd8(eax);
    wr8(eax + sp0 - arg2 - 0x104u, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_10016e53;
    }
    ecx = (ecx & 0xffffff00u) | t1;
    COW_AT(10016e5d)
    wr32(sp0 - 0x108u, in_edi);
    edi = sp0 - 0x104u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t2 = rd32(COW_IMG(0x1035071cu));
    t3 = rd32(COW_IMG(0x10350720u));
    t4 = rd32(COW_IMG(0x10350724u));
    wr32(edi - 1u, t2);
    t5 = rd16(COW_IMG(0x10350728u));
    wr32(edi + 3u, t3);
    wr32(sp0 - 0x10cu, sp0 - 0x104u);
    wr32(edi + 7u, t4);
    wr16(edi + 0xbu, (uint16_t)t5);
    g->eax = (t2 & 0xffff0000u) | t5;
    g->ecx = sp0 - 0x104u;
    g->edx = t4;
    g->esp = sp0 - 0x108u;
    t6 = cow_stdcall(g, rd32(COW_IMG(0x10329134u)), 1, sp0 - 0x104u);   /* kernel32.dll!LoadLibraryA */
    t7 = g->ecx;
    t8 = g->edx;
    wr32(COW_IMG(0x10456a34u), t6);
    if (t6 == 0u)
    {
        eax = t6;
        goto L_10016efd;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(10016ea2)
    wr32(sp0 - 0x108u, in_esi);
    wr32(sp0 - 0x10cu, COW_IMG(0x103506f4u));
    wr32(sp0 - 0x110u, eax);
    g->eax = eax;
    g->ecx = ecx;
    t9 = rd32(COW_IMG(0x10329138u));
    g->esp = sp0 - 0x108u;
    t10 = cow_stdcall(g, t9, 2, eax, COW_IMG(0x103506f4u));   /* kernel32.dll!GetProcAddress */
    t11 = g->ecx;
    wr32(sp0 - 0x10cu, COW_IMG(0x103506d8u));
    wr32(sp0 - 0x110u, rd32(COW_IMG(0x10456a34u)));
    t12 = rd32(COW_IMG(0x10456a34u));
    wr32(COW_IMG(0x10456a38u), t10);
    g->edx = t12;
    t13 = cow_thiscall(g, t9, t11, 2, t12, COW_IMG(0x103506d8u));
    t14 = g->ecx;
    t15 = g->edx;
    wr32(COW_IMG(0x10456a3cu), t13);
    wr32(sp0 - 0x10cu, COW_IMG(0x103506bcu));
    wr32(sp0 - 0x110u, rd32(COW_IMG(0x10456a34u)));
    g->eax = rd32(COW_IMG(0x10456a34u));
    g->edx = t15;
    t16 = rd32(COW_IMG(0x10456a34u));
    t17 = cow_thiscall(g, t9, t14, 2, t16, COW_IMG(0x103506bcu));
    t18 = g->edx;
    wr32(COW_IMG(0x10456a40u), t17);
    if (rd32(COW_IMG(0x10456a38u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456a38u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10456a38u));
        edx = t18;
    COW_AT(10016ee5)
        wr32(sp0 - 0x108u, 0u);
        wr32(sp0 - 0x10cu, arg1);
        g->eax = eax;
        g->esp = sp0 - 0x104u;
        t19 = cow_thiscall_cdecl(g, eax, arg1, 2, arg1, 0u);
        eax = t19;
    }
    COW_AT(10016ef4)
    g->esi = in_esi;
    g->edi = in_edi;
    return (eax & 0xffffff00u) | 1u;
L_10016efd: ;
    COW_AT(10016efd)
    g->esi = in_esi;
    g->edi = in_edi;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10016e40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10016e53u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        g->edx = sp0 - 0x104u - arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016e5du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x10016ea2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        wr32(sp0 - 0x10cu, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x10016ee5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x10016ef4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x10016efdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        wr32(sp0 - 0x10cu, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10016e40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10016e40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
